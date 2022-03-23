#include <bits\stdc++.h>

using namespace std;


int main () {
    int x,y;

    cout << "entre x number \n -> ";
    cin >> x;
    cout << "entre y number \n -> ";
    cin >> y;

    x = x + y;
    y = x - y;
    x = x - y;

    cout << "\t AFTER SWAP !!\n";

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}