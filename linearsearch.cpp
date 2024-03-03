#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int key = 10;
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function call
    int result = search(arr, n, key);

    if(result == -1){
        cout << "Element is not present in array" << endl;
    }
    else
        cout << "Element is present at index " << result;
    return 0;
}
