SELECT  teacher_id, count(d) cnt
FROM (SELECT DISTINCT teacher_id, subject_id d FROM Teacher) a
GROUP BY 1;