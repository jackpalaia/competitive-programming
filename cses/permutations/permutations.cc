#include <iostream>
using namespace std;
using ll = int64_t;

int main() {
    ll n;
    cin >> n;
    if (n == 1 || n == 0) {
        cout << n << endl;
        return 0;
    }
    if (n < 4) {
        cout << "NO SOLUTION" << endl;
    }
    ll odd = n - 1;
    while (odd > 0) {
        cout << odd << " ";
        odd -= 2;
    }
    while (n > 0) {
        cout << n << " ";
        n -= 2;
    }
    cout << endl;
}