SELECT customer_id
FROM (SELECT DISTINCT customer_id, product_key FROM Customer) a
GROUP BY 1
HAVING count(*) = (SELECT count(*) FROM Product);