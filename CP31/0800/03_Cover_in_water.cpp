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
       cin>>n;
       string s;
       cin>>s;
       int count = 0;
       int maxEmpty = 0;
       int i=0;
       int ans=0;
       while(i<n)
       {
        while(i<n && s[i]!='#')
        {
            i++;
            count++;
            maxEmpty = max(count,maxEmpty);
        }
        ans+=count;
        count=0;
        i++;
       }
       if(maxEmpty>=3)
        cout<<2<<endl;
    else 
        cout<<ans<<endl;
 
    }
    return 0;
}