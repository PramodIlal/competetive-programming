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
        int n, k, x;
        cin >> n >> k >> x;
        if(k==1 && x==1)
        {
            cout << "No" << endl;
            continue;
        }
        if(k==2 && x==1)
        {
            if(n%2)
                cout << "No" << endl;
            else
            {
                cout << "Yes" << endl;
                cout << n / 2 << endl;
                for (int i = 0; i < n / 2;i++)
                {
                    cout <<"2"<<" ";
                }
                cout << endl;
            }
            continue;
        }
        if(x==1)
        {
            if(n%2==0)
            {
                cout << "Yes" << endl;
                cout << n / 2 << endl;
                for (int i = 0; i < n / 2;i++)
                {
                    cout << "2" << " ";
                }
                cout << endl;
            }
            else{
                cout << "Yes" << endl;
                cout << n / 2 << endl;
                for (int i = 0; i < (n/2)-1;i++)
                {
                    cout << "2" << " ";
                }
                cout << "3" << endl;
            }
        }
        else
        {
            cout << "Yes" << endl;
            cout << n << endl;
            for (int i = 0; i < n; i++)
            {
                cout << "1" << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
