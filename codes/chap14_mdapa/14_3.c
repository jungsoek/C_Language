#include <stdio.h>

int main(void) {
    char animal[5][20];

    // (1)
    int i;
    int count;

    // (2)
    count = sizeof(animal) / sizeof(animal[0]);

    // (3)
    for(i = 0; i < count; i++) {
        scanf("%s", animal[i]);
    }

    // (4)
    for(i = 0; i < count; i++) {
        printf("%s  ", animal[i]);
    }

    return 0;
}