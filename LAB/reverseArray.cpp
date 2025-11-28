#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i=0;i<n;i++) cin >> arr[i];

    int start = 0, end = n - 1;
    while(start < end){
        swap(arr[start], arr[end]);
        // arr[start] = arr[start] + arr[end];
        // arr[end] = arr[start] - arr[end];
        // arr[start] = arr[start] - arr[end];
        start++;
        end--;
    }

    cout << "Reversed Array: ";
    for(int i=0;i<n;i++) cout << arr[i] << " ";
}
