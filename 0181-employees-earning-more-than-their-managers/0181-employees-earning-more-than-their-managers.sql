select e.name as Employee
from employee e
join employee m
on e.managerId = m.id
where m.salary < e.salary;