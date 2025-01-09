#include <iostream>
using namespace std;

int main () {
    char grade;
    cout << "enter the grade: ";
    cin >> grade;

    switch (grade) {
    case 'A':
        cout << "in range of 90 to 100\n";
        break;
    case 'B':
        cout << "in range of 80 to 90\n";
        break;
    case 'C':
        cout << "in range of 70 to 80\n";
        break;
    case 'D':
        cout << "in range of 60 to 70\n";
        break;
    default:
        cout << "FAIL!!\n";
        break;
    }
}