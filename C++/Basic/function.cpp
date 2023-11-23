#include <iostream>
#include <string>
#include <vector>


using namespace std;


void user_input(vector <string> &v){

    string flag{};
    do
    {
        cout << "enter the names: ";
        cin >> flag;
        v.push_back(flag);
    } while (flag != "q" || flag == "Q");
    

}

void print_vec (vector <string> &v){
    cout << "[";
    for (auto i : v){
        cout << i << ", ";  
    }
    cout<< "]" ;
}

int main(){
    vector <string> temp;
    user_input(temp);
    print_vec(temp);

}

// void print_arr(int arr[], size_t size);


// int main(){

//     int flag[] {1,2,3,4,5,6,7,8,9};
//     print_arr(flag, 9);
//     return 0;

// }


// void print_arr(int arr[], size_t size){

//     for(size_t i {0}; i < size; i++){
//         cout << arr[i] << endl;
//     }
// }


// void swap(int &a, int &b){
//     cout << "before swapping " << a << " " << b << endl;
//     int temp{};
//     temp = a;
//     a = b;
//     b = temp;

//     cout << "after swapping "  << a << " " << b << endl;
// }


// int main(){
//     int a {1345}, b {7896};
//     swap(a, b);
//     cout << "values of a and b after function execution " << a << " " << b << endl;
// }