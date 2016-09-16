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


 int main(){
    int n;
    cin >> n;
    int arr[n];
    FOR(0,n-1,i){
        cin >> arr[i];
    }
    int flag = 0,index = 0,min;
    min = arr[0];
    FOR(1,n-1,i){
        if(min >= arr[i]){
            min = arr[i];
            if(arr[i] != arr[i-1])
                index = i;
        }
    }
    int k = index,count = 0;
    if(arr[0] == min ) count++;
    FOR(1,n-1,i){
        if(arr[i] == min) count++;
        if(arr[index] > arr[(index+1)%n]){
            cout << "-1" << endl;
            return 0;
        }
        index = (index+1)%n;
    }

    if(count == n)
        cout << "0" << endl;
    else
        cout << (n-k)%n << endl;

 return 0;
 }
