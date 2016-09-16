#include <bits/stdc++.h>
using namespace std;

#define tr(a,it) for(typeof(a.begin()) it = (a).begin();it != (a).end();it++)

int main(){
    int w,h,n;
    set<pair<int, pair<int,int> >,greater<pair<int,pair<int,int> > > > H,V;
    cin >> w >> h >> n;
    H.insert(make_pair(w,make_pair(0,w)));
    V.insert(make_pair(h,make_pair(0,h)));

    char c;
    int val;
    while(n--){
        cin >> c >> val;
        if(c == 'V'){
          tr(H,it){
                if(val >= (*it).second.first && val <= (*it).second.second ){
                    H.insert(make_pair(val-(*it).second.first,make_pair((*it).second.first,val)));
                    H.insert(make_pair((*it).second.second-val,make_pair(val,(*it).second.second)));
                    H.erase(it);
                    break;
                }
            }
            cout << (*H.begin()).first * (*V.begin()).first << endl;

        }else{
            tr(V,it){
                if(val >= (*it).second.first && val <= (*it).second.second ){
                    V.insert(make_pair(val-(*it).second.first,make_pair((*it).second.first,val)));
                    V.insert(make_pair((*it).second.second-val,make_pair(val,(*it).second.second)));
                    V.erase(it);
                    break;
                }
            }
            cout << (*H.begin()).first * (*V.begin()).first << endl;

        }

    }

return 0;
}


