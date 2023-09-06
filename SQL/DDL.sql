DROP TABLE 사원;
-- 테이블
CREATE TABLE 사원 (
    사번 VARCHAR(10) PRIMARY KEY,
    --업무 VARCHAR(20) FOREIGN KEY REFERENCES 부서(부서코드),
    이름 VARCHAR(10) UNIQUE,
    생년월일 VARCHAR(8) NOT NULL,
    성별 CHAR(1) CHECK (성별 = 'M' OR 성별 = 'F'),
    입사일 DATE DEFAULT SYSDATE
);

ALTER TABLE 사원 ADD 전화번호 VARCHAR(11);

INSERT INTO 사원(사번, 이름, 생년월일, 성별, 전화번호) VALUES(0, '김', 123, 'M', 23);

SELECT * FROM 사원;

ALTER TABLE 사원 MODIFY 이름 VARCHAR(30) NOT NULL;

DESC 사원;

-- 뷰
CREATE OR REPLACE VIEW 사원뷰 AS
SELECT 사번, 이름
FROM 사원
WHERE 성별 = 'M';

DESC 사원뷰;

SELECT * FROM 사원뷰;

DROP VIEW 사원뷰;

-- 인덱스
CREATE INDEX 전화번호인덱스 ON 사원(전화번호);

SELECT * FROM ALL_IND_COLUMNS WHERE TABLE_NAME = '사원';

DROP INDEX 전화번호인덱스;

