#include <iostream>
#include <climits> // Required for INT_MIN
#include <algorithm> // Required for max()
using namespace std;

// Function returns the second largest element
int print2largest(int arr[], int n) {
    
    int ans = INT_MIN;
    // Largest element
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > ans) {
            ans = arr[i];
        }
    }

    // Second largest
    int second = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] != ans) {
            // FIXED: Changed 'ans = max(ans, arr[i])' to 'second = max(second, arr[i])'
            second = max(second, arr[i]);
        }
    }
    
    return second;
}

int main() {
    int arr[7] = {12, 35, 1, 10, 34, 1, 35};
    int n = 7;
    
    int result = print2largest(arr, n);
    
    cout << "Second Largest: " << result << endl;
    
    return 0;
}
