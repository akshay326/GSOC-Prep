// BS Binary Search
ll lo = 0, hi = n, mi;
while(lo < hi){
    mi = (lo+hi+1)/2;
    if (/* condition */)
        lo = mi;
    else
        hi = mi-1;
}











// Custom fraction class
class Fraction{
public:
  ll num, denum; 
    Fraction(){num = 0, denum = 1;}
    Fraction(ll n, ll d){
        num = n;
        if (d==0){
            cout << "ERROR: ATTEMPTING TO DIVIDE BY ZERO" << endl;
            exit(0); // will terminate the program if division by 0 is attempted
        }
        denum = d;
    }

    Fraction operator + (const Fraction& f){
      ll n = num*f.denum+f.num*denum;
        ll d = denum*f.denum;
        return Fraction(n/__gcd(n,d),d/__gcd(n,d));
    }

    Fraction operator - (const Fraction& f){
        ll n = num*f.denum-f.num*denum;
        ll d = denum*f.denum;
        return Fraction(n/__gcd(n,d),d/__gcd(n,d));
    }

    Fraction operator * (const Fraction& f){
        ll n = num*f.num;
        ll d = denum*f.denum;
        return Fraction(n/__gcd(n,d),d/__gcd(n,d));
    }
    
    Fraction operator / (const Fraction& f){
        ll n = num*f.denum;
        ll d = denum*f.num;
        return Fraction(n/__gcd(n,d),d/__gcd(n,d));
    }
    friend ostream & operator << (ostream &out, const Fraction &f);
};

ostream & operator << (ostream &out, const Fraction &f){ 
  out << f.num << "/" << f.denum; 
  return out; 
}






















// max power of prime p which divides n!
ll findPowerPrime(ll n, ll p) { 
    ll res = 0; 
    while(n > 0)         
        res += n/p, n /= p; 
    return res; 
} 


















bool isPrime(ll n){ // O(sqrt(n))
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    if (n%2 == 0 || n%3 == 0) return false;

    for (ll i=5; i*i<=n; i+=6)
        if (!(n%i) or !(n%(i+2)))
           return false;
    return true;
}
















// Prime factorization
// assumes vi Primes  is declared using sieve
vi getFactors(ll x) { 
    vi ret; 
    for(auto p: Primes)
        while (x != 1 and x%p==0)
            ret.pb(p), x/=p; 
    return ret; 
} 





























// sieve - sieve of eratothenes
// this is linear O(n). not O(nloglogn)
vi Primes;
void sieve(ll n) { 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime));

    for (ll p=2; p*p<=n; p++){
        if (prime[p])
            for (ll i=p*p; i<=n; i += p)
                prime[i] = false;
    }

    for (ll p=2; p<=n; p++)
       if (prime[p]) 
           Primes.pb(p);
}












// modular exponentiation - mod power
// Iterative Function to calculate (x^y)%p in O(log y)
ll power(ll x, ll y, ll p) { 
    ll res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0){ 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p;   
    } 
    return res; 
} 
















// topological sort
// A recursive function used by topologicalSort 
void Graph::topologicalSortUtil(ll v, bool visited[],  
                                stack<ll> &Stack) 
{ 
    // Mark the current node as visited. 
    visited[v] = true; 
  
    // Recur for all the vertices adjacent to this vertex 
    list<ll>::iterator i; 
    for (i = adj[v].begin(); i != adj[v].end(); ++i) 
        if (!visited[*i]) 
            topologicalSortUtil(*i, visited, Stack); 
  
    // Push current vertex to stack which stores result 
    Stack.push(v); 
} 
  
// The function to do Topological Sort. It uses recursive  
// topologicalSortUtil() 
void Graph::topologicalSort() 
{ 
    stack<ll> Stack; 
  
    // Mark all the vertices as not visited 
    bool *visited = new bool[V]; 
    for (ll i = 0; i < V; i++) 
        visited[i] = false; 
  
    // Call the recursive helper function to store Topological 
    // Sort starting from all vertices one by one 
    for (ll i = 0; i < V; i++) 
      if (visited[i] == false) 
        topologicalSortUtil(i, visited, Stack); 
  
    // Print contents of stack 
    while (Stack.empty() == false) 
    { 
        cout << Stack.top() << " "; 
        Stack.pop(); 
    } 
} 




















// ----- Sparse Table -----------
// Range min max query without changing array

// lookup[i][j] = index of min value in arr[i..j]. 
// make sure N >= nlogn
ll lookup[N][N]; 
  
