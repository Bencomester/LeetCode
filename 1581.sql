SELECT customer_id, count(*) count_no_trans
FROM Visits
WHERE visit_id NOT IN (SELECT visit_id FROM Transactions)
GROUP BY 1;