#include <stdio.h>

void print_ary(int *pa, int num);

int main(void) {
    int ary[5] = {10, 20, 30, 40, 50};

    int num = sizeof(ary) / sizeof(ary[0]);

    // (1)
    print_ary(ary, num);

    return 0;
}

// (2)
void print_ary(int *pa, int num) {
    int i;
    
    for(i = 0; i < num; i++) {
        // (3)
        printf("%d  ", pa[i]);
    }
}