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
        string s;
        cin >> s;
        vector<int> freq(26);
        for(char ch:s)
            freq[ch - 'a']++;
        int odd_freq_count = 0;
        int even_freq_count = 0;
        for (int i = 0; i < 26;i++)
        {
            if(freq[i] && (freq[i]%2) == 1 )
                odd_freq_count++;
            else if(freq[i])
                even_freq_count++;
        }
        if((n - k) % 2 == 1)
        {
            if(odd_freq_count>k+1)
            {
                cout << "NO" << endl;
                continue;
            }
            int rem = k - (odd_freq_count - 1);
            if(rem%2)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else
        {
            if(odd_freq_count>k)
            {
                cout << "NO" << endl;
                continue;
            }
            int rem = k - odd_freq_count;
            if(rem%2)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}
