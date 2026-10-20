# Write your MySQL query statement below
select p1.name as Employee
from employee p1,employee p2
where p1.managerID=p2.id and p1.salary>p2.salary;