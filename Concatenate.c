#include <stdio.h>

int main() {
    char str1[50], str2[50], res[100];
    int i, j;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0'; i++) {
        res[i] = str1[i];
    }
    for (j = 0; str2[j] != '\0'; j++, i++) {
        res[i] = str2[j];
    }
    res[i] = '\0';

    printf("Concatenated string: %s\n", res);
    return 0;
}
