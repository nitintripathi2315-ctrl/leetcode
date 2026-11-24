# Write your MySQL query statement below
SELECT c1.id , c1.movie , c1.description , c2.rating 
FROM Cinema c1
INNER JOIN Cinema c2
ON c1.id = c2.id
WHERE (c1.id % 2 = 1) AND (c2.description != 'boring')
ORDER BY c2.rating DESC