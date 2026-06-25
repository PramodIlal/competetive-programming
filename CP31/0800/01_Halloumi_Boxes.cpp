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
        int n,k;
        cin>>n>>k;
 
 
        vector<int>v(n);
        for (int i = 0; i < n; ++i)
        {
            cin>>v[i];
        }
        if(k>1 || n==1)
        {
            cout<<"YES"<<endl;;
        }
        else
        {
            int isSorted = true;
            for(int i=0;i<n-1;i++)
            {
                if(v[i]>v[i+1])
                {
                    isSorted = false;
                    break;
                }
            }
            if(isSorted)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
 
        }
    }
    return 0;
}