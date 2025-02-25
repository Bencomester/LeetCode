SELECT n category, IFNULL(accounts_count, 0) accounts_count
FROM 
    (SELECT 'Low Salary' AS n UNION ALL 
    SELECT 'High Salary' UNION ALL 
    SELECT 'Average Salary') v
LEFT JOIN (SELECT IF(income < 20000, "Low Salary", IF(income > 50000, "High Salary", "Average Salary")) category, count(*) accounts_count FROM Accounts a GROUP BY 1) a
ON n = a.category;
