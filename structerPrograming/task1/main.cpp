#include <iostream>
#include <cmath>

using namespace std;

int main () {
    
    long double aSide {0} , bSide {0},cSide {0} ;
    cout << "Entre your triangle (a) side : \n -> ";
    cin >> aSide;
    cout << "Entre your triangle (b) side : \n -> ";
    cin >> bSide ;
    cout << "Entre your triangle (c) side : \n -> ";
    cin >> cSide ;

    cout << "perimeter of triangle = " << aSide+bSide+cSide << endl;

    cout << "area of your triangle = " << 0.25*pow((aSide+bSide-cSide) * (aSide-bSide+cSide) * (-aSide+bSide+cSide) * (aSide+bSide+cSide),0.5) << endl;

}

//Amir Elsagan

