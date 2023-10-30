#include <bits/stdc++.h>
using namespace std;
#define loop int t;cin>>t;while(t--)
#define out(x) cout<<x<<"\n"
#define in(x) cin>>x
#define all(x) x.begin(),x.end()
#define sort(x) sort(all(x))
#define ulta(x) reverse(all(x))
#define getlines(x) getline(cin,x)
#define gcd __gcd
#define pb push_back
#define pop pop_back
typedef long long int ll;
typedef double dl;
typedef vector<int> vi;
typedef vector<string> vs;

void init_code(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

int main(){
    init_code();

    int n;
    cin>>n;

    ll fib[n+1];

    fib[0]=0;
    fib[1]=1;

    for(int i=2; i<n; i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    
    out(fib[n-1]);
    
    return 0;
}
    


