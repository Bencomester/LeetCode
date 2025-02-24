SELECT p.product_id, IF(SUM(units) IS NULL, 0, ROUND(SUM(price * units) / SUM(units),2)) average_price
FROM Prices p
LEFT JOIN UnitsSold u
ON p.product_id = u.product_id AND (purchase_date BETWEEN start_date AND end_date)
GROUP BY p.product_id
