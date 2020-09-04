#include <iostream>
using namespace std;
using ll = int64_t;

int main() {
    ll t, a, b, c, ans;
    cin >> t;
    for (ll i = 0; i < t; i++) {
        cin >> a >> b;
        ans = 0;
        c = abs(a - b);
        ans += (c / 10);
        ans += (c % 10 != 0) ? 1 : 0;
        cout << ans << endl;
    }
}