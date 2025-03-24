SELECT product_name, SUM(unit) unit
FROM Products p, Orders o
WHERE p.product_id = o.product_id AND LEFT(order_date, 7) = "2020-02"
GROUP BY p.product_id
HAVING SUM(unit) >= 100;
