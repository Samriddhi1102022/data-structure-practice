#include <iostream>
using namespace std;

int main () {
    int age;
    cin >> age;

    (age > 18) ? cout << "can vote\n" : cout << "cannot vote\n";
}