#include <stdio.h>

int main(void) {
    int ��, ����, ��, ���ټ� = 5;

    for (�� = 1; �� <= ���ټ�; ��++) {
        for (���� = 1; ���� <= ���ټ� - ��; ����++) {
            printf(" ");
        }

        for (�� = 1; �� <= 2 * �� - 1; ��++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
