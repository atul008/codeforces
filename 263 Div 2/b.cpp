 #include <bits/stdc++.h>
 #define  x first
 #define  y second

 #define sz(a) int((a).size())
 #define all(c) (c).begin(),(c).end()
 #define tr(c,i) for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
 #define present(c,x) ((c).find(x) != (c).end())
 #define cpresent(c,x) (find(all(c),x) != (c).end())
 #define FOR(a,b,i) for(int i=a; i<=b; i++)
 #define RFOR(a,b,i) for(int i=b; i>=a; i--)
 #define SET(c,x) memset(c,x,sizeof(c))
 #define pb push_back
 #define mp make_pair

 using namespace std;
 typedef vector<int> vi;
 typedef vector<vi> vvi;
 typedef pair<int,int> ii;
 typedef long long ll;
 ll s(ll x){
    int res =0 ;
    while(x > 0){
        res += x%10;
        x = x/10;
    }
    return res;
 }

 int main(){
    ll a,b,c,k=1;
    cin >> a >> b >> c;
    vector<ll> v;
    for(ll x = 1;x < 1000000000 ;x =x + k ){
        //if(x <= 0) continue;
        ll r = b*(pow(s(x),a)) + c;
        if(x == r){
            v.pb(x);
            k = x;
        }
    //    cout << x << endl;
    }
    cout << sz(v) << endl;
    tr(v,it) cout << *it << " ";
    cout << endl;

 return 0;
 }
