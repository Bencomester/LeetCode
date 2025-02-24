SELECT user_id, count(*) followers_count
FROM Followers
GROUP BY 1
ORDER BY 1;