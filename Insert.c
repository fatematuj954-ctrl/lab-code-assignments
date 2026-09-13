#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[50], res[150];
    int pos, i, j = 0, k = 0;

    printf("Enter the original string: ");
    scanf("%s", str1);

    printf("Enter the new string to insert: ");
    scanf("%s", str2);

    printf("Enter specific position (0-indexed): ");
    scanf("%d", &pos);

    for (i = 0; i < pos && str1[i] != '\0'; i++) {
        res[k++] = str1[i];
    }
    for (j = 0; str2[j] != '\0'; j++) {
        res[k++] = str2[j];
    }
    for (i = pos; str1[i] != '\0'; i++) {
        res[k++] = str1[i];
    }
    res[k] = '\0';

    printf("Resulting string: %s\n", res);
    return 0;
}
