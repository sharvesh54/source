#include<iostream>
#include<algorithm>
#include<deque>
#include<vector>
#include<string>

using namespace std;

//my solution 
bool is_palindrome1(const string &s){

    deque<char> d;
    deque<char> d1;

    for(const auto &i : s){
        d.push_front(i);

    }

    for(const auto &i : s){
        d1.push_back(i);

    }

    for(int i {0}; i < d.size(); i++){
        if(d[i] == d1[i])
            return true;
        else
            return false;
    }

}

//optimized solution
bool is_palindrome2(const string &s){

    deque<char> d;

    for(const auto &i : s)
        d.push_front(i);


    char c1,c2 {};

    while(d.size() > 1){
        c1 = d.front();
        c2 = d.back();
        d.pop_front();
        d.pop_back();
        if(c1 != c2)
            return false;
    }
    return true;
}

int main(){

    vector<string> v {"tenet","madam","radar","nasa"};

    for(auto i: v){
        if (is_palindrome2(i) == 1)
        cout << i << " is a palindrome." << endl;
    else    
        cout << i << " is not a palindrome." << endl;
    }

} 