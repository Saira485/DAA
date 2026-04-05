#include <iostream>
using namespace std;

int main() {
    int n, key, found = 0;
    cout << "Enter number of students: ";
    cin >> n;

    int arr[n];
    cout << "Enter roll numbers:\n";
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter roll number to search: ";
    cin >> key;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Found at position " << i+1;
            found = 1;
            break;
        }
    }

    if(!found) cout << "Not Found";
}
