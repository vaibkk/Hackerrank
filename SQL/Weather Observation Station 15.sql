SELECT ROUND(LONG_W,4)
FROM STATION
WHERE (ROUND(LAT_N,4)<137.2345) ORDER BY LAT_N DESC LIMIT 1;