#include <iostream>
#include <climits>
#include <vector>
using namespace std;

void CHANGE(int n) {
    vector<int> d = {1, 4, 5, 10};
    int k = d.size();
    vector<int> C(n + 1, INT_MAX);
    vector<int> coinUsed(n + 1, -1);

    C[0] = 0;

    for (int p = 1; p <= n; p++) {
        for (int i = 0; i < k; i++) {
            if (p >= d[i] && C[p - d[i]] + 1 < C[p]) {
                C[p] = C[p - d[i]] + 1;
                coinUsed[p] = d[i];
            }
        }
    }

    if (C[n] == INT_MAX) {
        cout << "No solution for amount " << n << endl;
        return;
    }

    cout << "Minimum coins needed = " << C[n] << endl;

    cout << "Coins used: ";
    int amount = n;
    while (amount > 0) {
        cout << coinUsed[amount] << " ";
        amount -= coinUsed[amount];
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter amount: ";
    cin >> n;
    CHANGE(n);
    return 0;
}
