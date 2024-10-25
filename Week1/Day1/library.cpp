#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define sz(yo) (ll)yo.size()

/*Sieve*/
const int N = 1e2 + 9; //1e8+9
bitset<N> prime;
void sieve()
{
    for (ll i = 0;i < N;i++)
        prime[i] = true;
    int n = N - 3;
    prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }
}

/*Mathematical*/
ll power(ll a, ll b)
{
    ll ans = 1;
    while (b > 0)
    {
        if (b & 1)
            ans *= a;
        a *= a;
        b >>= 1;
    }
    return ans;
}

ll mul(ll a, ll b, ll MOD) // a * b % mod
{
    return __int128(a) * b % MOD;
}

ll powerMOD(ll a, ll b, ll MOD) // a^b % mod
{
    ll ans = 1 % MOD;
    while (b)
    {
        if (b & 1)
            ans = mul(ans, a, MOD);
        a = mul(a, a, MOD);
        b >>= 1;
    }
    return ans;
}

ll inverse(ll a, ll MOD) // (1 / a) % mod
{
    return powerMOD(a, MOD - 2, MOD);
}

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return ((a / gcd(a, b)) * b);
}

/*Convert*/
ll stringToInt(string& s)
{
    ll ans = 0;
    for (ll i = 0; i < (ll)s.size(); i++)
        ans = ans * 10 + (s[i] - '0');
    return ans;
}

string intToBinary(ll x)
{
    string s;
    while (x > 0)
    {
        s += (x % 2 ? '1' : '0');
        x /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}

ll countTotalSetBits(ll n)
{
    return __builtin_popcountll(n);
}

char digitToChar(ll x)
{
    char ch = static_cast<char>(x + '0');
    return ch;
}

vector<vector<ll>> getSubsets(vector<ll> num)
{
    ll sz = (ll)num.size(), subsetNum = (1 << sz);
    vector<vector<ll>> allSubsets;
    for (ll mask = 0; mask < subsetNum; mask++)
    {
        vector<ll> subset;
        for (ll i = 0; i < sz; i++)
        {
            if (mask & (1 << i))
                subset.push_back(num[i]);
        }
        allSubsets.push_back(subset);
    }
    return allSubsets;
}
/*Check*/
bool isPowerOfTwo(ll x)
{
    return (x && (!(x & (x - 1))));
}

bool isPerfectSquare(ll x)
{
    if (x >= 0)
    {
        ll sr = (ll)sqrtl(x);
        return (sr * sr == x);
    }
    return false;
}

/*Direction Array*/
// D,R,U,L
ll dx[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
ll dy[8] = { 0, 1, 0, -1, -1, 1, 1, -1 };
char dir[4] = { 'D', 'R', 'U', 'L' };

// must check elachi case 0-9
/*Code Begins*/


void solve()
{
    // cout << isPowerOfTwo(33554432) << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    t = 1;
    // cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        // cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}