#include <stdio.h>

int main() {
    int n; #no. of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);   

    int arr[n];        // variable-length array
    int sum = 0;

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // input elements
        sum += arr[i];         // add to sum
    }

    printf("Sum = %d\n", sum);
    return 0;
}
