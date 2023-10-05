#include <stdio.h>

int main(void) {
    int 줄, 공백, 별, 총줄수 = 5;

    for (줄 = 1; 줄 <= 총줄수; 줄++) {
        for (공백 = 1; 공백 <= 총줄수 - 줄; 공백++) {
            printf(" ");
        }

        for (별 = 1; 별 <= 2 * 줄 - 1; 별++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
