SELECT name Customers
FROM Customers
WHERE id NOT IN (SELECT customerId FROM Orders);
