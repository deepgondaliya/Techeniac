#include<bits/stdc++.h>
using namespace std;

int main(){
    int arraysize;
    cin>>arraysize;
    int temp[arraysize];
    for(int i=0; i<arraysize; i++){
        cin>>temp[i];
    }

    int cnt0 =0, cnt1 =0, cnt2=0;
    for(int i=0; i<arraysize; i++){
        if(temp[i]==0) cnt0++;
        if(temp[i]==1) cnt1++;
        if(temp[i]==2) cnt2++;
    }
    int j=0;
    while(cnt0){
        temp[j] = 0;
        j++;
        cnt0--;
    }
    while(cnt1){
        temp[j] = 1;
        j++;
        cnt1--;
    }
    while(cnt2){
        temp[j] = 2;
        j++;
        cnt2--;
    }

    for(int i=0;i<arraysize; i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}