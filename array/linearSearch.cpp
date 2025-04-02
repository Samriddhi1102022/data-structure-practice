#include <iostream>
using namespace std;

bool findTarget (int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (target == arr[i]) {
            return true;
        }
    }
    return false;
}

int main () {
    int arr[5] = {1,2,3,4,5};
    if(findTarget(arr, 5, 3)) {
        cout << "target found\n";
    } else {
        cout << "target not found\n";
    }
}