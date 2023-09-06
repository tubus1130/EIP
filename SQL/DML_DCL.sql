-- DML(INSERT, UPDATE, DELETE)
CREATE TABLE 학생(
    학번 INT,
    성명 VARCHAR(20),
    학년 INT CHECK (학년 IN (1,2,3,4)),
    수강과목 VARCHAR(20)
);

ALTER TABLE 학생 ADD 주소 VARCHAR(20);

INSERT INTO 학생(학번, 성명, 학년, 수강과목)
VALUES(6677, '장길산', 3, '수학');

SELECT * FROM 학생;

UPDATE 학생
SET 주소 = '인천'
WHERE 성명 = '장길산';

DELETE FROM 학생 WHERE 성명 = '장길산';

-- DCL(GRANT, ROLLBACK)
GRANT UPDATE ON 학생 TO 장길산;
REVOKE UPDATE ON 학생 FROM 장길산;
