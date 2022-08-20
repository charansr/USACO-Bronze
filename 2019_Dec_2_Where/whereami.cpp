using namespace std;
#include <iostream>
#include <cstdlib>
#include <string.h>


int main(){
    freopen("whereami.in","r",stdin);
    freopen("whereami.out","w",stdout);
    int n;
    cin>>n;
    string info;
    cin>>info;

    //cout<<info.substr(0,2)<<endl;

    for(int guess = 1;guess<=n;guess++){
        bool good = true;;
        for(int i = 0;i+guess<=n;i++){
            for(int j = 0;j<i;j++){
                //cout<<i<<" "<<j<<' '<<guess<<' '<<endl;
                string test1 = info.substr(i,guess);
                string test2 = info.substr(j,guess);
                //cout<<test1<<' '<<test2<<endl;
                if(test1==test2){good = false;}
            }
        }
        if(good){cout<<guess<<endl;break;}
    }

}