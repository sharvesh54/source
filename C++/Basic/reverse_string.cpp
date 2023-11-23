#include <iostream>
#include <string>




void reverse(std::string a){

    std::string b;

    const char *start = a.c_str();
    const char *end {a.c_str() + a.size() - 1};


    while (end >= start) {
        b.push_back(*end);
        end--;
    }

    std::cout << b;

}

int main(){

    std::string name {"sharvesh"};

    reverse(name);


}