#include <stdio.h>

int main() {
    int i, arr[10], n, k, j, temp;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number of rotations: ");
    scanf("%d", &k);
    
    // Perform 'k' rotations
    for (i = 0; i < k; i++) {
        temp = arr[n - 1];  // Store the last element
        
        // Shift elements to the right
        for (j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        
        arr[0] = temp;  // Place the last element at the beginning
    }
    
    printf("Array after %d rotations:\n", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}




