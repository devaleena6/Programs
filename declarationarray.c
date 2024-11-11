#include <stdio.h>

int main() {
    // You must mention the size of the array, if you want more than one
    // element initialized to 0
    // Here, all 5 elements are set to 0!
    int arr[5] = {0,1,2,3,4};
    for (int i=0; i<5; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}