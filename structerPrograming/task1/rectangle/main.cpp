#include <iostream>

using namespace std;

int main () {
    long double width {0}, height {0};

    cout << "please entre height of your rectangle : \n -> ";
    cin >> height;
    
    cout << "please entre width of your rectangle : \n -> ";
    cin >> width;

    cout << "Perimeter of your rectangle = " << 2*(width+height) << endl;
    cout << "area of your rectangle = " << width * height << endl;

    system("pause");
    return 0;
}