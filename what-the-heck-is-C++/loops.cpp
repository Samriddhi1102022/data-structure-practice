#include <iostream>
using namespace std;

int main () {

    // while loop
    int i = 0;
    while (i < 5) {
        cout << "while loop working\n";
        i++;
    }
    cout << endl;

    // for loop
    for(int j = 0; j < 5; j++) {
        cout << "for loop working\n";
    }
    cout << endl;

    // do-while loop
    int k = 0;
    do {
        cout << "do-while loop working\n";
        k++;
    } while (k < 5);
    
    cout << endl;
}