#include <stdio.h>



int* findLargestElement(int arr[], int size) {
    int *largest = &arr[0];  

    for (int i = 1; i < size; i++) {
        if (arr[i] > *largest) {
            largest = &arr[i];  
        }
    }
    return largest;
}

int main(){

int arr[] = {1, 24, 35, 12, 1, 7};
int size = sizeof(arr) / sizeof(arr[0]);


  int *largestElementAddress = findLargestElement(arr, size);



    printf("big count: %d\n", *largestElementAddress);

    return 0;


}
