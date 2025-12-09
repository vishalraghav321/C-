#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i=0;i<n;i++)
        if(arr[i]==key) return i;
    return -1;
}

int binarySearch(int arr[], int n, int key){
    int start=0, end=n-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] < key) start = mid + 1;
        else end = mid - 1;
    }
    return -1;
}

int main(){
    int n, key, choice;
    cout << "Enter size: ";   
    cin >> n;

    int arr[n];
    cout << "Enter sorted elements: ";
    for(int i=0;i<n;i++) cin >> arr[i];

    cout << "Enter key: ";
    cin >> key;

    cout << "1. Linear Search\n2. Binary Search\nChoice: ";
    cin >> choice;

    switch(choice){
        case 1: 
            cout << "Index = " << linearSearch(arr,n,key);
            break;
        case 2: 
            cout << "Index = " << binarySearch(arr,n,key);
            break;
        default: cout << "Invalid Choice";
    }
return 0;
}
