CREATE TABLE 도서(
    책번호 INT,
    책명 VARCHAR(20)
);
INSERT INTO 도서 VALUES (111, '운영체제');
INSERT INTO 도서 VALUES (222, '자료구조');
INSERT INTO 도서 VALUES (555, '컴퓨터구조');

CREATE TABLE 도서가격(
    책번호 INT,
    가격 INT
);
INSERT INTO 도서가격 VALUES (111, 20000);
INSERT INTO 도서가격 VALUES (222, 25000);
INSERT INTO 도서가격 VALUES (333, 10000);
INSERT INTO 도서가격 VALUES (444, 15000);


-- JOIN ~ ON
SELECT A.책번호, A.책명, B.가격
FROM 도서 A, 도서가격 B
WHERE A.책번호 = B.책번호;

SELECT A.책번호, A.책명, B.가격
FROM 도서 A JOIN 도서가격 B
ON A.책번호 = B.책번호;

SELECT A.책번호, A.책명, B.책번호, B.가격
FROM 도서 A LEFT OUTER JOIN 도서가격 B
ON A.책번호 = B.책번호;

SELECT A.책번호, A.책명, B.책번호, B.가격
FROM 도서 A RIGHT OUTER JOIN 도서가격 B
ON A.책번호 = B.책번호;

SELECT A.책번호, A.책명, B.책번호, B.가격
FROM 도서 A FULL OUTER JOIN 도서가격 B
ON A.책번호 = B.책번호;

SELECT A.책번호, A.책명, B.책번호, B.가격
FROM 도서 A CROSS JOIN 도서가격 B;
