 #include <map>
 #include <set>
 #include <vector>
 #include <list>
 #include <deque>
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
 #define INF 99999999
 using namespace std;
 typedef vector<int> vi;
 typedef vector<vi> vvi;
 typedef pair<int,int> ii;
 typedef long long ll;


 int main(){
    int n;
    cin >> n;
    string s(n,'D');
    FOR(0,n-1,i) s[i] ='D';
    deque<string> dia;
    dia.pb(s);
    int count = 0;
    FOR(1,n/2,i){
        FOR(0,count,j){
            s[j] = '*';
            s[n-1-j] = '*';
        }
        count++;
        dia.pb(s);
        dia.push_front(s);
    }

    tr(dia,it) cout << *it << endl;


 return 0;
 }
