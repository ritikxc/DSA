# Write your MySQL query statement below
SELECT p.unique_id, e.name 
FROM Employees e
LEFT JOIN EmployeeUNI p
ON e.id = p.id;