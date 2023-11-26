#include<iostream>

#include <vector>
#include<algorithm>

using namespace std;

void display(vector <int> x){
    for(auto i : x)
        cout << i << " ";
    cout << endl;
}

int main(){

    vector <int> q {9,6,7,4,8};
    display(q);

    reverse(q.begin(),q.end());
    display(q);


}