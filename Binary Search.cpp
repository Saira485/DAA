#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter number of books: ";
    cin >> n;

    int arr[n];
    cout << "Enter sorted book IDs:\n";
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter book ID to search: ";
    cin >> key;

    int low = 0, high = n-1;

    while(low <= high) {
        int mid = (low + high)/2;

        if(arr[mid] == key) {
            cout << "Found at position " << mid+1;
            return 0;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Not Found";
}
