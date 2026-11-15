# Write your MySQL query statement below
select e.employee_id ,e.department_id
from Employee e
where e.primary_flag = 'Y'
or e.employee_id in(select employee_id from Employee group by employee_id having (count(employee_id)=1));