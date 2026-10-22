SELECT
    id,
    IF(
        p_id IS NULL,
        "Root",
        IF(
            id IN (SELECT p_id FROM Tree),
            "Inner",
            "Leaf")
        ) type
FROM Tree;
