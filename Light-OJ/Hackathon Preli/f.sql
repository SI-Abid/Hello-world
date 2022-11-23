-- INPUT
DROP TABLE IF EXISTS product;
CREATE TABLE product (
    item TEXT,
    date DATE,
    count BIGINT
);
INSERT INTO product VALUES
    ("coconut", "2019-01-01", 2),
    ("grape", "2019-01-01", 2127),
    ("coconut", "2019-01-02", 294),
    ("coconut", "2019-01-09", 4),
    ("banana", "2019-01-09", 2),
    ("grape", "2019-01-09", 1676),
    ("coconut", "2019-01-23", 150),
    ("grape", "2019-01-23", 2701),
    ("coconut", "2019-01-24", 11),
    ("coconut", "2019-02-20", 2),
    ("grape", "2019-02-24", 151),
    ("grape", "2019-02-25", 1499),
    ("orange", "2019-04-30", 377),
    ("mango", "2019-04-30", 1127),
    ("apple", "2019-05-02", 375),
    ("grape", "2019-07-08", 1500),
    ("coconut", "2019-07-09", 302),
    ("grape", "2019-07-09", 1810),
    ("apple", "2019-11-26", 149),
    ("coconut", "2019-11-26", 56),
    ("banana", "2019-11-26", 189),
    ("grape", "2020-03-15", 1),
    ("mango", "2020-03-15", 2513),
    ("grape", "2020-03-16", 4280),
    ("grape", "2020-09-13", 775),
    ("grape", "2020-09-15", 3688),
    ("grape", "2020-09-17", 2528),
    ("grape", "2020-12-21", 1316),
    ("mango", "2020-12-21", 576),
    ("coconut", "2020-12-23", 1);

SELECT item, LAST_DAY(date) AS date, SUM(count) AS count FROM product GROUP BY item, LAST_DAY(date) ORDER BY item, date;