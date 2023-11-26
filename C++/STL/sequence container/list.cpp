#include<iostream>
#include<algorithm>
#include<list>
#include<vector>
#include<iterator>
#include<string>


using namespace std;

class Person {
    friend ostream &operator<<(ostream &os, const Person &p);
    string Name;
    int Age;

public:
    Person(): Name{"Unknown"},Age{0} {}
    Person(string name, int age) : Name{name}, Age{age} {}

    bool operator<(const Person &rhs) const {
        return this->Age < rhs.Age;
    }
    bool operator==(const Person &rhs) const {
        return (this->Name == rhs.Name && this->Age == rhs.Age);
    }

};

ostream &operator<<(ostream &os, const Person &p){
    os << p.Name << ":" << p.Age;
    return os;
}

template<typename T>
void display(const list<T> &d){
    cout << "[ ";
    for(const auto &i : d)
        cout << i << " ";
    cout << "]" << endl;
}

void i_nsert(){

    list<int> l {1,2,3,4,5,6,7,8,9,10};
    list<int> l1 (10,69);
    display(l);

    auto it = find(l.begin(), l.end(), 5);
    if(it != l.end())
        l.insert(it , 100);
    
    display(l);
    cout << "------------------------" << endl;

    display(l1);
    l.insert(it, l1.begin(), l1.end());
    display(l);

    cout << "------------------------" << endl;

    advance(it, -11);
    cout  << *it << endl;

    l.erase(it);        // remove the 100 and iterator become invalid
    display(l);

}

void i_nsert_class(){
    list<Person> X;
    X.resize(5);      // uses person default constructor
    display(X);

    cout << "------------------------" << endl;

    list<Person> p {
        {"Santu", 25},
        {"swati", 30}

    };

    display(p);
    p.emplace_back("Gudia", 26);
    p.emplace_front("Nanhi", 19);
    display(p);

    cout << "------------------------" << endl;

    //insert KHUSHI before SANTU
    auto it = find(p.begin(), p.end(), Person{"Santu", 25});
    if(it != p.end())
        p.emplace(it,"Khushi",16);
    display(p);
    p.sort();
    display(p);
}

int main(){
    i_nsert();
    cout << "------------------------" << endl;
    i_nsert_class();
}

