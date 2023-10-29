#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void convert(char s1[]) {
    int i;
    for (i = 0; s1[i] != '\0'; i++) {
        if (s1[i] >= 'A' && s1[i] <= 'Z') {
            s1[i] = tolower((unsigned char)s1[i]);
        } else if (s1[i] >= 'a' && s1[i] <= 'z') {
            s1[i] = toupper((unsigned char)s1[i]);
        }
    }
    printf("%s", s1);
}

int main() {
    char str1[100];

    printf("Enter the sentence: ");
    fgets(str1, sizeof(str1), stdin);

    convert(str1);

    return 0;
}