// Fills lookup array lookup[][] in bottom up manner. 
void preprocess(vi arr){ 
  ll n = arr.sz;

    // Initialize M for the intervals with length 1 
  rep(i,0,n)
        lookup[i][0] = i; 
  
    // Compute values from smaller to bigger intervals 
    for (ll j=1; (1<<j)<=n; j++) 
        // Compute minimum value for all intervals with size 2^j 
        for (ll i=0; (i+(1<<j)-1) < n; i++) 
            // For arr[2][10], we compare arr[lookup[0][3]] and arr[lookup[3][3]] 
            if (arr[lookup[i][j-1]] < arr[lookup[i + (1<<(j-1))][j-1]]) 
                lookup[i][j] = lookup[i][j-1]; 
            else
                lookup[i][j] = lookup[i + (1 << (j-1))][j-1];       
} 
  
// Returns minimum of arr[L..R] 
// TODO: Make sure to **preprocess(arr);** b4 this
ll query(vi arr, ll L, ll R){ 
    // For [2,10], j = 3 
    ll j = (ll)log2(R-L+1); 
  
    // For [2,10], we compare arr[lookup[0][3]] and 
    // arr[lookup[3][3]],  
    if (arr[lookup[L][j]] <= arr[lookup[R - (1<<j) + 1][j]]) 
        return arr[lookup[L][j]]; 
    else
        return arr[lookup[R - (1<<j) + 1][j]]; 
}




















// Fenwick Tree BIT Indexed tree part 1
// range query sum 
// min max wont work
class BIT{
public:
    vi tree;

    // highest power of 2 that divides k
    ll p(int k){return k&-k;}

    // get sum from 0..k, inclusive
    ll sum(int k) {
        ll s = 0;
        while (k >= 0)
            s += tree[k], k -= p(k+1);
        return s;
    }

    // add value x to kth index in BIT
    void add(int k, ll x) {
        while (k < tree.size())
            tree[k] += x, k += p(k+1);
    }

    BIT(vi v){
        tree.insert(tree.begin(), all(v));
        tree.assign(v.size(),0);

        rep(i,0,v.size())
            add(i,v[i]);
    }

    ll query(int l, int r){
        if (l==0)
            return sum(r);
        else
            return sum(r)-sum(l-1);
    }
};

















// seg segment segmentation tree
class SegmentTree {         // the segment tree is stored like a heap array
private: vi st, A;            // recall that vi is: typedef vector<ll> vi;
  ll n;
  ll left (ll p) { return p << 1; }     // same as binary heap operations
  ll right(ll p) { return (p << 1) + 1; }

  void build(ll p, ll L, ll R) {                           // O(n log n)
    if (L == R)                            // as L == R, either one is fine
      st[p] = L;                                         // store the index
    else {                                // recursively compute the values
      build(left(p) , L              , (L + R) / 2);
      build(right(p), (L + R) / 2 + 1, R          );
      ll p1 = st[left(p)], p2 = st[right(p)];
      st[p] = (A[p1] <= A[p2]) ? p1 : p2;
  } }

  ll rmq(ll p, ll L, ll R, ll i, ll j) {                  // O(log n)
    if (i >  R || j <  L) return -1; // current segment outside query range
    if (L >= i && R <= j) return st[p];               // inside query range

     // compute the min position in the left and right part of the interval
    ll p1 = rmq(left(p) , L              , (L+R) / 2, i, j);
    ll p2 = rmq(right(p), (L+R) / 2 + 1, R          , i, j);

    if (p1 == -1) return p2;   // if we try to access segment outside query
    if (p2 == -1) return p1;                               // same as above
    return (A[p1] <= A[p2]) ? p1 : p2; }          // as as in build routine

  ll update_point(ll p, ll L, ll R, ll idx, ll new_value) {
    // this update code is still preliminary, i == j
    // must be able to update range in the future!
    ll i = idx, j = idx;

    // if the current interval does not intersect 
    // the update interval, return this st node value!
    if (i > R || j < L)
      return st[p];

    // if the current interval is included in the update range,
    // update that st[node]
    if (L == i && R == j) {
      A[i] = new_value; // update the underlying array
      return st[p] = L; // this index
    }

    // compute the minimum pition in the 
    // left and right part of the interval
    ll p1, p2;
    p1 = update_point(left(p) , L              , (L + R) / 2, idx, new_value);
    p2 = update_point(right(p), (L + R) / 2 + 1, R          , idx, new_value);

    // return the pition where the overall minimum is
    return st[p] = (A[p1] <= A[p2]) ? p1 : p2;
  }

public:
  SegmentTree(const vi &_A) {
    A = _A; n = (ll)A.size();              // copy content for local usage
    st.assign(4 * n, 0);            // create large enough vector of zeroes
    build(1, 0, n - 1);                                  // recursive build
  }

