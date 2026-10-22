SELECT c1.visited_on, sum(c2.amount) amount, ROUND(avg(c2.amount), 2) average_amount
FROM 
    (SELECT DISTINCT visited_on, sum(amount) amount
    FROM Customer
    GROUP BY 1) c1,
    (SELECT DISTINCT visited_on, sum(amount) amount
    FROM Customer
    GROUP BY 1) c2
WHERE c2.visited_on BETWEEN date_sub(c1.visited_on, INTERVAL 6 DAY) AND c1.visited_on
GROUP BY 1
HAVING count(*) > 6
ORDER BY 1;
