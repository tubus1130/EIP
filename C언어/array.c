#include <stdio.h>

void main() {
    /*
        21. 배열
        - 같은 자료형의 변수를 연속적으로 묶어놓은 저장공간

        22. 2차원 배열
    */

    int a[5];
    a[0] = 10;
    a[2] = 20;

    int b[2][3];

    char msg[50] = "Hello World! Good Luck!";
    int i=2, number=0;
    while(msg[i] != '!'){
        if(msg[i] == 'a' || msg[i] == 'e' || msg[i] == 'i' || msg[i] == 'o' || msg[i] == 'u'){
            number++;
        }
        i++;
    }
    printf("%d\n", number);
    printf("==========================\n");

    int j;
    char ch;
    char str[7] = "nation";
    for(j=0; j<4; j++){
        ch = str[5-j];
        str[5-j] = str[j];
        str[j] = ch;
    }
    printf("%s\n", str);
}
