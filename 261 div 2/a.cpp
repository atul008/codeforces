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
 int x1,x2,x3,x4,y1,y2,y3,y4,d;
    cin >> x1 >> y1 >> x2 >>y2;
    if(x1 == x2){
        d = abs(y1 - y2);
        x3 = x1 + d;
        y3 = y1;
        x4 = x2 + d;
        y4 = y2;
        cout << x3 <<" " << y3 << " " << x4 << " " << y4 << endl;
        return 0;
    }else if(y1 == y2){
        d = abs(x1-x2);
        x3 =  x1;
        x4 =  x2;
        y3 = y1 + d;
        y4 = y2 + d;
        cout << x3 <<" " << y3 << " " << x4 << " " << y4 << endl;
        return 0;
    }else{
        x3 = x2;
        x4 = x1;
        y3 = y1;
        y4 = y2;

        if(abs(x3-x1) == abs(y3-y2) ){
            cout << x3 <<" " << y3 << " " << x4 << " " << y4 << endl;
            return 0;
        }else{
            cout << "-1" << endl;
            return 0;
        }
    }
 return 0;
 }
