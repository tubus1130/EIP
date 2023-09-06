/*
    1. 트랜잭션의 특성
    - ACID
    Atomicity 원자성
    Consistency 일관성
    Isolation 격리성
    Durability 영속성

    2. 원자성
    - 트랜잭션을 구성하는 연산자체가 모두 정상적으로 실행되거나 모두 취소되어야 하는 성질
    - 트랜잭션의 연산전체가 성공 또는 실패되어야 하는 성질

    3. Rollback
    - 오류가 발생했을 때, 오류 이전의 특정 시점 상태로 되돌려주는 제어어
    - Commit : 트랜잭션을 메모리에 영구적으로 저장하는 제어어
    - Checkpoint : ROLLBACK을 위한 시점을 지정하는 제어어

    4. 로킹
    - 같은 자원을 액세스하는 다중 트랜잭션 환경에서 DB의 일관성과 무결성을 
    유지하기 위해 트랜잭션의 순차적 진행을 보장하는 직렬화 기법
    - 로킹단위 : 데이터베이스, 파일, 레코드
    - 로킹단위가 작아지면 데이터베이스 공유도 증가
    - 로킹단위가 작아지면 로킹 오버헤드 증가
    - 한꺼번에 로킹할 수 있는 객체의 크기를 로킹 단위라고 함

    5. 즉각갱신회복기법
    - ROLLBACK시, REDO, UNDO가 모두 실행되는 트랜잭션 처리법으로
    트랜잭션 수행 중 갱신결과를 바로 DB에 반영하는 데이터베이스 회복기법

    6. DB 스키마
    - DB의 구조와 제약조건 등의 정보를 담고있는 기본적인 구조

    7. 트랜잭션
    - 데이터베이스 시스템에서 하나의 논리적 기능을 정상적으로 수행하기 위한 작업의 기본단위

    8. 인덱스
    - 데이터를 빠르게 찾을 수 있는 수단으로서 테이블에 대한 조회 속도를 높여주는 자료구조



*/

CREATE TABLE TB(
    SEQ INT,
    COL1 VARCHAR(20),
    COL2 VARCHAR(20)
);

INSERT INTO TB VALUES (1, '2', NULL);
INSERT INTO TB VALUES (2, '3', '6');
INSERT INTO TB VALUES (3, NULL, '5');
INSERT INTO TB VALUES (4, '5', '3');
INSERT INTO TB VALUES (5, '6', '3');

-- COUNT(컬럼명) : NULL값은 제외하고 COUNT
-- COUNT(*) : NULL도 포함하여 COUNT
SELECT COUNT(COL2)
FROM TB
WHERE COL1 IN (2,3) OR COL2 IN (3,5);
-- 4

SELECT COUNT(*)
FROM TB
WHERE COL1 IN (2,3) OR COL2 IN (3,5);
-- 5
