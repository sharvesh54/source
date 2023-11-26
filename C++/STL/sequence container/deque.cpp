#include<iostream>
#include<algorithm>
#include<deque>
#include<vector>

using namespace std;

template<typename T>
void display(const deque<T> &d){
    cout << "[ ";
    for(const auto &i : d)
        cout << i << " ";
    cout << "]" << endl;
}

//pushing from vector to deque by logic

int vec_to_deque(){

    vector<int> v {1,2,3,4,5,6,7,8,9,10};
    deque<int> d;

    for(const auto &i: v ){
        if(i % 2 == 0)
            d.push_back(i);
        else
            d.push_front(i);
    }

    display(d);
}

void test(){
    vector<int> v {1,2,3,4,5,6,7,8,9,10};
    deque<int> d;

    copy(v.begin(),v.end(),front_inserter(d));
    display(d);

    d.clear();

    copy(v.begin(),v.end(),back_inserter(d));
    display(d);
}


int main(){

    deque<int> d (10,69);
    d = {1,2,3,4,5};
    display(d);

    d.push_back(69);
    d.push_front(69);
    display(d);

    cout << "front: " << d.front() << endl;
    cout << "Back: " << d.back() << endl;
    cout << "Size: " << d.size() << endl;

    d.pop_back();
    display(d);
    d.pop_front();
    display(d);

    cout << "----------------------------------" << endl;

    vec_to_deque();

    cout << "----------------------------------" << endl;

    test();
}