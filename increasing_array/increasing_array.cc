#include <iostream>
using namespace std;
using ll = int64_t;

int main() {
    ll n, mx = 0, ans = 0;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        if (x < mx) {
            ans += mx - x;
        } else {
            mx = x;
        }
    }
    cout << ans << endl;
}