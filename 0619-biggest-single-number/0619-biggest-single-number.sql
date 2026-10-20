# Write your MySQL query statement below
-- select MyNumbers.num where (count(MyNumbers.num)=1);
SELECT IF(COUNT(num) =1, num, null) AS num FROM MyNumbers GROUP BY num ORDER BY COUNT(num), num DESC LIMIT 1;