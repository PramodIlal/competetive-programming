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
        unordered_map<int, int> mp;
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        if(mp[v[0]]==n)
        {
            cout << "Yes" << endl;
            continue;
        }
        bool possible = true;
        if(n%2==0)
        {
            for(auto it:mp)
            {
                if(it.second != (n/2))
                {
                    possible = false;
                    break;
                }
            }
            if(possible)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else
        {
            int count1 = 0,count2 = 0;
            for(auto it:mp)
            {
                if(it.second==(n/2)+1)
                    count1++;
                else if(it.second == (n/2))
                    count2++;
            }
            if(count1!=1)
                cout << "No" << endl;
            else if(count2!=1)
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
            
            
        
    }
    return 0;
}
