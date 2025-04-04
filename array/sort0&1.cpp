#include <iostream>
using namespace std;

// two pointer technique
void sort01 (int arr[], int size) {
    int left = 0;
    int right = 0;

    while (right < size) {
        if (arr[right] == 0) {
            swap(arr[left++], arr[right++]);
        } else if (arr[right] == 1) {
            right++;
        }
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {1,0,1,0,1,1,1,0,0,0,1};
    int size = 11;

    sort01(arr, size);
}