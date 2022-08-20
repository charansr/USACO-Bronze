using namespace std;
#include<iostream>
#include<algorithm>
#include<vector>


void solve(){
    int n,sum;
    sum = 0;
    cin>>n;
    vector<int> times(n);
    for(int i = 0;i<n;i++){
        cin>>times[i];            
        sum+=times[i];
    }
    for(int r = n;r>=1;r--){
        if(sum%r==0){
            int goal = sum/r;
            int cursum = 0;
            bool d = true;
            for(int i=0;i<n;i++){
                cursum+=times[i];
                if(cursum>goal){d = false;break;}
                if(cursum==goal){d=true;cursum=0;}
            }
            if(d){cout<<n-r<<endl;return;}
        }
    }

}


int main(){
    int t;
    cin>>t;
    for(int a = 0;a<t;a++){
        solve();
    }
}