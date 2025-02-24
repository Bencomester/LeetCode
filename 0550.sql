SELECT ROUND(COUNT(a.player_id) / COUNT(b.id), 2) fraction
FROM Activity a
RIGHT JOIN (SELECT player_id id, MIN(event_date) m FROM Activity GROUP BY 1) b
ON a.player_id = b.id AND a.event_date = ADDDATE(b.m, INTERVAL 1 DAY)