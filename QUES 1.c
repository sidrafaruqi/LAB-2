#include <stdio.h>

int main() {
    int a;
    printf("ENTER NUMBER OF ROWS: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        // Print leading spaces
        for (int j = a - i; j > 0; j--) {
            printf(" ");
        }

        // Print asterisks
        for (int k = 1; k <=i; k++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
