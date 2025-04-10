#include <iostream>
using namespace std;

int main () {
    int arr[3][4] = {{1,2,3,4},
                    {4,5,6,7},
                    {7,8,9,0}};
    
    int rowsize = 3;
    int colsize = 4;

    int arr2[4][3] = {0};
    for (int i = 0; i < rowsize; i++ ) {
        for (int j = 0; j < colsize; j++){
            arr2[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < colsize; i++ ) {
        for (int j = 0; j < rowsize; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
}