# Write your MySQL query statement below
-- select c.customer_id from Customer c group by customer_id
--  having ((count(c.product_key))=count(product_key));
SELECT customer_id
FROM Customer
GROUP BY customer_id
HAVING COUNT(DISTINCT product_key) =
       (SELECT COUNT(*) FROM Product);