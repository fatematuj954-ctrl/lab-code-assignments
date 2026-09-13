#include <stdio.h>
int main() {
    int n;
    printf("Enter the upper limit to find prime numbers: ");
    scanf("%d", &n);
    int sieve[n + 1];
    for (int i = 0; i <= n; i++) {
        sieve[i] = 1;
    }
    sieve[0] = 0;
    sieve[1] = 0;
    for (int j = 2; j * j <= n; j++) {
        if (sieve[j] == 1) {
            for (int i = j * j; i <= n; i += j) {
                sieve[i] = 0;
            }
        }
    }
    printf("Prime numbers up to %d are:\n", n);
    for (int i = 2; i <= n; i++) {
        if (sieve[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
