SELECT *
FROM Cinema
WHERE id mod 2 = 1 AND description != "boring"
ORDER BY 4 DESC;