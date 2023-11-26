#include<iostream>
#include <string>
#include <vector>
using namespace std;

template<typename T>
class Item {
private:
    string name;
    T value;

public:
    Item(string name, T value)
        : name{name}, value{value}{}

    string get_name() const {return name; }
    T get_value() const {return value; }

};

template<typename T1, typename T2>
struct My_pair {
    T1 first;
    T2 second;
};


int main(){

    Item<int> item1 {"item1", 1};

    // cout << item1.get_name() << " " << item1.get_value() << endl;

    Item<double> item2{"item2", 2.39};

    Item<string> item3{"item3", "item4"};

    vector <Item<int>> vec {};

    vec.push_back(item1);
    vec.push_back(Item <int> ("hello", 69));
    vec.push_back(Item <int> ("bye", 101));

    for(auto i: vec){
        cout << i.get_name() << " " << i.get_value() << endl;
    }

    //working on pair

    My_pair <string, double> p1{"sharvesh", 69.696969};
    My_pair <int, int> p2 {1, 2};


    cout << p1.first << " " << p1.second << endl;
}