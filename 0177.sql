CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  DECLARE off INT;
  SET off = n - 1;

  RETURN (
      SELECT DISTINCT salary
      FROM Employee
      ORDER BY 1 DESC
      LIMIT 1 OFFSET off
  );
END
