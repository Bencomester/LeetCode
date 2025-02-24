SELECT product_name, year, price
FROM Product p, Sales s
WHERE p.product_id = s.product_id;