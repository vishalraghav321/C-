#include <iostream>
#include <vector>
using namespace std;

int longestSubarray(vector<int> arr) {
    long n[] = {1,0,arr[0],arr[0]};   //{best, current, min, max}
    for(int i =0;i<arr.size();i++){
        if(abs(arr[i]-n[2])<=1 && abs(arr[i]-n[3])<=1){
            n[2]++;
            if(n[2]>arr[i])n[2]=arr[i];
            else if(n[3]<arr[i])n[3]=arr[i];
        }else{
            if(n[0]<n[1])n[0]=n[1];
            n[2]=arr[i];
            n[3]=arr[i];
            n[1]=1;
        }
    }
    if(n[0]<n[1])n[0]=n[1];

return n[0];
}

int main()
{
    int num;
    cout<<"Enter your number: ";
    cin>>num;
    cout<<"Your number is: " << num;
    return 0;
}

