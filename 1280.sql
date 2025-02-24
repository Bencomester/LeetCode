SELECT s.student_id, s.student_name, sub.subject_name, count(e.student_id) attended_exams
FROM Students s
CROSS JOIN Subjects sub
LEFT JOIN Examinations e
ON sub.subject_name = e.subject_name AND s.student_id = e.student_id
GROUP BY 1, 2, 3
ORDER BY 1