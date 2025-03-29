SELECT
    user_id,
    ROUND(AVG(IF(activity_type = "free_trial", activity_duration, NULL)), 2) trial_avg_duration,
    ROUND(AVG(IF(activity_type = "paid", activity_duration, NULL)), 2) paid_avg_duration
FROM UserActivity
GROUP BY 1
HAVING AVG(IF(activity_type = "paid", activity_duration, NULL)) IS NOT NULL
ORDER BY 1;
