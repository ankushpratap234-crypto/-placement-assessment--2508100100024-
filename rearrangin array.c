// Rearranging array negative before positive.
#include <stdio.h>

void rearrangeArray(int* nums, int n) {
    int i = 0, j = 0;
    while (i < n) {
        if (nums[i] < 0) {
            int temp = nums[i];
            for (int k = i; k > j; k--) {
                nums[k] = nums[k - 1];
            }
            nums[j] = temp;
            j++;
        }
        i++;
    }
}

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6};
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrangeArray(arr, n);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}