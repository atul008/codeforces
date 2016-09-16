#include <bits/stdc++.h>
using namespace std;


int main(){
    string s;
    vector<int> ab,ba;
    cin >> s ;
    for(int i=0;i<s.size()-1;i++){
        if(s[i] == 'A' && s[i+1] == 'B'){
           ab.push_back(i);
        }else if((s[i] == 'B' && s[i+1] == 'A')){
            ba.push_back(i);
        }
    }

    for(int i=0;i< ab.size();i++){
        for(int j=0;j<ba.size();j++){
            if(ab[i]-ba[j] >= 2 || ab[i]-ba[j] <= -2){
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}
