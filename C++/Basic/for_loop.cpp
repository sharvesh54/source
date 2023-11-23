#include <iostream>
#include <vector>
using namespace std;

int main(){


// Display even number
    for (int i {1}; i <= 15; i++)
    {
        if (i % 2 == 0)
            cout << i << endl;
    }

    cout << "========================================"  << endl;
    
// display data of vector
    vector <int> nums {23,45,67,34,78,45,66,78};
    for (int i {0}; i < nums.size(); i++){
        cout << nums [i] << endl;
    }

    cout << "========================================"  << endl;

// Two loop in single statement by (,) operator
    for (int i {5}, j {5}; i <= 10; i++, j--){
        cout << i << " * " << j << " : " << (i * j) << endl;
    }

    cout << "========================================"  << endl;

// using conditional operator in for loop

    for (int i {1}; i <= 100; i++){
        cout << i << ((i % 5 == 0) ? "\n" : " ");
    }
}

int calculate_sum() {
    //---- WRITE YOUR CODE BELOW THIS LINE
    
    int sum {};
    for(int i {1}; i <= 15; i++)
        sum += (i % 2 != 0) ? i : 0;
    
    //---- WRITE YOUR CODE ABOVE THIS LINE
    //---- DO NOT MODIFY THE CODE BELOW
    return sum;
}