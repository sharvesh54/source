#include <iostream>
using namespace std;

int main(){

    // cout << "Enter the number: ";
    // int num {};
    // cin >> num;

    // cout << num << " is " << (num % 2 == 0 ? "Even" : "Odd" ) << endl;

    cout << "enter two number seperated by space: ";
    int num1 {}, num2 {};
    cin >> num1 >> num2;

    cout << "largest is " << ((num1 > num2) ? num1 : num2) << endl;

    return 0;
}