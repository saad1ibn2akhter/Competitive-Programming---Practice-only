#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define sz(v) (int)v.size()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pii>
#define vll vector<pll>
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORR(i, a, b) for (int i = (a); i >= (b); i--)
#define sort(v) sort(v.begin(),v.end())
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
int mostFrequentElement(const vector<int> &arr)
{
    unordered_map<int, int> freqMap;
    for (int element : arr)
    {
        freqMap[element]++;
    }
    int mostFrequent = 0, maxFrequency = 0;
    for (const auto &entry : freqMap)
    {
        if (entry.second > maxFrequency)
        { mostFrequent = entry.first; maxFrequency = entry.second;
        }
    }
    return mostFrequent;
}
ll power(ll a,ll b){
    ll res = 1;
    for(int i =1;i<=b;i++){
        res*=a;
    }return res;
}



int main() {
    fast_io; // Enable fast input/output

    int t;
    cin >> t;  // Uncomment for multiple test cases
    while (t--) {
        solve();  // Call the solve function for each test case
    }

    return 0;
}
