SELECT ROUND(IFNULL(sum(tiv_2016), 0), 2) tiv_2016
FROM Insurance i
WHERE pid IN
        (SELECT pid
        FROM Insurance
        GROUP BY lat, lon
        HAVING count(*) = 1)
    AND tiv_2015 IN
        (SELECT tiv_2015
        FROM Insurance
        GROUP BY 1
        HAVING count(*) > 1);
