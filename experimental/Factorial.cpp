#include <iostream>
using namespace std;

int fact(int a){
    if(a==1||a==0){
        return 1;
    }
    return a*fact(a-1);
}

int main()
{ 
    int n = 6;
    cout<<"hello";
    cout<<fact(n);
    return 0;
}
