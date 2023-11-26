#include<iostream>
#include<algorithm>
#include<array>
#include<string>

using namespace std;

int main(){

    array<int, 5> x {1,2,3,4,69};
    cout << x.size() << " " << x[2] << " " << x.front() << " " << x.back() << endl;
    cout << x.empty() << endl;

    array<string, 3> y {"santu", "swati", "gudia"};

    array<int, 5> z {10,11,12,13,14};
    z.swap(x);
    cout << x.size() << " " << x[2] << " " << x.front() << " " << x.back() << endl;

    int* ptr = x.data();

    cout << ptr << endl;
    cout << *(ptr + 3) << endl;

}