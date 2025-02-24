SELECT project_id, ROUND(AVG(experience_years), 2) average_years
FROM Project p, Employee e
WHERE p.employee_id = e.employee_id
GROUP BY 1;