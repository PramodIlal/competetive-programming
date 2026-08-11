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
        int a, b, c;
        cin >> a >> b >> c;
        if((a+c) > (b+c))
            cout << "First" << endl;
        else if((a+c) < (b+c))
            cout << "Second" << endl;
        else
        {
            if(c%2)
                cout << "First" << endl;
            else
                cout << "Second" << endl;
        }
    }
    return 0;
}
