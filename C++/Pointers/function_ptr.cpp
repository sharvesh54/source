//function pointer : in order to pass function as a argument to another function

#include <iostream>
#include <vector>

using namespace std;

bool ascend(int a, int b) {
    return a < b;
}

bool descend(int a, int b){
    return a > b;
}


void sort(vector<int> &numbersvector,bool(*temptr)(int, int)){
    for(int i = 0; i < numbersvector.size(); i++){

        int bestindex = i;

        for(int j = i + 1; j < numbersvector.size(); j++ ){
            if(temptr(numbersvector[j], numbersvector[bestindex]))
                bestindex = j;
        }
        swap(numbersvector[i], numbersvector[bestindex]);
    }
}

void display(vector<int> &a){
    for(auto i: a){
        cout << i << " ";
    }
}

int main(){

    vector<int> gg {5,2,11,1,0,9};
   // bool(*temptr)(int,int) = descend;
    bool(*temptr)(int,int) = ascend;
    sort(gg,temptr);
    display(gg);
}


