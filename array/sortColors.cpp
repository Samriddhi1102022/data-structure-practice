#include <iostream>
using namespace std;

// dutch national flag problem
void sortColors(int nums[], int size) {
        int left = 0;
        int mid = 0;
        int right = size-1;

        while (mid <= right) {
            if (nums[mid] == 0) {
                swap(nums[mid++], nums[left++]);
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else if (nums[mid] == 2) {
                swap(nums[right--], nums[mid]);
            }
        }
    }

void print (int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main () {
    int arr[] = {0,1,2,0,2,1,0,2,2,0};
    int size = 10;
    cout << "before sorting: ";
    print(arr, size);
    sortColors(arr, size);
    cout << "after sorting: ";
    print(arr, size);
}