#include <stdio.h>

int main() {
    int array[] = {1,4,7,9,12};
    int target = 9;
    int length = sizeof(array)/sizeof(array[0]);
    int index = linearSearch(array, target,length);
    if (index != -1) {
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not found\n");
    }
    return 0; 


}

int linearSearch(int arr[], int target, int size) {
    for (int i=0; i<size;i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}