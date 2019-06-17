#include <bits/stdc++.h>
using namespace std;

#define iosx ios_base::sync_with_stdio(false);cin.tie(0);cout.precision(20)
#define hell 1000000007LL
#define INF 100000000000000000LL
#define hmap unordered_map
#define hset unordered_set
#define PQ priority_queue
#define F first
#define S second
#define LB lower_bound
#define UB upper_bound
#define lld long double
#define ll long long
#define all(C) begin(C),end(C)
#define rep(i,a,b) for(ll i = (a); i < (b); ++(i))
#define pb push_back
#define vi vector<ll>
#define vs vector<string>
#define pii pair<ll,ll>
#define len(C) (ll)(C).size()
#define lexcmp lexicographical_compare
#define whats(C,n) 	rep(i,0,n) cout<<(C)[i]<<" \n"[i+1==n]
#define N 200005

ll n,q;
ll a[35], Q[N];

void input(int tm){
    cin>>n>>q;
    ll tmp;
    rep(i,0,35)
    	a[i]=0;
    rep(i,0,n)
    	cin>>tmp, ++a[(ll) log2(tmp)];
    rep(i,0,q)
    	cin>>Q[i];
}

void solve(int tm){
	ll b[35];
	rep(i,0,q){
		ll x = Q[i];

		// copy
		rep(j,0,35)
			b[i]=a[i];

		ll res=0,j=0;
		PQ<pii > v;
		while(x>0){
			if (b[i]>0)
				v.pb({1,b[i]});
			
			if (x&1){
				if (v.empty()){
					res=-1;
					x=0;
				}else // check ek to hona chahiye
					++res;
			}

			// carry proceeds
			b[j+1] += b[j]/2;
			++j;
			x/=2;
		}
		cout<<res<<'\n';
	}
}
// g++.exe -static -DONLINE_JUDGE -lm -s -x c++ -Wl,--stack=268435456 -O2 -std=c++14 sol.cpp & a.exe & del a.exe
// vim cli: !g++ -static -lm -s -x c++ -O2 -std=c++14 sol.cpp -o out; ./out; rm out;
int main(){ 
	iosx; 
	int t=1;
    // cin >> t;

	for(int i=1; i<=t; ++i){
		input(i);
        solve(i);
	}

	return 0;
}
