SELECT DISTINCT p.product_id, IF(p.product_id NOT IN (SELECT product_id FROM Products WHERE change_date <= "2019-08-16"), 10, new_price) price
FROM Products p,
    (SELECT product_id, MAX(change_date)  date
    FROM Products p
    WHERE change_date <= "2019-08-16"
    GROUP BY 1) a
WHERE (a.product_id = p.product_id AND change_date = date) OR p.product_id NOT IN (SELECT product_id FROM Products WHERE change_date <= "2019-08-16");