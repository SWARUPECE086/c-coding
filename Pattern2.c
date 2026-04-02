#include <stdio.h>

int main() {

    int rows = 5;

    for(int i = 1; i <= 5; i++) {
        int num;

        if (i % 2 == 0) {
            num = 2;
        } else {
            num = 1;
        }

        for(int j = 1; j <= i; j++) {
            printf("%d\t", num);
            num += 2;
        }

        printf("\n");
    }

    return 0;
}
