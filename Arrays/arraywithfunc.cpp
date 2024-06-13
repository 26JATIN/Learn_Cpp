#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    
    int maxInRest = findMax(arr + 1, n - 1);
    
    return (arr[0] > maxInRest) ? arr[0] : maxInRest;
}

int main() {
    int arr[] = {1, 5, 3, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int maxElement = findMax(arr, n);
    cout << "The maximum element in the array is: " << maxElement << endl;
    
    return 0;
}
