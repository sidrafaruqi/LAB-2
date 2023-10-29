#include <stdio.h>
#include <stdlib.h>
int main() {
    struct Distance {
        int feet;
        int inch;
    } d1, d2, sum;
    printf("ENTER YOUR FEET VALUE: ");
    scanf("%d", &d1.feet);
    printf("ENTER YOUR INCH VALUE: ");
    scanf("%d", &d1.inch);
    printf("ENTER YOUR FEET VALUE: ");
    scanf("%d", &d2.feet);
    printf("ENTER YOUR INCH VALUE: ");
    scanf("%d", &d2.inch);
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;
    if (sum.inch >= 12) {
        sum.inch = sum.inch - 12;
        sum.feet++;
    }
    printf("THE FEET VALUE IS: %d\n", sum.feet);
    printf("THE INCH VALUE IS: %.d\n", sum.inch);
    printf("YOUR VALUE IS: %d.%d", sum.feet, sum.inch);

}
