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
    int  n,m,w;
    cin >> n >> m >> w;
    vi arr(n);
    FOR(0,n-1,i) cin >> arr[i];
    int h,in;
    vi::iterator p;
    FOR(1,m,i){
       p = min_element(all(arr));
        in  = p-arr.begin();
        if( in + w < n){
            FOR(in,in+w-1,j) arr[j]++;
        }else{
             in = in - (in + w - n);
            FOR(in,in+w-1,j) arr[j]++;
        }
    //    tr(arr,it) cout << *it << " ";
     //   cout << endl;
    }
    p = min_element(all(arr));
    cout << *p << endl;

 return 0;
 }
