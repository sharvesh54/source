#include<iostream>
#include <string>
using namespace std;


template<typename T>
T maximum(T a,T b){
    return (a > b) ? a : b ;
}

template<typename X, typename Y>
void flag(X a, Y b){
    cout << a << " " << b << endl;
}

struct person{
    string name;
    int age;
    bool operator>(const person &rhs) const {
        return this-> age > rhs.age;
    }
};

ostream &operator<<(ostream &os, const person &p) {
    os << p.name;
    return os;
}

template<typename M>
void swapi(M &a, M &b){
    M temp = a;
    a = b;
    b = temp;
}

int main(){

    person one {"santu", 24};
    person two {"swati", 30};

    person three = maximum <person> (one, two);

    cout << three.name << " is older." << endl;

    cout << maximum(2.0,3.01) << " is greatest" << endl;

    flag("A", 69);
    flag(one, two);

    int r {100};
    int u {200};

    cout << r << " " << u << endl;

    swapi(r, u);
    
    cout << r << " " << u;

}