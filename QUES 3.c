#include <stdio.h>
#include <stdlib.h>

int cmprstr(char s1[], char s2[]) {
    int i;
    for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            return (s1[i] - s2[i]);

        }

        }
    }

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    printf("%d",cmprstr(str1, str2));


}
