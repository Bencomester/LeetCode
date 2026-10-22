SELECT ROUND(100 * SUM(IF(d.order_date = d.customer_pref_delivery_date, 1, 0)) / COUNT(*), 2) immediate_percentage
FROM Delivery d, (SELECT customer_id id, MIN(order_date) m FROM Delivery GROUP BY 1) first
WHERE first.id = d.customer_id AND first.m = order_date;