#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int n;
    int ans=0;
    cin>>n;
    int heights[n];
    int besloc;
    for(int i=0;i<n;i++){cin>>heights[i];}
    for(int i=0;i<n;i++){
        if(i==0){if(heights[i]>heights[i+1]){besloc=i;break;}}
        if(i==n-1){if(heights[i]<heights[i-1]){besloc=i;break;}}
        if((heights[i]>heights[i+1]||heights[i]<heights[i-1])&&(heights[i]!=heights[i-1]&&heights[i]!=heights[i+1])){
            besloc=i;break;
        }
    }
    while(true){
        if(heights[besloc]<heights[besloc-1]){
            for(int i=besloc-2;i>0;i--){
                if(heights[i]>=heights[besloc-1]&&(heights[i-1]<heights[besloc-1]||i==0)){
                    int hold = heights[besloc];
                    heights[besloc]=heights[i];
                    heights[i]=hold;
                    besloc=i;
                    ans++;
                }
            }
        }
    }
}