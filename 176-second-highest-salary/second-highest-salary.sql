/* Write your T-SQL query statement below */
SELECT MAX(SALARY) AS SecondHighestSalary
FROM EMPLOYEE
WHERE SALARY <(
    SELECT MAX(SALARY)
    FROM EMPLOYEE
)