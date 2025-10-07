#include <iostream>
using namespace std;

int fibo_iter(int n) {
    int a = 0, b = 1, t;
    while (n > 1) {
        t = a;
        a = b;
        b = b + t;
        n--;
    }
    return b;
}

int fibo_rec(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibo_rec(n - 1) + fibo_rec(n - 2);
}

void print_fibo(int n) {
    int a = 0, b = 1, t;
    cout << "Fibonacci Sequence (0 to " << n << "): ";
    if (n >= 0) cout << a;
    if (n >= 1) cout << " " << b;
    for (int i = 2; i <= n; i++) {
        t = a + b;
        cout << " " << t;
        a = b;
        b = t;
    }
    cout << endl;
}

void fibo_array(int n) {
    if (n < 0) return;
    int fib[n + 1]; 
    fib[0] = 0;
    if (n >= 1) fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    cout << "Fibonacci values stored in array: ";
    for (int i = 0; i <= n; i++) {
        cout << fib[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Iterative Fibonacci(" << n << ") = " << fibo_iter(n) << endl;
    cout << "Recursive Fibonacci(" << n << ") = " << fibo_rec(n) << endl;

    print_fibo(n);
    fibo_array(n);

    return 0;
}
