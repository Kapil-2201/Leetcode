# Write your MySQL query statement below
SELECT Email FROM person
GROUP BY email
having count(*) >1;