#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

void display(vector<int> x){
    //vector<int>:: iterator i = temp.begin();
    auto i = x.begin();

    while(i != x.end() && i < x.end()){
        cout << *i << " ";
        i += 2;
    }
}

void reverse(vector<int> x){
    auto i = x.rbegin();

    while(i != x.rend()){
        cout << *i << " ";
        i++;
    }
}

void half_display(vector<int> x){
    auto i = x.begin();
    auto j = x.end() - x.size()/2;

    while(i != j){
        cout << *i << " ";
        i++;
    }
}


int main(){

    vector<int> temp {1,2,3,4,5,6,7,8,9};


    display(temp);
    cout << endl;

    reverse(temp);
    cout << endl;
    
    half_display(temp);

}