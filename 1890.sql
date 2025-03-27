SELECT user_id, DATE_FORMAT(MAX(time_stamp), '%Y-%m-%d %H:%i:%s') last_stamp
FROM Logins
WHERE time_stamp BETWEEN '2020-01-01 00:00:00' AND '2020-12-31 23:59:59'
GROUP BY 1;
