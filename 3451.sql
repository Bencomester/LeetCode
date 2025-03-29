SELECT ip, COUNT(*) invalid_count
FROM logs
WHERE ip NOT REGEXP "^(([1-9][0-9]?|1[0-9][0-9]|2[0-4][0-9]|25[0-5])[.]){3}([1-9][0-9]?|1[0-9][0-9]|2[0-4][0-9]|25[0-5])$"
GROUP BY 1
ORDER BY 2 DESC, 1 DESC;
