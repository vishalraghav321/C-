#include <iostream>
#include <math.h>
using namespace std;
int differenceOfSum(int n, int m){
    int sum1=0,sum2=0;
    for(int i = 1; i<=n;i++){
        if(i%m==0){
            sum1+=i;
        }
        else{
            sum2+=i;
        }
    }
    return abs(sum2-sum1);
}

int main() {
cout<<differenceOfSum(30,6);
}
