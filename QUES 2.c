#include <stdio.h
int main() {
    int n, i;
    int sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("FOR LOOP: \n");
    for (i = 1; i<=n; i+=2) {
        printf("%d ", i);
        sum += i;
    }
  printf("\nSum of the first %d odd natural numbers: %d\n", n, sum);
    sum = 0;
    printf("\WHILE LOOP:\n");
    i = 1;
    while (i <= n) {
        printf("%d ", i);
        sum += i;
        i += 2;
    }
    printf("\nSum of the first %d odd natural numbers: %d\n", n, sum);
    sum = 0;
    printf("\nDO-WHILE LOOP:\n");
    i = 1;
    do {
        printf("%d ", i);
        sum += i;
        i += 2;
    } while (i <= n);
    printf("\nSum of the first %d odd natural numbers: %d\n", n, sum);
}
