# Write your MySQL query statement below
select DISTINCT(l1.num) AS ConsecutiveNums
from Logs L1
join Logs L2 on L2.id = L1.id + 1 AND L2.num = L1.num
join Logs L3 on L3.id = L2.id + 1 AND L3.num = L2.num