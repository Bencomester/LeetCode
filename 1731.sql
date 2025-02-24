SELECT e1.employee_id, e1.name, count(*) reports_count, ROUND(avg(e2.age)) average_age
FROM Employees e1, Employees e2
WHERE e1.employee_id = e2.reports_to
GROUP BY 1
ORDER BY 1;