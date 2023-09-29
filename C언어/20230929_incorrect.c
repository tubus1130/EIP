#include <stdio.h>

int main() {
    int a, hap = 0;
    for(a=0; a<10; ++a, hap+=a);
    printf("%d, %d", a, hap);
    return 0;

    // 10, 55
}
