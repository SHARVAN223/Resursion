#include <iostream>
#include <vector>
using namespace std;

// Q. Check if sorted array

// bool isSorted(vector <int> arr , int n){
//     if (n==0 || n==1){
//         return true;
//     }
//     return arr[n-1] >= arr[n-2] && isSorted(arr , n-1);
// }


// int main(){
//     vector <int> arr = {1,2,3,4,5};
//     cout<<isSorted(arr, arr.size());
//     return 0;
// }


// Q.Binary Search

int Bs(int arr[], int target, int st, int end)
{
    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
           return Bs(arr , target, mid+1 , end);
        }
        else
        {
            return Bs(arr, target , st , mid-1);
        }
    }

    return -1;
}

int main()
{
    int arr[] = {-1, 0, 3, 5, 9, 12};

    int n = sizeof(arr);

    int st = 0;
    int end = n - 1;

    int target = 5;

    cout << Bs(arr, target, st, end);

    return 0;
}