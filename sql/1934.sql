SELECT s.user_id, 
    IF(c.rate IS NULL, 0, ROUND(c.rate, 2)) confirmation_rate
FROM Signups s
LEFT JOIN (SELECT user_id, SUM(IF(action = "confirmed", 1 ,0)) / COUNT(*) rate FROM Confirmations GROUP BY 1) c
ON s.user_id = c.user_id
GROUP BY 1;