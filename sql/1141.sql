SELECT activity_date day, count(*) active_users
FROM (SELECT DISTINCT activity_date, user_id FROM Activity) a
WHERE activity_date BETWEEN DATE_SUB("2019-07-27", INTERVAL 29 DAY) AND "2019-07-27"
GROUP BY 1
ORDER BY 1;