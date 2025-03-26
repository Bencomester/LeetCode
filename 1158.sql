SELECT user_id buyer_id, join_date, count(buyer_id) orders_in_2019
FROM Users u
LEFT JOIN Orders o
ON u.user_id = o.buyer_id AND order_date BETWEEN '2019-01-01' AND '2019-12-31'
GROUP BY user_id;
