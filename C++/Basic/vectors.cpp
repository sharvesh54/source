#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);


    //Displaying by .at() method
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    vector <vector <int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "-------------------------" << endl;


    cout << vector_2d.at(0).at(0) << endl; 


    cout << "-------------------------" << endl;


    vector1.at(0) = 1000;

    cout << vector1.at(0) << endl;

    cout << "-------------------------" << endl;

    cout << vector_2d.at(0).at(0) << endl;

    return 0;

}