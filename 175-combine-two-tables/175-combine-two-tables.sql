# Write your MySQL query statement below
# SELECT firstName,lastName,
SELECT FirstName, LastName, City, State
FROM Person LEFT JOIN Address USING (PersonId)