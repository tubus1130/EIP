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

