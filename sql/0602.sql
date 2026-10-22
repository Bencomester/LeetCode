SELECT r.id, (IFNULL(r1.num, 0) + IFNULL(r2.num, 0)) num
FROM
    (SELECT requester_id id
    FROM RequestAccepted
    UNION ALL
    SELECT accepter_id id
    FROM RequestAccepted) r
LEFT JOIN
    (SELECT requester_id id, count(*) num
    FROM RequestAccepted
    GROUP BY 1) r1
ON r.id = r1.id
LEFT JOIN
    (SELECT accepter_id id, count(*) num
    FROM RequestAccepted
    GROUP BY 1) r2
ON r.id = r2.id
ORDER BY 2 DESC
LIMIT 1;
