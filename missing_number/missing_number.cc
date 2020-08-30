#include <iostream>
using namespace std;
using ll = int64_t;

int main() {
    ll n;
    cin >> n;
    ll sum = 0;
    for (ll i = 0; i < n - 1; i++ ) {
        ll curr;
        cin >> curr;
        sum += curr;
    }
    cout << (((n * (n + 1)) / 2) - sum) << endl;
}