  ll rmq(ll i, ll j) { return rmq(1, 0, n - 1, i, j); }   // overloading

  ll update_point(ll idx, ll new_value) {
    return update_point(1, 0, n - 1, idx, new_value); }
};
  
int main() {
  ll arr[] = { 18, 17, 13, 19, 15, 11, 20 };         // the original array
  vi A(arr, arr + 7);                      // copy the contents to a vector
  SegmentTree st(A);

  printf("              idx    0, 1, 2, 3, 4,  5, 6\n");
  printf("              A is {18,17,13,19,15, 11,20}\n");
  printf("RMQ(1, 3) = %d\n", st.rmq(1, 3));             // answer = index 2
  printf("RMQ(4, 6) = %d\n", st.rmq(4, 6));             // answer = index 5
  printf("RMQ(3, 4) = %d\n", st.rmq(3, 4));             // answer = index 4
  printf("RMQ(0, 0) = %d\n", st.rmq(0, 0));             // answer = index 0
  printf("RMQ(0, 1) = %d\n", st.rmq(0, 1));             // answer = index 1
  printf("RMQ(0, 6) = %d\n", st.rmq(0, 6));             // answer = index 5

  printf("              idx    0, 1, 2, 3, 4,  5, 6\n");
  printf("Now, modify A into {18,17,13,19,15,100,20}\n");
  st.update_point(5, 100);                    // update A[5] from 11 to 100
  printf("These values do not change\n");
  printf("RMQ(1, 3) = %d\n", st.rmq(1, 3));                            // 2
  printf("RMQ(3, 4) = %d\n", st.rmq(3, 4));                            // 4
  printf("RMQ(0, 0) = %d\n", st.rmq(0, 0));                            // 0
  printf("RMQ(0, 1) = %d\n", st.rmq(0, 1));                            // 1
  printf("These values change\n");
  printf("RMQ(0, 6) = %d\n", st.rmq(0, 6));                         // 5->2
  printf("RMQ(4, 6) = %d\n", st.rmq(4, 6));                         // 5->4
  printf("RMQ(4, 5) = %d\n", st.rmq(4, 5));                         // 5->4

  return 0;
}


























// Kruskal Prim MST
class edge{
public: 
	ll x,y,w;
	edge(ll a, ll b, ll c){x=a, y=b, w=c;}

	bool operator<(const edge& a){
    	return w < a.w;
    }
};

/*  -------- sample usage --------
 	vector<edge> E;
 	E.pb({0,1,10});
 	E.pb({0,2,6});
 	E.pb({0,3,5});
 	E.pb({1,3,15});
 	E.pb({2,3,4});
 	KruskalMST(4,E);
*/

// find mst using adj list representation
void KruskalMST(ll n, vector<edge> E){
    ll e = 0, i = 0;

    // sort them
    sort(all(E));

    // init class distinction
    UnionFind uf(n);
  
    while (e < n-1){ 
        // pick min edge
        auto nxt = E[i++];
        if (!uf.isSameSet(nxt.x, nxt.y)){ 
        	++e;
        	// do something
        	cout<<nxt.x<<' '<<nxt.y<<'\n';
            uf.unionSet(nxt.x, nxt.y); 
        } 
    }
} 













// dfs
void dfs(ll i){
  vis[i]=1;

  for(auto x: adj[i])
    if (!vis[x])
      dfs(x);
}






















