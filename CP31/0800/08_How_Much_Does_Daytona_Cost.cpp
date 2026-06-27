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
        int n, k;
        cin >> n >> k;
        vi v(n);
        for (int i = 0; i < n;i++)
            cin >> v[i];
        bool ans = false;
        unordered_map<int, int> mp;
        for (int i = 0; i < n-1;i++)
        {
            int maxi = 1;
            mp[v[i]] = 1;
            for (int j = i + 1; j < n;j++)
            {
                mp[v[j]]++;
                if(mp[v[j]]>maxi)
                {
                    maxi = mp[v[j]];
                }
                if(mp[k]==maxi)
                {
                    ans = true;
                    break;
                }
            }
            if(ans || !mp[k]) break;
            mp.clear();
        }
        if(ans)
            cout << "YES" << endl;
        else if(n==1 && v[0]==k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
