SELECT
    *,
    IF(dna_sequence LIKE "ATG%", 1, 0) has_start,
    IF(dna_sequence LIKE "%TAA" OR dna_sequence LIKE "%TGA" OR dna_sequence LIKE "%TAG", 1, 0) has_stop,
    IF(dna_sequence LIKE "%ATAT%", 1, 0) has_atat,
    IF(dna_sequence LIKE "%GGG%", 1, 0) has_ggg
FROM Samples;
