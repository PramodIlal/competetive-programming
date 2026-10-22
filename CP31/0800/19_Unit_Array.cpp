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
        int count = 0;
        int ans = 0;
        for (int i = 0; i < n;i++)
        {
            if(v[i]==-1)
                count++;
        }
        if(count<=n/2)
        {
            if(count%2)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else
        {
            int max_neg = n / 2;
            if(max_neg%2)
                max_neg--;
            cout << count - max_neg << endl;
        }
    }
    return 0;
}
