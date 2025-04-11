#include <iostream>
using namespace std;

// Missing element from an array with duplicates
void missing(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int index = abs(arr[i]) -1;
        if (arr[index] > 0) {
            arr[index] *= -1;
        }
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            cout << i+1 << " ";
        }
    }
}

int main () {
    int arr[5] = {1,3,5,3,4};
    int size = 5;
    missing(arr, size);
}