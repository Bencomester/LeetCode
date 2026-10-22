SELECT name results FROM 
    (SELECT name
    FROM Users u, MovieRating mr
    WHERE u.user_id = mr.user_id
    GROUP BY 1
    ORDER BY count(*) DESC, name
    LIMIT 1) a
UNION ALL
SELECT title FROM
    (SELECT title
    FROM Movies m, MovieRating mr
    WHERE m.movie_id = mr.movie_id AND created_at BETWEEN '2020-02-01' AND '2020-02-29'
    GROUP BY 1
    ORDER BY avg(rating) DESC, title
    LIMIT 1) b;
