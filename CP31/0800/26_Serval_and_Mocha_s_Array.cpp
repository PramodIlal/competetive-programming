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
        int n;
        cin >> n;
        vi v(n);
        for (int i = 0; i < n;i++)
            cin >> v[i];
        bool found = false;
        for (int i = 0; i < n-1;i++)
        {
            for (int j = i + 1; j < n;j++)
            {
                if(gcd(v[i],v[j])<=2)
                {
                    found = true;
                    break;
                }
            }
            if(found)
                break;
        }
        if(found)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
