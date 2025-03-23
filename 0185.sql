SELECT d.name Department, e.name Employee, e.salary Salary
FROM Employee e, Department d,
    (SELECT e2.departmentId, MAX(e3.salary) s3, s2, s1
    FROM Employee e3
    RIGHT JOIN
        (SELECT e1.departmentId, MAX(e2.salary) s2, s1
        FROM Employee e2
        RIGHT JOIN
            (SELECT departmentId, MAX(salary) s1
            FROM Employee
            GROUP BY 1) e1
        ON e1.departmentId = e2.departmentId AND s1 != e2.salary
        GROUP BY 1) e2
    ON e3.departmentId = e2.departmentId AND s1 != e3.salary AND s2 != e3.salary
    GROUP BY 1) t
WHERE d.id = e.departmentId AND e.departmentId = t.departmentId AND salary IN (s1, s2, s3);
