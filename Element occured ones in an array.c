#include <stdio.h>
#include <limits.h>

int main() {
    int i, arr[10], n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the number in the array: ");
        scanf("%d", &arr[i]);
    }
	int Count[1000] = {0};  

    for (i = 0; i < n; i++) {
        Count[arr[i]]++;
    }
	for (i = 0; i < 1000; i++) {
        if (Count[i] ==1) {
            printf("The element which are occured ones is %d\n", i);
        }
    }
}

