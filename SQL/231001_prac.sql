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
