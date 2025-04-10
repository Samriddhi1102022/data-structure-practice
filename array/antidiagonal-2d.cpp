#include <iostream>
using namespace std;

int main () {
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    // logic: target == (rowsize/2) + (colsize/2)
    int target = (3/2) + (3/2);
    // anti diagonal traversal
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            if (row+col == target) {
                cout << arr[row][col] << " ";
            }
        }
    }
}