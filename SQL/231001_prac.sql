CREATE INDEX idx_name ON student(name);

CREATE TABLE patient(
  id CHAR(5) PRIMARY KEY,
  name CHAR(10),
  sex CHAR(1),
  phone CHAR(20),
  CONSTRAINT sex_ck CHECK VALUE IN ('f', 'm'),
  CONSTRAINT id_fk FOREIGN KEY(id) REFERENCES doctor(doc_id)
);

CREATE TABLE instructor(
  id CHAR(5) PRIMARY KEY,
  name CHAR(15) NOT NULL,
  dept CHAR(15),
  FOREIGN KEY(dept) REFERENCES Department(dept)
  ON DELETE SET NULL
  ON UPDATE CASCADE
);

ALTER TABLE patient ADD job CHAR(20);

CREATE VIEW CC(ccid, ccname, instname) AS
(
  SELECT A.id, A.name, B.name
  FROM Course A, Instructor B
  WHERE Course.id = Instructor.id
)

CREATE UNIQUE INDEX Stud_idx ON Student(ssn ASC);

CREATE INDEX 직원_name ON 직원(이름);

GRANT ALL ON 학생 TO 김하늘;

GRANT DELETE ON 강좌 TO 김하늘 WITH GRANT OPTION;

REVOKE SELECT,INSERT,DELETE ON 교수 FROM 임꺽정;

REVOKE UPDATE ON 수강 FROM 임꺽정 CASCADE;

DELETE FROM 학생 WHERE 이름 = '민수';

INSERT INTO 학생(학번, 성명, 학년, 과목, 연락처)
VALUES (98170823, '한국산', 3, '경영학개론', '?-1234-1234');

DELETE FROM 학생 WHERE 이름 = 'Scott';

UPDATE 학부생 SET 학과번호 = 999 WHERE 입학생수 >= 300;

UPDATE 사원 SET 연봉 = 연봉 + 100000 WHERE 직급 = '차장';

INSERT INTO 기획부(성명, 경력, 주소, 기본급)
SELECT 성명, 경력, 주소, 기본급
FROM 사원
WHERE 부서 = '기획';

SELECT name, score
FROM 성적
ORDER BY score DESC;

SELECT *
FROM 회원
WHERE 이름 LIKE '이%'
ORDER BY 가입일 DESC;

SELECT pid
FROM Sale
WHERE psale BETWEEN 10 AND 20;

SELECT A.학번 AS 학번, A.이름 AS 이름, C.결제여부 AS 결제여부
FROM 학생정보 A, 신청정보 B, 결제 C
WHERE 학생정보.학번 = 신청정보.학번 AND 신청정보.신청번호 = 결제.신청번호 AND 신청정보.신청과목='OpenGL';

SELECT ID, NAME
FROM CUSTOMER;

SELECT DISTINCT GRADE FROM CUSTOMER;

SELECT * FROM CUSTOMER ORDER BY ID DESC;

SELECT NAME FROM CUSTOMER WHERE AGE IS NULL;

SELECT 사원명
FROM 회사원
WHERE 연락번호 IS NOT NULL;

SELECT 이름
FROM 직원
WHERE 팀코드 = (SELECT 팀코드 FROM 직원 WHERE 이름 = '정도일');

SELECT 학과, COUNT(*) AS 학과별튜플수
FROM 학생
GROUP BY 학과;

SELECT 과목이름, MIN(점수) AS 최소점수, MAX(점수) AS 최대점수
FROM 성적
GROUP BY 과목이름
HAVING AVG(점수) >= 90;

SELECT SUM(psale)
FROM Sale
WHERE pid IN (SELECT id FROM Product WHERE 상품명 LIKE 'USB%');

SELECT 소속도시, AVG(매출액)
FROM 지점정보
WHERE 매출액 > 1000
GROUP BY 소속도시
HAVING COUNT(*) >= 3;

SELECT 장학내역, 장학금, ROW_NUMBER() OVER (PARTITION BY 장학내역 ORDER BY 장학금 DESC) AS NUM
FROM 장학금

SELECT 학번, 이름, 학과.학과코드, 학과.학과명
FROM 학생, 학과
WHERE 학생.학과코드 = 학과.학과코드;

SELECT 학번, 이름, 학생.학과코드, 학과명
FROM 학생 NATURAL JOIN 학과;

SELECT 학번, 이름, 학생.학과코드, 학과명
FROM 학생 JOIN 학과 USING(학과코드);

SELECT 사원.코드, 이름, 동아리명
FROM 사원 LEFT OUTER JOIN 동아리 ON 사원.코드 = 동아리.코드;

DROP TABLE 직원;

CREATE TABLE 직원(
  사번 CHAR(15) PRIMARY KEY,
  이름 CHAR(4) NOT NULL,
  전화번호 CHAR(20) UNIQUE,
  부서번호 CHAR(10) FOREIGN KEY REFERENCES 부서(부서번호),
  경력 INT,
  기본급 INT CHECK 기본급 >= 1000000
);

SELECT * FROM 사원;

SELECT DISTINCT 이름
FROM 자격증
WHERE 경력 >= 3;

SELECT 이름, 재직년도, 기본급
FROM 사원
WHERE 이름 NOT IN (SELECT DISTINCT 이름 FROM 자격증);

SELECT 이름
FROM 자격증
GROUP BY 이름
HAVING COUNT(*) >= 2;

CREATE VIEW 3학년학생 AS (SELECT * FROM 학생 WHERE 학년 = 3 WITH CHECK OPTION);

CREATE VIEW 강좌교수 AS
SELECT 강좌명, 강의실, 수강인원 AS 수강제한인원, 이름 AS 교수이름
FROM 강좌 A, 교수 B
WHERE A.교수번호 = B.교수번호;

GRANT SELECT ON 강좌 TO 홍길동;

GRANT ALL ON 학생 TO 홍길동 WITH GRANT OPTION;

REVOKE INSERT ON 교수 FROM 박문수;

REVOKE SELECT ON 수강 FROM 박문수 CASCADE;

DELETE FROM 상품 WHERE 제품코드 = 'P-20';

INSERT INTO 상품 VALUES ('P-20', 'PLAYER', 8800, 6600);

SELECT 상호, 총액
FROM 거래내역
WHERE 총액 IN (SELECT MAX(총액) FROM 거래내역);

SELECT 장학내역, 학과, AVG(장학금) AS 장학금평균
FROM 장학금
GROUP BY CUBE(장학내역, 학과);

SELECT 지원ID, 이름, 지원학과, 연락처
FROM 지원자
WHERE 점수 >= 60
ORDER BY 지원학과 ASC, 점수 DESC;

ALTER TABLE 학생 ADD 주소 CHAR(20);

SELECT *
FROM 공급자
WHERE 공급자명 LIKE '%신%';

UPDATE 성적
SET 점수 = 점수 + 10
WHERE 이름 = 'LEE';
