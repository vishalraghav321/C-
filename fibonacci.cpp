#include <iostream>
using namespace std;
int fib(int a){
    if(a==1 ){
        return 0;
    }
    if(a==2){
        return 1;
    }

    return fib(a-1) + fib(a-2);
    
    
}
int main()
{ 
    //To find the nth element of the series:
    int n = 8;
    cout<<fib(n);
    return 0;
}
