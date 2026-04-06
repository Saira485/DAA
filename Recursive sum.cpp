#include <iostream>
using namespace std;

// Recursive function
int sum(int arr[], int n) {
    if(n == 0)
        return 0;   // base case
    else
        return arr[n - 1] + sum(arr, n - 1);  // recursive call
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int total = sum(arr, n);

    cout << "Total sum = " << total;

    return 0;
}
