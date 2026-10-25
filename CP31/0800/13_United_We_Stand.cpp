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
        sort(v.begin(), v.end());
        if(v[0]==v[n-1])
        {
            cout << -1 << endl;
            continue;
        }
        int ind = 0;
        for (int i = 1; i < n;i++)
        {
            if(v[i]!=v[i-1])
            {
                ind = i;
                break;
            }
        }
        cout << ind << " " << n - ind << endl;
        for (int i = 0; i < n;i++)
        {
            if(i==ind)
                cout << endl;
            cout << v[i] << " ";   
        }
        cout << endl;
    }
    return 0;
}
