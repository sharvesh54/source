//find minimum and maximum element in array

#include <iostream>

using namespace std;

void run(int a [], int size, int * min, int * max){

    for(int i {0}; i < size; i++){
        if(a [i] < *min)
            *min = a[i];
        if(a [i] > *max)
            *max = a[i];
    }
}

int main(){

    int arr[7] {77,-6,-9,90,543,78,8};

    int min, max {0};

    run(arr, 7, &min, &max);

    cout << min << " " << max << endl;

}