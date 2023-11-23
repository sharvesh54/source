#include <iostream>
using namespace std;

int main (){

    cout << "enter height, width and length of package separeted by space: ";
    int height {}, width {}, length {};
    cin >> height >> width >> length;

    double volume {};
    volume = height * width * length;


    const int max_height {10}, max_width {10}, max_length {10};
    const double base_pay {2.50};

    if (height > max_height || width > max_width || length > max_length)
        cout << "Sorry can't ship";
    else{
        if (volume > 500)
            cout << "price will be: " << base_pay + (base_pay * 0.25);
        else if (volume > 100)
            cout << "price will be: " << base_pay + (base_pay * 0.10);
        else
            cout << endl; 


    }
   return 0;
}