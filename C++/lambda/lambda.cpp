//inline anonmous function

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//[capture](parameters){function definition}

int main(){

    int d {3};
    vector<int> v {1,2,3,4,5,6,7,8,9};

    //for_each(v.begin(),v.end(),[](int i){cout << i << " ";});

    for_each(v.begin(),v.end(),[=](int i){
        if(i % d == 0)
        cout << i << " : divisible by " << d << endl;
    else
        cout << i << " : not divisible by " << d << endl;
        
    });

}
