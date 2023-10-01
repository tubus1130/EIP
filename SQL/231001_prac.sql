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
