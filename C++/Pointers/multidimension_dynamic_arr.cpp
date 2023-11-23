//dynamic array 1D


#include <iostream>

using namespace std; 


// int main(){

//     int size {6};

//     int * ptr = new int [size];

//     for(int i = 0; i < size; i++){

//         cout << "number " << i + 1 << ": ";
//         cin >> ptr[i]; 
//     }

//     for(int i = 0; i < size; i++){

//         cout << ptr[i] << " ";
//     }

//   delete [] ptr;

// }

// multidimensional dynamic array

int main(){

    int rows, columns;
    cout << "rows, columns: ";
    cin >> rows >> columns; 

    int **table = new int *[rows];

    for(int i = 0; i < rows; i++){
        table[i] = new int [columns];
    }


    for(int i = 0; i < rows; i++){
        delete [] table[i];
    }

    delete [] table;

    table = NULL;
    
}