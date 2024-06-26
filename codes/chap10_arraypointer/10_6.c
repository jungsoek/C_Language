#include <stdio.h>

void print_ary(int *pa, int size);

int main(void) {
    int ary1[5] = {10, 20, 30, 40, 50};
    int ary2[7] = {10, 20, 30, 40, 50 , 60, 70};

    // (1)
    print_ary(ary1, 5);
    printf("\n");
    // (2)
    print_ary(ary2, 7);

    return 0;
}

// (3)
void print_ary(int *pa, int size) {
    int i;

    // (4)
    for(i = 0; i < size; i++) {
        printf("%d  ", pa[i]);
    }
}