SELECT name
FROM Employee
WHERE id IN (SELECT managerId FROM Employee GROUP BY 1 HAVING count(*) >= 5)