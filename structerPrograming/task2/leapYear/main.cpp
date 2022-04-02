#include <bits\stdc++.h>

using namespace std;

int main () {
    int year ;
    cout << "please entre year \n -> ";
    cin >> year;
    if (year % 400 ==0|| (year % 4 == 0 && year % 100 != 0)) 
        cout << year <<  " is leap year !!!!\n";
    else 
        cout << year << " not leap year.\n" ;


        return 0;
    
}
