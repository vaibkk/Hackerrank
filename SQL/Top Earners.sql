SELECT Salary * Months AS Earnings, COUNT(*)
FROM Employee
GROUP BY Earnings 
ORDER BY Earnings DESC
LIMIT 1; 