SELECT email
FROM Person
GROUP BY 1
HAVING count(*) > 1;
