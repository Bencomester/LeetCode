SELECT product_id, first_year, quantity, price
FROM Sales s, (SELECT product_id id, MIN(year) first_year FROM Sales GROUP BY 1) a
WHERE product_id = id AND year = first_year;