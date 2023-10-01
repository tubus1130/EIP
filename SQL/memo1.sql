-- 스키마 생성
CREATE SCHEMA 스키마명 AUTHORIZATION 사용자_ID;

-- 도메인 생성
CREATE DOMAIN 도메인명 데이터타입
[DEFAULT 기본값]
[CONSTRAINT 제약조건명 CHECK (범위값)];

-- 테이블 생성
CREATE TABLE 테이블명(
  속성명 데이터타입 [DEFAULT 기본값] [NOT NULL],
  [PRIMARY KEY(기본키)],
  [FOREIGN KEY(외래키) REFERENCES 참조테이블(기본키)
  ON DELETE 옵션
  ON UPDATE 옵션],
  [CONSTRAINT 제약조건명 CHECK(범위값)] 
);

-- 뷰 생성
CREATE VIEW 뷰명(속성명, 속성명, ...) AS 
  SELECT문;

-- 인덱스 생성
CREATE INDEX 인덱스명 ON 테이블명(속성명);

-- 테이블 변경
ALTER TABLE 테이블명 ADD 속성명 데이터타입;
ALTER TABLE 테이블명 ALTER 속성명 데이터타입;
ALTER TABLE 테이블명 DROP COLUMN 속성명;

-- DROP
DROP SCHEMA 스키마명;
DROP DOMAIN 도메인명;
DROP TABLE 테이블명;
DROP VIEW 뷰명;
DROP INDEX 인덱스명;
DROP CONSTRAINT 제약조건명;

-- 권한
GRANT 권한리스트 ON 테이블 TO 사용자 [WITH GRANT OPTION];
REVOKE [GRANT OPTION FOR] 권한리스트 ON 테이블 FROM 사용자 [CASCADE];
/*
  GRANT OPTION FOR : 다른 사용자에게 권한을 부여할 수 있는 권한을 취소함
  CASCADE : 권한 취소시 권한을 부여받았던 사용자가 다른 사용자에게 부여한 권한도 연쇄적으로 취소함
*/

-- 삽입문
INSERT INTO 테이블명(속성명1, 속성명2, ...)
VALUES (데이터1, 데이터2, ...);

-- 삭제문
DELETE FROM 테이블명
[WHERE 조건];

-- 갱신문
UPDATE 테이블명
SET 속성명 = 데이터
[WHERE 조건];

-- WINDOW 함수
SELECT 속성1, 속성2, ROW_NUMBER() OVER (PARTITION BY 속성 ORDER BY 속성 DESC) AS 속성3
FROM 테이블명;
/*
  ROW_NUMBER() : 일련번호
  RANK() : 공동순위 반영 => 1224
  DENSE_RANK() : 공동순위 미반영 => 1223
*/

-- GROUP BY
SELECT 컬럼명 --------------------- (5) 
FROM 테이블명 ------------------- (1)
WHERE 테이블 조건 --------------- (2)
GROUP BY 컬럼명 -------------------- (3)
HAVING 그룹 조건 ----------------- (4)
ORDER BY 컬럼명 -------------------- (6)

-- ROLLUP, CUBE
SELECT
FROM
GROUP BY ROLLUP(속성1, 속성2);
-- 속성1에 대한 소계, 전체에 대한 소계
SELECT
FROM
GROUP BY CUBE(속성1, 속성2);
-- 속성1, 속성2에 대한 소계, 전체에 대한 소계

-- UNION, UNION ALL, INTERSECT, EXCEPT

-- JOIN
SELECT *
FROM 테이블1, 테이블2
WHERE 테이블1.속성 = 테이블2.속성;

SELECT *
FROM 테이블1 NATURAL JOIN 테이블2;

SELECT *
FROM 테이블1 JOIN 테이블2 USING(속성);

-- LEFT OUTER JOIN(왼쪽테이블 값 다나옴)
-- RIGHT OUTER JOIN(오른쪽테이블 값 다나옴)
-- FULL OUTER JOIN(양쪽테이블 값 다나옴)
SELECT *
FROM 테이블1 LEFT OUTER JOIN 테이블2
ON 테이블1.속성 = 테이블2.속성;

SELECT *
FROM 테이블1, 테이블2
WHERE 테이블1.속성 = 테이블2.속성(+);

-- 트리거
CREATE TRIGGER 트리거명 [동작옵션] ON 테이블명
REFERENCING [NEW/OLD] AS 테이블명
FOR EACH ROW
[WHEN(조건식)]
BEGIN
  SQL문
END;

DROP TRIGGER 트리거명;
