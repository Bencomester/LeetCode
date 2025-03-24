SELECT
    d.name Department,
    e.name Employee,
    s.salary
FROM
    Employee e,
    Department d,
    (SELECT departmentId, MAX(salary) salary FROM Employee GROUP BY 1) s
WHERE
    e.departmentId = d.id AND 
    e.salary = s.salary AND
    s.departmentId = e.departmentId;
