#include<iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

class Person {
public:
    string Name;
    int Age;

public:
    Person() = default;
    Person(string name, int age)
        :Name{name}, Age{age} {}

    bool operator<(const Person& rhs) const {
        return this->Age < rhs.Age;
    }
    bool operator==(const Person& rhs) const {
        return (this->Name == rhs.Name && this->Age == rhs.Age);
    }

};


//find algo in vector
void find_in_vec(vector<int> x, int y){

    auto i = find(x.begin(), x.end(), y);

    if(i != x.end())
        cout << "we have find: " << *i << endl;
    else    
        cout << "we can't find, sorry!" << endl;

}

//find algo in list
void find_in_list(list<Person> x, Person y){

    auto i = find(x.begin(), x.end(), y);

    if(i != x.end())
        cout << "we have find [" << y.Name << ", " << y.Age << "] in the list" << endl;
    else    
        cout << "we can't find [" << y.Name << ", " << y.Age << "] in the list, sorry!" << endl;

}

//for_each algo combined with lamda
void square(vector<int> x){

    for_each(x.begin(), x.end(), [](int i){cout << i * i << " ";});

}


//count_if algo combined with lamda
void count_even(vector<int> x){

    int num = count_if(x.begin(),x.end(),[](int y){return y % 2 == 0;});
    cout << num << " even numbers found";

}

int main(){
    vector<int> temp {1,2,3,4};

    // find_in_vec(temp, 4); 
    // square(temp);

    list<Person> l {
        {"santu", 25},
        {"swati", 31},
        {"gudia", 26}

    };

    //find_in_list(l, {"santu", 25});

    //count_even(temp);

}

