CREATE TABLE DEPT(
    DEPT_ID INT,
    DEPT_NAME VARCHAR(20),
    MGR_ID INT
);

INSERT INTO DEPT VALUES(10, '개발팀', 101);
INSERT INTO DEPT VALUES(20, '운영팀', 106);

CREATE TABLE EMP(
    EMP_ID INT,
    EMP_NAME VARCHAR(20),
    DEPT_ID INT
);

INSERT INTO EMP VALUES(101, '김철수', 10);
INSERT INTO EMP VALUES(102, '홍길동', 10);
INSERT INTO EMP VALUES(103, '장보고', 10);
INSERT INTO EMP VALUES(104, '이순신', 10);
INSERT INTO EMP VALUES(105, '유관순', 10);
INSERT INTO EMP VALUES(106, '박영희', 20);
INSERT INTO EMP VALUES(107, '허준', 20);
INSERT INTO EMP VALUES(108, '정약용', 20);
INSERT INTO EMP VALUES(109, '스티브', 20);

-- IN
SELECT EMP_ID, EMP_NAME, DEPT_ID
FROM EMP
WHERE EMP_ID IN (SELECT MGR_ID FROM DEPT);

CREATE TABLE EMP2(
    EMP_ID INT,
    EMP_NAME VARCHAR(20),
    SALARY INT,
    JOB_TITLE VARCHAR(20)
);
INSERT INTO EMP2 VALUES(101, '김철수', 4500000, '팀장');
INSERT INTO EMP2 VALUES(102, '홍길동', 4000000, '과장');
INSERT INTO EMP2 VALUES(103, '장보고', 3500000, '과장');
INSERT INTO EMP2 VALUES(104, '이순신', 3000000, '사원');
INSERT INTO EMP2 VALUES(105, '유관순', 2500000, '사원');
INSERT INTO EMP2 VALUES(106, '박영희', 5000000, '팀장');
INSERT INTO EMP2 VALUES(107, '허준',   4000000, '과장');
INSERT INTO EMP2 VALUES(108, '정약용', 3500000, '과장');
INSERT INTO EMP2 VALUES(109, '스티브', 3000000, '사원');

-- ANY
SELECT EMP_ID, EMP_NAME, SALARY, JOB_TITLE
FROM EMP2
WHERE SALARY > ANY(
    SELECT SALARY
    FROM EMP2
    WHERE JOB_TITLE = '과장'
);

-- ALL
SELECT EMP_ID, EMP_NAME, SALARY, JOB_TITLE
FROM EMP2
WHERE SALARY > ALL(
    SELECT SALARY
    FROM EMP2
    WHERE JOB_TITLE = '과장'
);

-- EXISTS
SELECT A.EMP_ID, A.EMP_NAME, A.SALARY
FROM EMP2 A
WHERE EXISTS
(SELECT 1
FROM EMP2 B
WHERE A.SALARY = B.SALARY AND B.EMP_NAME = '홍길동');