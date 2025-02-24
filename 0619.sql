SELECT IF(count(*) = 1, num, NULL) num
FROM (SELECT num
FROM MyNumbers
GROUP BY 1
HAVING count(*) = 1
ORDER BY 1 DESC
LIMIT 1) a;