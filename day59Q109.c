//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    int maxSum = 0;
    for (int i = 0; i < k; i++)
        maxSum += arr[i];

    int currSum = maxSum;
    for (int i = k; i < n; i++) {
        currSum += arr[i] - arr[i - k];
        if (currSum > maxSum)
            maxSum = currSum;
    }

    printf("Maximum sum of subarray of size %d: %d\n", k, maxSum);
    return 0;
}