// union find disjoint sets
// Union-Find Disjoint Sets - uses both path compression and union by rank heuristics
class UnionFind {                                             
private:
  vi p, rank, setSize;                      
  ll numSets;
public:
  UnionFind(ll n) {
    setSize.assign(n, 1); numSets = n; rank.assign(n, 0);
    p.assign(n, 0); for (ll i = 0; i < n; i++) p[i] = i; }
  ll findSet(ll i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
  bool isSameSet(ll i, ll j) { return findSet(i) == findSet(j); }
  void unionSet(ll i, ll j) { 
    if (isSameSet(i, j))
        return; // discard union
        
    numSets--; 
    ll x = findSet(i), y = findSet(j);
    // rank is used to keep the tree short
    if (rank[x] > rank[y]){
      p[y] = x; setSize[x] += setSize[y];
    } else {
      p[x] = y; setSize[y] += setSize[x];
      if (rank[x] == rank[y])
        rank[y]++;
    } 
  }
  ll numDisjointSets() { return numSets; }
  ll sizeOfSet(ll i) { return setSize[findSet(i)]; }
};

int main() {
  printf("Assume that there are 5 disjoint sets initially\n");
  UnionFind UF(5); // create 5 disjoint sets
  printf("%d\n", UF.numDisjointSets()); // 5
  UF.unionSet(0, 1);
  printf("%d\n", UF.numDisjointSets()); // 4
  UF.unionSet(2, 3);
  printf("%d\n", UF.numDisjointSets()); // 3
  UF.unionSet(4, 3);
  printf("%d\n", UF.numDisjointSets()); // 2
  printf("isSameSet(0, 3) = %d\n", UF.isSameSet(0, 3)); // will return 0 (false)
  printf("isSameSet(4, 3) = %d\n", UF.isSameSet(4, 3)); // will return 1 (true)
  for (ll i = 0; i < 5; i++) // findSet will return 1 for {0, 1} and 3 for {2, 3, 4}
    printf("findSet(%d) = %d, sizeOfSet(%d) = %d\n", i, UF.findSet(i), i, UF.sizeOfSet(i));
  UF.unionSet(0, 3);
  printf("%d\n", UF.numDisjointSets()); // 1
  for (ll i = 0; i < 5; i++) // findSet will return 3 for {0, 1, 2, 3, 4}
    printf("findSet(%d) = %d, sizeOfSet(%d) = %d\n", i, UF.findSet(i), i, UF.sizeOfSet(i));
  return 0;
}













// FFT for convolution of 2 polynomials
typedef complex<double> cd;

// Recursive function of FFT
vector<cd> fft(const vector<cd>& a){
    int n = a.size();

    // if input contains just one element
    if (n == 1)
        return vector<cd>(1, a[0]);

    // For storing n complex nth roots of unity
    vector<cd> w(n);
    rep(i,0,n){
        double alpha = 2 * M_PI * i / n;
        w[i] = cd(cos(alpha), sin(alpha));
    }

    vector<cd> A0(n/2), A1(n/2);
    rep(i,0,n/2)
        // even and odd indexed coefficients
        A0[i] = a[i * 2], A1[i] = a[i * 2 + 1];

    // Recursive call for even and odd indexed coefficients
    vector<cd> y0 = fft(A0), y1 = fft(A1);

    // for storing values of y0, y1, y2, ..., yn-1.
    vector<cd> y(n);

    rep(k,0,n/2){
        y[k] = y0[k] + w[k] * y1[k];
    y[k+n/2] = y0[k] - w[k] * y1[k];
    }
    return y;
}

vector<cd> fft_rev(const vector<cd> &as){
    // inverse fft is fft -> divide by n -> flip segment 1..n-1 in 0..n-1
    vector<cd> res = fft(as);
    rep(i,0,res.size())
        res[i]/=res.size();
    reverse(res.begin()+1,res.end());
    return res;
}

	// -----    USAGE   -------
	// note this is 6x3 + 7x2 -10x + 9 
    // size of a and b must be made powers of 2
    // powers of x: 0  1  2 3 ...
    vector<cd> a = {9,-10,7,6};
    vector<cd> b = {-5,4,0,-2};

    // add extra n 0's - else u'll get only n terms in c
    a.insert(a.end(),a.size(),0);
    b.insert(b.end(),b.size(),0);

    vector<cd> as = fft(a), bs=fft(b);
    vector<cd> cs(as.size());

    rep(i,0,as.size())
        cs[i]=as[i]*bs[i];

    vector<cd> c = fft_rev(cs);
    whats(a,b,c);











#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/trie_policy.hpp>
#include <ext/pb_ds/tag_and_trait.hpp>

using namespace __gnu_pbds;

typedef null_type		mapped_type;
typedef trie_string_access_traits<> 	cmp_fn;
typedef pat_trie_tag 			tag_type;

typedef trie<string, mapped_type, cmp_fn, tag_type, 
	     trie_prefix_search_node_update> trie_type;

// The following helper function takes a trie object and r_key, a
// const reference to a string, and prints all entries whose key
// includes r_key as a prefix.
void print_prefix_match(const trie_type& t, const string& key){
  typedef trie_type::const_iterator 		const_iterator;
  typedef pair<const_iterator, const_iterator> 	pair_type;

  cout << "All keys whose prefix matches \"" << key << "\":" << endl;

  const pair_type match_range = t.prefix_range(key);
  for (const_iterator it = match_range.first; it != match_range.second; ++it)
    cout << *it << ' ';
  cout << endl;
}

int main(){
  trie_type t;

  // Insert some entries.
  assert(t.insert("I").second == true);
  assert(t.insert("wish").second == true);
  assert(t.insert("a").second == false);
  assert(t.insert("trie").second == true);

  // Now search for prefixes.
  print_prefix_match(t, "a");
  print_prefix_match(t, "as");
  print_prefix_match(t, "tr");
  print_prefix_match(t, "zzz");

  return 0;
}
