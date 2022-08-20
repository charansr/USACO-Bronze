using namespace std;
#include <iostream>
#include <cstdio>

int cap[3], milk[3];

void pour(int from, int to){
    int hmuch = min(milk[from],cap[to]-milk[to]);
    milk[from]-=hmuch;
    milk[to]+=hmuch;
}

int main(){

    freopen("mixmilk.in","r",stdin);
    freopen("mixmilk.out","w",stdout);

    for(int i =0;i<3;i++){
        cin>>cap[i]>>milk[i];
    }

    for(int i = 0;i<100;i++){
        pour(i%3,(i+1)%3);
    }

    for(int i = 0;i<3;i++){
        cout<<milk[i]<<endl;
    }

}