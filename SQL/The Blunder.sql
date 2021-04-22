SELECT
(
    CAST(
         CEILING
        (
           (   
              (SELECT AVG(CAST (Salary AS FLOAT)) FROM Employees ) -
              (SELECT AVG(CAST(REPLACE(Salary,0,'')AS FLOAT)) FROM Employees)
           )    
        ) 
    AS INT)
);
