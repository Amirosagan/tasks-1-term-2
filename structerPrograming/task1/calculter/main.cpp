#include <bits\stdc++.h>

using namespace std;

int main () {
    double num1 ,num2;
    char c = ' ',repet = 'y';
    cout << "Entre number1 \n -> ";
    cin >> num1;



    cout << "Entre opritor \n -> ";
    cin >> c;
    cout << "Entre number2 \n -> ";
    cin >> num2;
    
    if (c == '+')
    {
        cout << num1 << " + " << num2  << " = " << num1+num2 << endl;
    }
    else if (c == '-')
    {
        cout << num1 << " - " << num2  << " = " << num1-num2 << endl;
    }
    else if (c == '*') {
        cout << num1 << " * " << num2  << " = " << num1*num2 << endl;

    }
    else if (c == '/') 
    {
        cout << num1 << " / " << num2  << " = " << num1/num2 << endl;
    }
    else {
        cout << "Entre corcet opritor (*)  (-)  (/)  (+)  !!!";
    }
    return 0;

}