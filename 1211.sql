SELECT q.query_name,
    ROUND(AVG(q.rating / position), 2) quality,
    ROUND(100 * p.poor / COUNT(*), 2) poor_query_percentage
FROM Queries q
RIGHT JOIN (SELECT query_name, SUM(IF(rating < 3, 1, 0)) poor FROM Queries GROUP BY 1) p
ON q.query_name = p.query_name
GROUP BY 1;