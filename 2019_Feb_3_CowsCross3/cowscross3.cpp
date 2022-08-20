using namespace std;
#include <iostream>
#include <cstdlib>


int main(){

    freopen("cowqueue.in","r",stdin);
    freopen("cowqueue.out","w",stdout);

    int n,time;
    cin>>n;
    int info[n][2];
    for(int i = 0;i<n;i++){
        cin>>info[i][0]>>info[i][1];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if (info[j][0] > info[j+1][0]) {
                int a = info[j][0];
                int b = info[j][1];
                info[j][0] = info[j+1][0];
                info[j][1] = info[j+1][1];
                info[j+1][0] = a;
                info[j+1][1] = b;
            }
        }
    }
    time = info[0][0];
    for(int i = 0;i<n-1;i++){
        int hold = info[i][1]+time;
        if(hold>info[i+1][0]){time = hold;}
        else{time = info[i+1][0];}
        //cout<<time<<endl;
    }
    time+=info[n-1][1];
    cout<<time<<endl;
    /*
    for(int i = 0;i<n;i++){
        cout<<info[i][0]<<" "<<info[i][1]<<endl;
    }
    */

}