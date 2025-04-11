#include <iostream>
using namespace std;

// move all negative integers to the left side of the array
// two pointer approach
// but it does not consider the order of input elements
void move(int arr[], int size) {
    int negative = 0;
    int positive = 0;
    while (positive < size) {
        if (arr[negative] < 0) {
            negative++;
        } else if (arr[positive] < 0) {
            swap(arr[negative++], arr[positive++]);
        } else {
            positive++;
        }
    }

    for (int i =0; i< size; i++) {
        cout << arr[i] << " ";
    }
}

// dutch national flag approach
void move2(int arr[], int size) {
    int negative = 0;
    int positive = size-1;
    while (positive > negative) {
        if (arr[negative] < 0) {
            negative++;
        } else if (arr[positive] < 0) {
            swap(arr[negative++], arr[positive--]);
        } else {
            positive--;
        }
    }

    for (int i =0; i< size; i++) {
        cout << arr[i] << " ";
    }
}

int main () {
    int arr[14] = {1,2,-3,4,5,-6,-6,8,9,-6,4,3,-36,-7};
    int size = 14;

    move2(arr, size);
}