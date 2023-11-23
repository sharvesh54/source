#include <iostream>
#include <vector>
using namespace std;

//Nested Loops - Sum of the Product of all Pairs of Vector Elements
int main(){

    vector <int> num {2,4,6,8};


    int sum {};
    for (int i {0}; i < num.size(); i++){
        for(int j {i + 1}; j < num.size(); j++)
            sum += num.at(i) * num.at(j);
    }
    

cout << sum <<endl;

}

// #include <iostream>
// using namespace std;

// int main() {

//     int rows;

//     cout << "Enter number of rows: ";
//     cin >> rows;

//     for(int i = rows; i >= 1; --i) {
//         for(int j = 1; j <= i; ++j) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
    
//     return 0;
// }