SELECT q1.person_name
FROM Queue q1, Queue q2
WHERE q1.turn >= q2.turn
GROUP BY 1
HAVING sum(q2.weight) <= 1000
ORDER BY sum(q2.weight) DESC
LIMIT 1;
