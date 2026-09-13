#include <stdio.h>
int main() {
    int arr[100], n, i, target, found = 0;
    int low, high, mid;
      printf("Enter the number of elements: ");
      scanf("%d", &n);
      printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value to search for: ");
    scanf("%d", &target);
      low = 0;
      high = n - 1;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            printf("Element found at index %d.\n", mid);
            found = 1;
            break;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if (!found) {
        printf("Element not found in the array.\n");
    }
    return 0;
}

