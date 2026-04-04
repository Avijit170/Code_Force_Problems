#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll lcm(ll a, ll b){
    return a / __gcd(a,b) * b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        ll a,b,c,m;
        cin >> a >> b >> c >> m;

        ll A = m/a;
        ll B = m/b;
        ll C = m/c;

        ll ab = lcm(a,b);
        ll ac = lcm(a,c);
        ll bc = lcm(b,c);
        ll abc = lcm(ab,c);

        ll AB = m/ab;
        ll AC = m/ac;
        ll BC = m/bc;
        ll ABC = m/abc;

        ll onlyA = A - AB - AC + ABC;
        ll onlyB = B - AB - BC + ABC;
        ll onlyC = C - AC - BC + ABC;

        ll onlyAB = AB - ABC;
        ll onlyAC = AC - ABC;
        ll onlyBC = BC - ABC;

        ll onlyABC = ABC;

        ll alice = 6*onlyA + 3*onlyAB + 3*onlyAC + 2*onlyABC;
        ll bob   = 6*onlyB + 3*onlyAB + 3*onlyBC + 2*onlyABC;
        ll carol = 6*onlyC + 3*onlyAC + 3*onlyBC + 2*onlyABC;

        cout << alice << " " << bob << " " << carol << "\n";
    }
}
