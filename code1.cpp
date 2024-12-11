#include<bits/stdc++.h>
using namespace std;


int main(){
    int arraysize;
    cin>>arraysize;
    int temp[arraysize];
    for(int i=0; i<arraysize; i++){
        cin>>temp[i];
    }
    bool var = false;
    for(int i=1; i<arraysize-1; i++){
        if(temp[i-1] < temp[i] && temp[i] > temp[i+1]){
            cout<<"index"<<" "<<i;
            var = true;
            break;
        }
    }
    if(!var){
        cout<<"index is not available"<<" "<<0;
    }
    return 0;
}