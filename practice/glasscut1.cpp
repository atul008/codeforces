#include <bits/stdc++.h>
using namespace std;

#define tr(a,it) for(typeof(a.begin()) it = (a).begin();it != (a).end();it++)
typedef long long ll;

int main(){
    int w,h,n;
    set<int> H,V;
    multiset<int,greater<int> > lH,lV;
    cin >> w >> h >> n;
    H.insert(0);
    H.insert(w);
    V.insert(0);
    V.insert(h);
    lH.insert(w),lV.insert(h);

    char c;
    int val;
    set<int>::iterator i,l,r;
    while(n--){
        cin >> c >> val;
        if(c == 'V'){
          H.insert(val);
          l=r=i= H.find(val);
          l--;
          r++;

          lH.erase(lH.find(*r-*l));
          lH.insert(*r-*i);
          lH.insert(*i-*l);
          //cout << (*lH.begin()) * (*lV.begin()) << endl;

        }else{
          V.insert(val);
          l=r=i=V.find(val);
          l--;
          r++;
          lV.erase(lV.find(*r-*l));
          lV.insert(*r-*i);
          lV.insert(*i-*l);
        //  cout << (*lH.begin()) * (*lV.begin()) << endl;
        }
        ll ans = static_cast<ll>(*lH.begin());
        ans *= (*lV.begin());
        cout << ans << endl;
    }

return 0;
}



