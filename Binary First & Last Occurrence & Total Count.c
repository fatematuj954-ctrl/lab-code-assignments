#include <stdio.h>
int main() {
    int arr[100], n, key, low, mid, high, i;
    int first_pos = -1, last_pos = -1, total_count = 0;
        printf("Enter the number of elements: ");
        scanf("%d", &n);
        printf("Enter %d sorted elements:\n", n);
        for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter search key: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            first_pos = mid;
            high = mid - 1;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            last_pos = mid;
            low = mid + 1;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (first_pos != -1) {
        total_count = (last_pos - first_pos) + 1;
        printf("\nFirst occurrence of %d found at position %d\n", key, first_pos + 1);
        printf("Last occurrence of %d found at position %d\n", key, last_pos + 1);
        printf("Total count of %d in the array: %d\n", key, total_count);
    } else {
        printf("\nElement not found. Total count: 0\n");
    }
    return 0;
}
