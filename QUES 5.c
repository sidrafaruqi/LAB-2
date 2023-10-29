#include <stdio.h>
#include <stdlib.h>

void unique_el(int a[], int b) {
    for (int i = 0; i < b; i++) {
        int isUnique = 1;

        for (int j = 0; j < b; j++) {
            if (i == j) {
                continue;
            }

            if (a[i] == a[j]) {
                isUnique = 0;
                break;
            }
        }

        if (isUnique) {
            printf("%d ", a[i]);
        }
    }
}

int main() {
    int a;
    int arr[1000];

    printf("ENTER THE NUMBER OF ELEMENTS YOU WANT IN YOUR ARRAY: ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        printf("ENTER YOUR %d ELEMENT: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Unique elements in the array are : ");
    unique_el(arr, a);

    return 0;
}
