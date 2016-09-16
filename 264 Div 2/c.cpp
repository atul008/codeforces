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

 int main(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll sum = 0;
    FOR(0,n-1,i){
         cin >> arr[i];
         sum += arr[i];
    }
    sort(all(arr));
    ll ans = 0,rs=0;
    ans = sum;
    FOR(0,n-2,i){
        ans += sum - rs;
        rs += arr[i];
    }
    cout << ans << endl;


 return 0;
 }
