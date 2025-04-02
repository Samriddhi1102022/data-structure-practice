#include <iostream>
using namespace std;

// numeric hollow half pyramid
void halfPyramid (int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n) {
                cout << j << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// numeric hollow inverted half pyramid
void invertedHalfPyramid (int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            if (j == 1 || j == n - i + 1 || i == 1) {
                cout << j << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// numeric palindrome equilateral triangle
void palindromeEquilateralTriangle (int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = n - i; j > 0; j--) {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++) {
            cout << k << " ";
        }
        for (int l = i - 1; l > 0; l--) {
            cout << l << " ";
        }
        cout << endl;
    }
}

int main () {
    cout << "numeric hollow half pyramid:\n";
    halfPyramid(5);
    cout << endl;

    cout << "numeric hollow inverted half pyramid:\n";
    invertedHalfPyramid(5);
    cout << endl;

    cout << "numeric palindrome equilateral triangle:\n";
    palindromeEquilateralTriangle(5);
    cout << endl;

    return 0;
}