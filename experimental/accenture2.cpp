#include <iostream>
#include <vector>
using namespace std;

int largeSmallSum(int arr[], int n)
{
    
    if (n < 3)
    {
        return 0;
    }
    int largest=0, secondLargest = 0;
    int smallest=0, secondSmallest = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[i] > largest)
            {
                secondLargest = largest;
                largest = arr[i];
            }
        }
        else
        {
            if (arr[i] < smallest)
            {
                secondSmallest = smallest;
                smallest = arr[i];
            }
        }
    }
    return secondLargest + secondSmallest;
}

int main()
{
    int arr[] = {3, 2, 1, 7, 5, 4};
    cout << largeSmallSum(arr,6);
}
