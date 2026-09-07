CREATE FUNCTION getNthHighestSalary (@N INT)
RETURNS INT
AS
BEGIN
    RETURN
    (
        SELECT salary
        FROM
        (
            SELECT
                salary,
                DENSE_RANK() OVER(ORDER BY salary DESC) AS rn
            FROM
            (
                SELECT DISTINCT salary
                FROM Employee
            ) AS E
        ) AS T
        WHERE rn = @N
    );
END;