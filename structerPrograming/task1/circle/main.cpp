#include <iostream>

using namespace std;

int main () {
    long double d {0};
    cout << "please entre half of Diameter of your circle :\n -> ";
    cin >> d;
    const long double pi {3.141592654};

    cout << "Circumference of your circle = " << 2*d*pi << endl;
    cout << "Area of your circle = " << d*d*pi  << endl;

    system("pause");

    return 0;
}
