 #include <map>
 #include <set>
 #include <vector>
 #include <list>
 #include <cmath>
 #include <cstring>
 #include <string>
 #include <sstream>
 #include <iostream>
 #include <algorithm>
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
     int n,a,b;
     cin >> n;
     vector< ii > pq;
     FOR(0,n-1,i){
          cin >> a >> b;
          pq.pb(mp(a,b));
     }
     sort(all(pq));
    // FOR(0,n-2,i)
     FOR(1,n-1,i){
        if(pq[i].x > pq[i-1].x && pq[i].y < pq[i-1].y ){
            cout << "Happy Alex\n";
            return 0;
        }
     }
     cout << "Poor Alex" << endl;
 return 0;
 }
