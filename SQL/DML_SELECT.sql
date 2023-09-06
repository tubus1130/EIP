DROP TABLE 성적;
-- SELECT
CREATE TABLE 성적
(
    이름 VARCHAR(30),
    과목 VARCHAR(20),
    학점 CHAR(1)
);

INSERT INTO 성적 VALUES('김철수', 'C언어', 'A');
INSERT INTO 성적 VALUES('한유리', '자료구조', 'A');
INSERT INTO 성적 VALUES('신짱구', '자료구조', 'A');
INSERT INTO 성적 VALUES('이훈이', '알고리즘', 'B');

SELECT 과목 FROM 성적;

SELECT DISTINCT 과목 FROM 성적;

SELECT 과목 FROM 성적 WHERE 학점 = 'A';

SELECT DISTINCT 과목 FROM 성적 WHERE 학점 = 'A';

SELECT COUNT(DISTINCT 과목) FROM 성적;

SELECT DISTINCT 과목, 학점 FROM 성적;

CREATE TABLE 급여
(
    이름 VARCHAR(30),
    직책 VARCHAR(30),
    부서 VARCHAR(30),
    급여 INT
);

-- GROUP BY
INSERT INTO 급여 VALUES('김철수', '차장', '마케팅', 5000);
INSERT INTO 급여 VALUES('한유리', '차장', '전산', 4800);
INSERT INTO 급여 VALUES('신짱구', '사원', '마케팅', 2500);
INSERT INTO 급여 VALUES('이훈이', '사원', '마케팅', 2700);

SELECT 직책, COUNT(직책), SUM(급여)
FROM 급여
GROUP BY 직책;

SELECT 부서, SUM(급여) AS 급여합계
FROM 급여
GROUP BY 부서;

SELECT 직책, 부서, SUM(급여) AS 급여합계
FROM 급여
GROUP BY 직책, 부서;

SELECT COUNT(*) FROM 급여;

-- HAVING
SELECT 직책, 부서, SUM(급여) AS 급여합계
FROM 급여
GROUP BY 직책, 부서
HAVING SUM(급여) >= 5000;

-- ORDER BY
SELECT * FROM 성적 ORDER BY 이름;

SELECT * FROM 성적 ORDER BY 과목, 이름;

SELECT * FROM 성적 ORDER BY 학점 DESC, 이름 ASC;
