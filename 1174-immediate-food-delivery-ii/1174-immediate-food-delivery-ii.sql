# Write your MySQL query statement below
select round(sum(case when d.order_date=d.customer_pref_delivery_date then 1 else 0 end)*100/count(*),2) as immediate_percentage from Delivery d where
d.order_date=(select min(d2.order_date) 
from Delivery d2 
where d.customer_id=d2.customer_id);