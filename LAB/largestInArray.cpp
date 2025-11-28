#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i=0;i<n;i++) cin >> arr[i];

    int i = 0, largest = arr[0];
    while(i < n){
        if(arr[i] > largest)
            largest = arr[i];
        i++;
    }

    cout << "Largest = " << largest;
    return 0;
}
