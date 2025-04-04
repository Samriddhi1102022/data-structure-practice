#include <iostream>
#include <climits>
using namespace std;

bool findTarget (int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (target == arr[i]) {
            return true;
        }
    }
    return false;
}

int findMax (int arr[], int size) {
    int max = INT_MIN;
    for (int i = 0; i < size; i++) {
        max = (max < arr[i]) ? arr[i] : max;
    }
    return max;
}

int main () {
    int arr[5] = {1,2,3,4,5};
    if(findTarget(arr, 5, 3)) {
        cout << "target found\n";
    } else {
        cout << "target not found\n";
    }

    cout << "maximum element: " << findMax(arr, 5) << endl;
}