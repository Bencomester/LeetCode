SELECT contest_id, ROUND(100 * COUNT(user_id) / (SELECT COUNT(*) FROM Users), 2) percentage
FROM Register r
GROUP BY 1
ORDER BY 2 DESC, 1;