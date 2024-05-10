#include <stdio.h>

int main(void) {
    int a = 10;     // 변수 선언과 초기화
    int *p = &a;    // 포인터 선언과 동시에 a를 가리키도록 초기화
                    // 포인터 p가 참조하는 메모리 주소는 &a라는 의미
                    // (* : 참조 연산자)
                    // (& : 주소 연산자)
    double *pd;     // double형 변수를 참조하는 포인터 선언

    pd = p;
    printf("%d\n", p);     // 포인터 p가 참조하는 주소값
    printf("%d\n", *p);    // 포인터 p가 참조하는 메모리 주소의 값
    printf("%d\n", &a);    // 변수 a의 메모리 주소값
    printf("%d\n", pd);    // 포인터 pd가 참조하는 메모리 주소값
    printf("%d\n", *pd);   // 포인터 pd가 참조하는 메모리 주소의 값

    return 0;
}