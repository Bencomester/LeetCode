SELECT class
FROM Courses
GROUP BY 1
HAVING count(*) > 4