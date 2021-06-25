#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define int long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define endl "\n"
#define sp(n) fixed<<setprecision(n)
#define countBits(x) _builtin_popcount(x)
#define ctz(x) __builtin_ctz(x)// no. of unset bits before first setBit
typedef pair<int, int>	pii;
typedef vector<int>		vi;
typedef vector<pii>		vpii;
typedef vector<vi>		vvi;
const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//=======================


void solve() {
    int n,k;
    cin>>n>>k;
    vi v(k);
    unordered_set<int> s;
    Fo(i,1,n*k +1){
        s.insert(i);
    }
    
    fo(i,k)
    {
        cin>>v[i];
        s.erase(v[i]);
        
    }
    fo(i,k)
    {
        cout<<v[i]<<" ";
        int t=n-1;
        while(t--){
            int val=*(s.begin());
            cout<<val<<" ";
            s.erase(val);
        }
        cout<<endl;
    }

    


    
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}