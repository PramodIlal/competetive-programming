#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define ff first
#define ss second

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;


#define debug(x) cerr << #x << " = " << x << '\n';

int main() {
    fastio();
    int t;
    cin >> t; 
    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(b>d)
            cout << -1 << endl;
        else if(d==b)
        {
            if(a>=c)
                cout << a - c << endl;
            else
                cout << -1 << endl;
        }
        else
        {
            if(a<(c-(d-b)))
                cout << -1 << endl;
            else
                cout << a - (c - (d - b))+ d - b << endl;
        }
    }
    return 0;
}
