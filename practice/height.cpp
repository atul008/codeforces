#include <bits/stdc++.h>
using namespace std;

int main(){
   // freopen("input.txt","r",stdin);
    int n,x,mx=2000;

    cin >> n >> x;
    vector< vector<int> > mass(mx),type(mx),eaten(mx);


    for(int i=0;i<n;i++){
        int h,t,m;
        cin >> t >> h >> m;
        mass[h].push_back(m);
        type[h].push_back(t);
        eaten[h].push_back(0);
    }

    int count =0;
    int pType = -1;
    while(1){
        int maxMass = -1,h;
        for(int height = 1;height <= x;height++){
            for(int i = 0;i< size(mass[height])& eaten[height] == 0 && type[height] != pType){
                if( maxMass < mass[height]){
                    maxMass = mass[height];
                    h = height;
                }
            }
            //cout << height << endl;
        }

        if( maxMass != -1){
            count++;
            eaten[h] = 1;
            x += mass[h];
            pType = type[h];
        }else{
            break;
        }

    }
    cout << count << endl;
return 0;

}
