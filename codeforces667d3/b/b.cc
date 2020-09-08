#include <iostream>
using namespace std;
using ll = int64_t;

int main() {
    ll t, a, b, x, y, n, m, ans;
    cin >> t;
    for (ll i = 0; i < t; i++) {
        cin >> a >> b >> x >> y >> n;
        if (a < b) {
            m = a - x;
            if (n < m) {
                a -= n;
                ans = a * b;
                cout << ans << endl;
                continue;
            } else {
                a -= m;
                b -= n - m;
                ans = a * b;
                cout << ans << endl;
                continue;
            }
        } else {
            m = b - y;
            if (n < m) {
                b -= n;
                ans = a * b;
                cout << ans << endl;
                continue;
            } else {
                b -= m;
                a -= n - m;
                ans = a * b;
                cout << ans << endl;
                continue;
            }
        }
        /*for (ll j = n; j > 0; j--) {
            if (a == x) {
                b--;
            } else if (b == y) {
                a--;
            } else if (a < b) {
                a--;
            } else {
                b--;
            }
        }*/
        ans = a * b;
        cout << ans << endl;
    }
}