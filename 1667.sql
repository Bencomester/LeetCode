SELECT user_id, concat(upper(substr(name, 1, 1)), lower(substr(name, 2))) name
FROM Users
ORDER BY 1;
