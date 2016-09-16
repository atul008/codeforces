 #include <bits/stdc++.h>
 #define  x first
 #define  y second

 #define sz(a) int((a).size())
 #define all(c) (c).begin(),(c).end()
 #define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
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
 FOR(0,n-1,i) cin >> arr[i];
 sort(all(arr));
 ll n1=1,n2=1;
 FOR(0,n-2,i){
    if(arr[i] == arr[i+1])
        n1++;
    else
        break;
 }
 for(int j = n-1;j>=1;j--){
    if(arr[j] == arr[j-1])
        n2++;
    else
        break;
 }
 ll w;
 if(n1 == n || n2 == n){
     w = n*(n-1)/2;
 } else {
    w = n1*n2;
 }
 ll d = abs(arr[n-1]-arr[0]);
cout << d << " " << w << endl;

 return 0;
 }
