#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    int k;
    cin>>str;
    cin>>k;

    int n = str.length();
    string temp="";
    for(int i=0; i<n; i++){
        int j = (i+k)%n;
        temp += str[j];
    }
    str = temp;
    cout<<str<<endl;
    return 0;
}