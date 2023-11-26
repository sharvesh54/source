#include<iostream>
#include<algorithm>
#include<vector>
#include<string>


using namespace std;


class Person {
    friend ostream &operator<<(ostream &os, const Person &p);
    string Name;
    int Age;
public:
    Person()=default;
    Person(string a, int b) : Name{a}, Age{b} {}
    bool operator<(const Person &rhs) const {
        return this->Age < rhs.Age;
    }
    bool operator==(const Person &rhs) const {
        return (this->Name == rhs.Name && this->Age == rhs.Age);
    }
};

ostream &operator<<(ostream &os, const Person &p) {
    os << p.Name << " : " << p.Age;
    return os;
}
template<typename T>
void display(vector<T> v){
    cout << "[ ";
    for_each(v.begin(),v.end(),[](T x){cout << x << " ";});
    cout << "]" << endl;
}

void erase_one(){

    vector <int> Z {1,2,3,4,5,6,7,8,9,10};
    vector <int> C (10, 69);

    //erase an piece of vector
    Z.erase(Z.begin(), Z.begin() + 3);

    display(Z);

}

void erase_by_condition(){

    vector <int> Z {1,2,3,4,5,6,7,8,9,10};
    vector <int> C (10, 69);

    //erase by condition
    auto it = Z.begin();
    while(it != Z.end()){
        if(*it % 2 == 0)
            Z.erase(it);
        else    
            it++;
    }

    display(Z);
}

void i_nserter(){

    vector <int> Z {1,2,3,4,5,6,7,8,9,10};
    vector <int> C (10, 69);

    copy(Z.begin(),Z.end(),back_inserter(C));

    display(C);
}

void i_nserter_bycondition(){

    vector <int> Z {1,2,3,4,5,6,7,8,9,10};
    vector <int> C (10, 69);

    copy_if(Z.begin(),Z.end(),back_inserter(C),[](int X){return X % 2 == 0;});

    display(C);
}

void t_ransform(){

    vector <int> Z {1,2,3,4,5,6,7,8,9,10};
    vector <int> C (10, 69);

    vector<int> T;
    transform(Z.begin(),Z.end(),C.begin(),back_inserter(T),[](int x, int y){return x * y;});
    display(T);
}

void test_class(){

    vector <Person> v;
    Person temp1 {"santu", 25};
    Person temp2 {"swati", 30};
    v.push_back(temp1);
    v.emplace_back(temp2);

    display(v);


}


int main(){

    test_class();
    t_ransform();
    i_nserter_bycondition();
    i_nserter();
    erase_by_condition();
    erase_one();

}