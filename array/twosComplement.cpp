#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int findComplement(int num) {
    vector<int> binary;

    // integer to binary
    while (num>0) {
        binary.push_back(num&1);
        num = num >> 1;
    }

    int n = binary.size();
    // 1's complement 
    for (int i = 0; i < n; i++) {
        binary[i] = (binary[i]==1) ? 0 : 1;
    }

    // 2's complement
    bool carry = true;
    for (int i = 0; i < n; i++) {
        if (carry) {
            if (binary[i] == 0) {
                carry = false;
                binary[i] = 1;
            } else {
                binary[i] = 0;
            }
        }
    }
    if (carry) {
        binary.push_back(1);
    }

    int answer = 0;
    n = binary.size();
    for (int i = 0; i < n; i++) {
        answer += (pow(2,i) * binary[i]);
    }

    return answer;
}

int optimized(int num) {
    unsigned int answer = (~num)+1;
    return answer;
}

int main () {
    cout << findComplement(23) << " " << optimized(23);
}