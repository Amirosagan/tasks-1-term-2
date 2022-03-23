#include <bits\stdc++.h>

using namespace std;

int main () {
    int num;
    cout << "please Entre your number and (number < 1000) \n -> ";
    cin >> num;
    if (num < 1000 ) {
        cout << "sum of 3 sub numbers from your number = " << (num % 10)+((num / 10) % 10)+((num / 100) % 10) << endl;
    }
    else {
        cout << "please entre (number < 1000)!!!!!!!!" << endl;
    }
    return 0;
}