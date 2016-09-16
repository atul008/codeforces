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
 #define INF 99999999
 using namespace std;
 typedef vector<int> vi;
 typedef vector<vi> vvi;
 typedef pair<int,int> ii;
 typedef long long ll;
 #define MAX 1000000000
 void calPath(map< int64_t,pair<int64_t,int64_t> >& path1,map< int64_t,pair<int64_t,int64_t> >& path2){
    int64_t x=0,y=0,x2=0,y2=0,count = 0 ;
    path1.insert(mp(0,mp(0,0)));
    while( x < MAX && y < MAX){
        switch(count%4){
            case 0:{
                y -= count;
                break;
            }
            case 1:{
                x += count;
                break;
            }
            case 2:{
                y += count;
                break;
            }
            case 3:{
                x -= count;
                break;
            }
        }
        if(count%2 == 0){
           path1.insert(mp(x,mp(y2,y)));
        } else{
               path2.insert(mp(y,mp(x2,x)));
        }
        y2 = y;
        x2 = x;
        count++;
     }
 }

 int main(){
    int t;
    cin >> t;
    map<int64_t, pair<int64_t,int64_t> > path1,path2;
    map<int64_t, pair<int64_t,int64_t> >::iterator it1,it2;
    calPath(path1,path2);

    while(t--){
        int64_t a,b;
        cin >> a >> b;
        it1 = path1.find(a);
        if(it1 != path1.end()){
            pair<int64_t,int64_t> p;
            p.x = (it1->y.x);
            p.y = (it1->y.y);
            if((b <= p.x && b >= p.y) || (b <= p.y && b >= p.x) ){
                cout << "YES" << endl;
                continue;
            }
        }
        it2 = path2.find(b);
        if(it2 != path2.end()){
            pair<int64_t,int64_t> p;
            p.x = (it2->y.x);
            p.y = (it2->y.y);
            if((a <= p.x && a >= p.y) || (a <= p.y && a >= p.x) ){
                    cout << "YES" << endl;
                    continue;
                }
        }
        cout << "NO" << endl;
    }
 return 0;
 }
