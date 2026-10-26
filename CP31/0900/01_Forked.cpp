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
       int a,b,k1,k2,q1,q2;
       cin >> a >> b;
       cin >> k1 >> k2;
       cin >> q1 >> q2;
       map<pair<int, int>, int>mp;
       mp[{k1 + a, k2 + b}] = 1;
       mp[{k1 + a, k2 - b}] = 1;
       mp[{k1 - a, k2 + b}] = 1;
       mp[{k1 - a, k2 - b}] = 1;
       mp[{k1 + b, k2 + a}] = 1;
       mp[{k1 + b, k2 - a}] = 1;
       mp[{k1 - b, k2 + a}] = 1;
       mp[{k1 - b, k2 - a}] = 1;

       
       mp[{q1 + a, q2 + b}] += 1;
       mp[{q1 + a, q2 - b}] += 1;
       mp[{q1 - a, q2 + b}] += 1;
       mp[{q1 - a, q2 - b}] += 1;
       mp[{q1 + b, q2 + a}] += 1;
       mp[{q1 + b, q2 - a}] += 1;
       mp[{q1 - b, q2 + a}] += 1;
       mp[{q1 - b, q2 - a}] += 1;

       int ans = 0;
       for(auto it:mp)
       {
        if(it.second >= 2)
            ans++;
       }
       cout << ans << endl;
    }
    return 0;
}
