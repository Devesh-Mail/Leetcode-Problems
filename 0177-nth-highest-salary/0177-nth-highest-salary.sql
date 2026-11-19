CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
    declare setoff int;
    set setoff = N-1;
  RETURN (
      select distinct salary from Employee 
        order by salary desc
        limit 1 offset setoff
  );
END