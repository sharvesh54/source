#include <iostream>
#include <string>


using namespace std;

int main(){

    string alpha {" abcdefghijklmnopqrstuvwxyzQRSTUVGHWXYZABIMNOPJCLEFDK"};
    string key {" QRSTUVGHWXYZABIMNOPJCLEFDKabcdefghijklmnopqrstuvwxyz"};
    string message {};
    string message1 {};


    cout << "enter your message:: ";
    getline(cin, message);
    cout << endl;

    for (auto i : message){
        for (size_t j {0}; j < alpha.length(); j++){
            if (i == alpha[j])
                message1 += key[j];
            continue;
        }
    
    }
    cout << "Encrypting.........................." << endl;
    cout << endl;

    cout << "encrypted message is: "<< "'" << message1 << "'" << endl;
    cout << endl;

    message.clear();

    for (auto i : message1){
        for(size_t j {0}; j < key.length(); j++){
            if (i == key[j])
                message += alpha[j];
        }
    }

    cout << "Decrypting.........................." << endl;
    cout << endl;

    cout << "orignal message is:  " << "'" << message << "'" << endl;
    cout << endl;
}