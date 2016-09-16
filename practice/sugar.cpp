 #include <bits/stdc++.h>
 #define  F first
 #define  S second

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
	 int n ,s,a,b;
	 cin >> n >> s;
	 vector <ii> v;
	 FOR(0,n-1,i){
		 cin >> a >> b;
		 v.pb(mp(a,b));
	 }
	 int res = 0,f = 0;
	 FOR(0,n-1,i){
		 if(s*100 >= v[i].F*100 + v[i].S){
			 int x = (100-v[i].S) % 100;
			 res = max(res,x);
			 f = 1;
		 }
	 }
	 if(f == 1)
        cout << res << endl;
    else
        cout << "-1" << endl;
 return 0;
 }
