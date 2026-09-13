#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], res[100];
    int pos, num, i, k = 0;

    printf("Enter the original string: ");
    scanf("%s", str1);

    printf("Enter specific position (0-indexed): ");
    scanf("%d", &pos);

    printf("Enter number of characters to delete: ");
    scanf("%d", &num);

    for (i = 0; i < pos && str1[i] != '\0'; i++) {
        res[k++] = str1[i];
    }

    for (i = pos + num; str1[i] != '\0'; i++) {
        res[k++] = str1[i];
    }

    res[k] = '\0';

    printf("Resulting string: %s\n", res);

    return 0;
}
