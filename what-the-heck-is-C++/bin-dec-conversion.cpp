#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// binary to decimal conversion
void binToDec (int binary) {
    int power = 0;
    int decimal = 0;
    while (binary > 0) {
        int temp = pow(2, power)*(binary%10);
        decimal += temp;
        power++;
        binary /= 10;
    }

    cout << decimal << endl;
}

// decimal to binary conversion
void decToBin (int decimal) {
    vector<int> binary;
    while (decimal) {
        binary.push_back(decimal%2);
        decimal /= 2;
    }

    vector<int> :: iterator it = binary.end();
    while (it != binary.begin()) {
        it--;
        cout << *it;
    }
}

int main () {
    int binary = 1100111;
    cout << "conversion of binary to decimal: ";
    binToDec(binary);

    int decimal = 103;
    cout << "conversion of decimal to binary: ";
    decToBin(decimal);
}