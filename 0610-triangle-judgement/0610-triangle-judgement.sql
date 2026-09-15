# Write your MySQL query statement below
select X,Y,Z,
CASE
    when X+Y > Z
    AND Y+Z > X
    AND Z+X > Y
    THEN 'Yes'
    ELSE 'No'
END AS triangle
from Triangle