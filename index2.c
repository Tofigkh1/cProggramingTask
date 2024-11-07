#include <stdio.h>

float avarrage(int *arr, int size) {
    int sum = 0;
    int *pt = arr;
    int i;

    for (i = 0; i < size; i++) {
        sum += *pt;
        pt++;
    }

    return (float)sum / size; 
}

int main() {
    int arr[] = {1, 24, 35, 12, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Average: %.2f\n", avarrage(arr, size)); 

    return 0;
}
