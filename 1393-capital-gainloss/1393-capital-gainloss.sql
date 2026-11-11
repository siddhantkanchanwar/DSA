# Write your MySQL query statement below
select s.stock_name , sum(case when operation='sell' then s.price
else -s.price END) as capital_gain_loss from Stocks s
group by s.stock_name;