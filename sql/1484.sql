SELECT sell_date,
    count(DISTINCT product) num_sold,
    GROUP_CONCAT(DISTINCT product ORDER BY product SEPARATOR ",") products
FROM Activities
GROUP BY 1
ORDER BY 1;
