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
    int n = 10;
    while(t--) {
        vector<vector<char>> arr(n, vector<char>(n));
        vector<vector<char>> v(n, vector<char>(n));
        for (int i = 0; i < n;i++)
        {
            for (int j = 0; j < n;j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < n / 2;i++)
        {
            for (int j = 0; j < i;j++)
            {
                v[i][j] = j + 1;
                v[n - 1 - i][j] = j + 1;
                v[i][n - 1 - j] = j + 1;
                v[n - 1 - i][n - 1 - j] = j + 1;
            }
            for (int k = i; k < n - i;k++)
            {
                v[i][k] = i + 1;
                v[n - 1 - i][k] = i + 1;
            }
        }
        int points = 0;
        for (int i = 0; i < n;i++)
        {
            for (int j = 0; j < n;j++)
            {
                if(arr[i][j]=='X')
                {
                    points += v[i][j];
                }
            }
        }
        cout << points << endl;
    }
    return 0;
}
