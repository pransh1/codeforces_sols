// https://codeforces.com/problemset/problem/546/A

#include<iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int totalCost = k * w * (w + 1) / 2;
    int borrow = max(0, totalCost - n);
    cout << borrow << endl;
    return 0;
}
