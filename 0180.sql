SELECT DISTINCT a.num ConsecutiveNums
FROM Logs a, Logs b, Logs c
WHERE a.id = b.id + 1 AND b.id = c.id + 1 AND a.num = b.num AND c.num = b.num;