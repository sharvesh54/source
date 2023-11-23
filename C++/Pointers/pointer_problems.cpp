#include <iostream>

using namespace std;


int find_max(int *arr, int size){

    int max{*arr};

    for(size_t i {0}; i < size; i++){
        if(*(arr + i) > max){
            max = *(arr + i);
        }
    }

    return max;


}

void reverse_arr1(int *arr, int size){

    for(int i {0}; i < size; i++)  
        cout << arr[i] << " ";

    cout << endl;

    cout << "------------------------" << endl;

    int *ptr {nullptr};

    ptr = new int[size];

    for (int i {0}, j {size - 1}; i < size;  i++, j--){
        
        *(ptr + j) = *(arr + i);


    }

    for(int i {0}; i < size; i++){

        cout << ptr[i] << " ";
    }

    delete [] ptr;

    cout << endl;
}

void reverse_arr2(int *arr, int size){

    for(int i {0}; i < size; i++)  
        cout << arr[i] << " ";

    cout << endl;

    cout << "------------------------" << endl;

    for(int i {0}; i < size; i++)  
        cout << *(arr + i) << " ";

    cout << endl;


    int *start {arr};
    int *end {arr + size - 1};

    while (start < end){
        int temp = *start;
        *start = *end;
        *end = temp;

        start ++;
        end--;
    }

    cout << "------------------------" << endl;

    for(int i {0}; i < size; i++)  
        cout << *(arr + i) << " ";
}


int main(){

    
    int alpha [] {1, 2, 3, 4, 5};

    int *gg {alpha};
    // cout << find_max(gg, 5) << endl;

    reverse_arr1(gg, 5);

    cout << "-----------------------------------------------------" << endl;

    reverse_arr2(gg, 5);



    return 0;
}


int apply(int a[], int b, int c [], int d ){

    int *ptr1 {nullptr};
    int *ptr2 {nullptr};
    int *ptr3 {nullptr};

    ptr1 = a;
    ptr2 = c;
    ptr3 = new int[b * d];

    for(size_t i {0}; i < b; i++){
        for(size_t j {0}; j < d; j++)
            *(ptr3 + ((i * d) + j)) = *(ptr1 + i) * *(ptr2 + j);
            
    }

    std::cout << "[ ";
    for(size_t i {0}; i < (b * d); i++)
        std::cout << *(ptr3 + i) << " ";
    std::cout << "]";
    delete [] ptr3;
}


// int main(){

//     int array1_size {5};
//     int array1 [] {1,2,3,4,5};

//     int array2_size {3};
//     int array2 [] {6,7,8};

//     apply(array1, array1_size, array2, array2_size);
  
// }