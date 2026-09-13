#include <stdio.h>
int main() {
    char str[100], pat[50];
    int i, j, found;

    printf("Enter the main string: ");
    scanf("%s", str);

    printf("Enter the pattern to find: ");
    scanf("%s", pat);

    for (i = 0; str[i] != '\0'; i++) {
        found = 1;

        for (j = 0; pat[j] != '\0'; j++) {
            if (str[i + j] != pat[j]) {
                found = 0;
                break;
            }
        }

        if (found == 1) {
            printf("Pattern found at index: %d\n", i);
            return 0;
        }
    }

    printf("Pattern not found\n");
    return 0;
}
