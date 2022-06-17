# Write your MySQL query statement below
select if(
    (select count(salary) from Employee) = 1, 
       null, 
       (select salary from Employee 
        where salary != (select max(salary) from Employee) 
        order by salary desc limit 1)
    ) 
as "SecondHighestSalary";