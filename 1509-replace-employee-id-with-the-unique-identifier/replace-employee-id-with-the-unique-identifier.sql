/* Write your T-SQL query statement below */
SELECT U.unique_id,E.name
FROM EMPLOYEES E
LEFT JOIN EMPLOYEEUNI U
ON E.ID=U.ID