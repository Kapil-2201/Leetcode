-- SELECT name AS Customers FROM Customers
-- WHERE id NOT IN (SELECT customerId FROM orders);

SELECT name as Customers 
FROM customers
LEFT JOIN orders on customers.id = orders.customerId
WHERE orders.id is null;
