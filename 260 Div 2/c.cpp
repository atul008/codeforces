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
     int n;
     cin >> n;
     vector<int64_t> freq(100003,0);
     vi arr(n+1);
     FOR(1,n,i) {
         cin >> arr[i];
         freq[arr[i]]++;
     }
     vector<int64_t> sum(1000005,0);
     sum[1] = freq[1];
     for(int i = 2;i<=100000;i++){
            sum[i] = max(sum[i-2] + freq[i]*i,sum[i-1] );
         }

    cout << sum[100000] << endl;

 return 0;
 }
