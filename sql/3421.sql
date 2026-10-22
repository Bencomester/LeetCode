SELECT s1.student_id, s1.subject, s2.score first_score, s1.score latest_score
FROM Scores s1
INNER JOIN Scores s2
ON s1.student_id = s2.student_id
    AND s1.subject = s2.subject
    AND s1.exam_date > s2.exam_date
    AND s1.score > s2.score
INNER JOIN
    (SELECT student_id, subject, MAX(exam_date) date
    FROM Scores
    GROUP BY 1, 2) s3
ON s3.student_id = s2.student_id
    AND s3.subject = s2.subject
    AND s1.exam_date = s3.date
INNER JOIN
    (SELECT student_id, subject, MIN(exam_date) date
    FROM Scores
    GROUP BY 1, 2) s4
ON s4.student_id = s2.student_id
    AND s4.subject = s2.subject
    AND s2.exam_date = s4.date
ORDER BY 1, 2;
