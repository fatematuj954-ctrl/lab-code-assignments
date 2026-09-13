#include <stdio.h>

int LENGTH(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

char GETCHAR(char str[], int n) {
    return str[n];
}

void PUTCHAR(char str[], int n, char c) {
    str[n] = c;
}

int POS(char str1[], char str2[]) {
    int len1 = LENGTH(str1);
    int len2 = LENGTH(str2);

    for (int i = 0; i <= len1 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (str1[i + j] != str2[j]) {
                break;
            }
        }
        if (j == len2) return i;
    }
    return -1;
}

void CONCAT(char str1[], char str2[], char result[]) {
    int k = 0;
    for (int i = 0; str1[i] != '\0'; i++) {
        result[k++] = str1[i];
    }
    for (int j = 0; str2[j] != '\0'; j++) {
        result[k++] = str2[j];
    }
    result[k] = '\0';
}

void SUBSTRING(char str1[], int i, int m, char result[]) {
    int k = 0;
    for (int j = 0; j < m && str1[i + j] != '\0'; j++) {
        result[k++] = str1[i + j];
    }
    result[k] = '\0';
}

void DELETE(char str[], int i, int m, char result[]) {
    int k = 0;
    for (int j = 0; str[j] != '\0'; j++) {
        if (j >= i && j < i + m) {
            continue;
        }
        result[k++] = str[j];
    }
    result[k] = '\0';
}

void INSERT(char str1[], char str2[], int i, char result[]) {
    int k = 0;
    for (int j = 0; j < i && str1[j] != '\0'; j++) {
        result[k++] = str1[j];
    }
    for (int j = 0; str2[j] != '\0'; j++) {
        result[k++] = str2[j];
    }
    for (int j = i; str1[j] != '\0'; j++) {
        result[k++] = str1[j];
    }
    result[k] = '\0';
}

int COMPARE(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

int main() {
    char s1[100], s2[100], output[200];

    printf("Enter string 1 (s1): ");
    scanf("%s", s1);
    printf("Enter string 2 (s2): ");
    scanf("%s", s2);

    printf("\n--- RESULTS ---\n");
    printf("LENGTH(s1): %d\n", LENGTH(s1));
    printf("GETCHAR(s1, 1): %c\n", GETCHAR(s1, 1));

    PUTCHAR(s1, 1, 'z');
    printf("After PUTCHAR(s1, 1, 'z'): %s\n", s1);

    printf("POS(s2 inside s1): %d\n", POS(s1, s2));

    CONCAT(s1, s2, output);
    printf("CONCAT(s1, s2): %s\n", output);

    SUBSTRING(s1, 1, 3, output);
    printf("SUBSTRING(s1, 1, 3): %s\n", output);

    DELETE(s1, 1, 2, output);
    printf("DELETE(s1, 1, 2): %s\n", output);

    INSERT(s1, s2, 2, output);
    printf("INSERT(s1, s2, 2): %s\n", output);

    printf("COMPARE(s1, s2): %d\n", COMPARE(s1, s2));

    return 0;
}
