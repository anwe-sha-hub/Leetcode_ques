# Write your MySQL query statement below
select name as employee
from Employee e
where salary > (
    select salary
    from Employee
    where id = e.managerId
);