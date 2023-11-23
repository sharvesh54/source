#include <iostream>

using namespace std;

unsigned long long fib(int n){

    if( n == 0 )             //base case
        return 0;
    else if ( n == 1)
        return 1;
    
    return fib(n - 1) + fib(n - 2);   //recursion case

}


int main(){

    cout << fib(0);

}


