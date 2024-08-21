#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n ;
    cin>>n; // Change this to the desired number of Fibonacci numbers

    for (int i = 0; i < n; ++i) {
        std::cout << fibonacci(i) << " ";
    }

    return 0;
}
