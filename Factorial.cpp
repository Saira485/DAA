#include <iostream>
using namespace std;

// Recursive function
int factorial(int n) {
    if(n == 0 || n == 1)
        return 1;   // base case
    else
        return n * factorial(n - 1);  // recursive call
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int result = factorial(n);

    cout << "Factorial of " << n << " is: " << result;

    return 0;
}
