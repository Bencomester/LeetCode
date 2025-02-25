SELECT s2.id, IFNULL(s1.student, s2.student) student
FROM Seat s1
RIGHT JOIN Seat s2
ON (s1.id + 1 = s2.id AND s1.id mod 2 = 1) OR (s1.id - 1 = s2.id AND s1.id mod 2 = 0)
ORDER BY 1;
