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
     double n,k,d;
     cin >> n >> k >> d;
     if((d == 1 && n > k) || k == 1 || (pow(k,d) < n)) cout << "-1" << endl;
     else{
        FOR(0,d-1,i){
            FOR(0,n-1,j){
                cout << (rand()%k) + 1 << " ";
            }
            cout << endl;
        }
     }

 return 0;
 }
