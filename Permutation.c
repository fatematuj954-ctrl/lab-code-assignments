#include <stdio.h>
#include <string.h>
void permute(char str[], int index, int length) {
    if (index == length) {
        printf("%s\n", str);
        return;
    }
    for (int i = index; i < length; i++) {
        char temp = str[index];
        str[index] = str[i];
        str[i] = temp;
        permute(str, index + 1, length);
        temp = str[index];
        str[index] = str[i];
        str[i] = temp;
    }
}
int main() {
    char str[] = "cse";
    int length = strlen(str);
    printf("Permutations of %s:\n", str);
    permute(str, 0, length);
    return 0;
}
