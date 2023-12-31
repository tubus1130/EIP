/*
    1. 프로시저
    - 일련의 쿼리들을 마치 하나의 함수처럼 실행하기 위한 쿼리의 집합

    2. 사용자 정의 함수
    - 일련의 SQL을 수행하고, 수행결과를 단일값으로 반환할 수 있는 절차형 SQL

    3. 트리거
    - 데이터베이스시스템에서 삽입, 갱신, 삭제 등의 이벤트가 발생할 때마다
    관련 작업이 자동으로 수행되는 절차형 SQL

*/

-- 컬럼 삭제
ALTER TABLE 사원 DROP 생년월일;

-- 컬럼명 유의
UPDATE EMPLOYEE
SET SALARY = 250
WHERE AGE <= 25;
