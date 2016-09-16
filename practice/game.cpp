#include <iostream>
using namespace std;

typedef long long ll;

inline void solve(ll a,ll b,ll& count){
    if(a%b == 0){
        count += a/b;
        return;
    }
    count += a/b;
    solve(b,a%b,count);
}

int main(){
    ll a,b;
    cin >> a >> b;
    ll count = 0;
    //cout << "hi" << endl;
    solve(a,b,count);
    cout << count << endl;
return 0;
}
