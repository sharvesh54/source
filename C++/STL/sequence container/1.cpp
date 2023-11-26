#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

void display(vector<int> x){
    cout << "[ ";
    for(auto i : x)
        cout << i << " ";
    cout << "]" << endl;;
}

const int* minimum(vector<int>& x){
    int *min_ptr {&x.at(0)};
    for(size_t i {1}; i < x.size(); i++){
        if(x[i] < *min_ptr)
            min_ptr = &x[i];
    }
    return min_ptr;
}

void manual_sort(vector<int> x){

}

int main(){

    vector<int> x {7, 5, 9, 4}; 

    //cout << temp;

    //display(x);

    // sort(x.begin(), x.end());
    // display(x);

}