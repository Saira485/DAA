#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key;

    cout << "Enter element to search: ";
    cin >> key;

    int comparisons = 0;

    for(int i = 0; i < 5; i++) {
        comparisons++;
        if(arr[i] == key) {
            cout << "Found at position " << i+1 << endl;
            break;
        }
    }

    cout << "Comparisons made: " << comparisons;
}
