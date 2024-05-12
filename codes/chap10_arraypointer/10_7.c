#include <stdio.h>

void input_ary(double *pa, int size);
double find_max(double *pa, int size);

int main(void) {
    double ary[5];
    double max;
    int size = sizeof(ary) / sizeof(ary[0]);

    input_ary(ary, size);
    max = find_max(ary, size);
    printf("배열의 최댓값 : %.1lf", max);

    return 0;
}

void input_ary(double *pa, int size) {
    int i;

    printf("%d개의 실수값 입력 : ", size);
    for(i = 0; i < size; i++) {
        // (1)
        scanf("%lf", pa + i);
    }
}

// (2)
double find_max(double *pa, int size) {
    double max;
    int i;

    // (3)
    max = pa[0];
    for(i = 1; i < size; i++) {
        // (4)
        if(pa[i] > max) max = pa[i];
    }

    return max;
}