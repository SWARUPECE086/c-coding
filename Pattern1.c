#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        int num;
        if (i % 2 == 0) {
            num = 2;
        } else {
            num = 1;
        }
        printf("%d ", num);
    
        printf("\n");
    }

    return 0;
}
