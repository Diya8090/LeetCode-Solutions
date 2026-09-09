/* Write your T-SQL query statement below */
SELECT e.name as name
FROM Employee e
JOIN Employee emp
ON e.id = emp.managerId
GROUP BY e.id, e.name
HAVING COUNT(emp.id) >= 5;