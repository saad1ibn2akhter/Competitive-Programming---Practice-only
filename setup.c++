#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define sz(v) (int)v.size()
#define pii pair<int,int>
#define pll pair<ll,ll>
#defne vi vector<int>
#define vl vector<ll>
#define vii vector<pii>
#define vll vector<pll>
#ifndef ONLINE_JUDGE
    #define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
    #define debug(x)
#endif
const ll MOD = 1e9+7;
const ll INF = 1e18;
const int N = 1e5 + 5; 
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a * b / gcd(a, b); }
ll modpow(ll x, ll n, ll m) { // x^n % m
    ll res = 1;
    while (n) {
        if (n % 2) res = res * x % m;
        x = x * x % m;
        n /= 2;
    }
    return res;
}
int numDigits(ll num) { return num ? (int)log10(num) + 1 : 1; }



int main() {
    fast_io; // Enable fast input/output
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);  // For local testing
        freopen("output.txt", "w", stdout); // For local testing
        freopen("error.txt", "w", stderr);  // For local debugging
    #endif
    
    int t = 1;
    cin >> t;  // Uncomment for multiple test cases
    while (t--) {
        solve();  // Call the solve function for each test case
    }

    return 0;
}
