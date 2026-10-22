SELECT w1.id
FROM Weather w1, Weather w2
WHERE w1.temperature > w2.temperature AND DATE_ADD(w2.recordDate, INTERVAL 1 DAY) = w1.recordDate