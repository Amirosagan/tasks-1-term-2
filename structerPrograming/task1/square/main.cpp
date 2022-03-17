#include <iostream>

using namespace std;

int main () {
    long double sideOfSquare  {0};

    cout << "please entre hegiht of your square side : \n -> ";
    cin >> sideOfSquare;

    cout << "your Perimeter of square = " << sideOfSquare*4 << endl;

    cout << "your area of square = " << sideOfSquare*sideOfSquare << endl;

    system("pause");

    return 0;
}
