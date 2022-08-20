using namespace std;
#include <cstdlib>
#include <iostream>

int main(){

    freopen("speeding.in","r",stdin);
    freopen("speeding.out","w",stdout);

    int n,m,lv,sv,lloc,sloc,maxv;
    maxv=0;
    cin>>n>>m;
    int limit[n][2],speed[m][2];

    for(int i=0;i<n;i++){
        cin>>limit[i][0]>>limit[i][1];
    }

    for(int i=0;i<n;i++){
        cin>>speed[i][0]>>speed[i][1];
    }

    for(int i=1;i<n;i++){
        speed[i][0]+=speed[i-1][0];
        limit[i][0]+=limit[i-1][0];
    }
    
    //output testing
    /*
    for(int i=0;i<n;i++){
        cout<<limit[i][0]<<" "<<limit[i][1]<<endl;
    }

    for(int i=0;i<m;i++){
        cout<<speed[i][0]<<" "<<speed[i][1]<<endl;
    }
    */


    for(int i =0;i<100;i++){
        lv=limit[0][1];
        sv=speed[0][1];
        for(int j=0;j<n-1;j++){
            if(i>=limit[j][0]){
                lv=limit[j+1][1];
                //cout<<"lyes"<<endl;
            }else{
                break;
            }
        }
        //cout<<lv<<endl;
        for(int j=0;j<m-1;j++){
            if(i>=speed[j][0]){
                sv=speed[j+1][1];
                //cout<<"syes"<<endl;
            }else{
                break;
            }
        }
        //cout<<sv<<endl;
        //cout<<sv-lv<<endl;
        maxv=max(sv-lv,maxv);
        //cout<<maxv<<endl;
        //cout<<i<<endl;
    }
    cout<<maxv<<endl;
}