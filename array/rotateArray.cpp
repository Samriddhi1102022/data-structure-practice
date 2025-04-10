#include <iostream>
using namespace std;

// method 1
void rotate1 (int arr[], int size, int shift) {
    shift = shift%size;
    if (shift == 0) {
        return;
    }
    int temp[40];
    int index = 0;
    for (int i = size-shift; i < size; i++) {
        temp[index] = arr[i];
        index++;
    }
    for (int i = size-1; i>=0; i--) {
        if (i-shift >= 0)
            arr[i] = arr[i-shift];
    }
    for (int i = 0; i < shift; i++) {
        arr[i] = temp[i];
    }
}

int main () {
    int arr[] = {1,2,3,4,5,6};
    rotate1(arr, 6, 2);
    for (int i = 0; i < 6; i++) {
        cout << arr[i];
    } 
}