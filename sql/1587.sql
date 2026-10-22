SELECT name, SUM(amount) balance
FROM Users u, Transactions t
WHERE u.account = t.account
GROUP BY 1
HAVING SUM(amount) > 10000;
