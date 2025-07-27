#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int countTrailingZeroes(int x) {
    int count = 0;
    while (x % 10 == 0) {
        count++;
        x /= 10;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    int fact = factorial(n);
    cout <<fact;
    int trailingZeroes = countTrailingZeroes(fact);
    cout <<trailingZeroes;
    return 0;
}
