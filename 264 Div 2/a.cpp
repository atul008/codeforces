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
    int n;
    cin >> n;
    vector<string> arr(n);
    FOR(0,n-1,i) cin >>arr[i];
    int c = 0;
    FOR(0,n-1,i) FOR(0,n-1,j){
            if(i-1 >=0 && arr[i-1][j] =='o' ) c++;
            if(i+1 <=n-1 && arr[i+1][j] == 'o') c++;
            if(j-1 >=0 && arr[i][j-1] == 'o') c++;
            if(j+1 <= n-1 && arr[i][j+1] =='o') c++;
            if(c%2 !=0){
                cout << "NO\n";
                return 0;
            }
    }
    cout << "YES\n";
 return 0;
 }
