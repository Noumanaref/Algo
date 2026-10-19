# Write your MySQL query statement below
select s.user_id, ROUND(AVG(IF(c1.action ='confirmed',1,0)), 2) as confirmation_rate
from Signups s
left join Confirmations c1
    on s.user_id = c1.user_id
group by s.user_id; 
    
