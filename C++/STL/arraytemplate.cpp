#include<iostream>
#include <string>
#include <vector>
using namespace std;

template<typename T, int N>
class Array {
    int size {N};
    T values[N];

    friend ostream &operator << (ostream &os, const Array<T, N> &arr){
        os << "[ ";
        for(const auto &val : arr.values)
            os << val << " ";
        os << " ]" << endl;
        return os;
    }

public:
    Array() = default;
    Array(T init_val){
        for(auto &item : values)
            item = init_val;
    }
    void fill(T val) {
        for(auto &item: values)
            item = val;
    }
    int get_size() const {
        return size;
    }
    //overload subscript operator for easy use
    T &operator[](int index) {
        return values[index];
    }


};

int main() {
    Array<int,5> nums;
    cout << "size: " << nums.get_size() << endl;
    cout << nums << endl;

    nums.fill(10);
    cout << nums << endl;

    Array<string, 10> temp {"santu"};
    cout << temp << endl;

    temp[0] = "swati";
    cout << temp << endl; 
}