#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input a number: ";
    cin >> n;
    if (n >= 18)
        cout << "You are Eligible for Vote" << endl;
    else
        cout << "You are not Eligible for Vote" << endl;
    return 0;
}
