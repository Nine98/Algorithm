#include<stdio.h>
#include <stdlib.h>
#include<vector>
#include<string>
#include<math.h>
#include<iostream>

using namespace std;

int main(){
    int len;
    cin>>len; 
    // cout<<len<<endl;
    vector<int> v(len,0);
    for(int i=0;i<len;i++){
        cin>>v[i];
    }
    for(int i=0;i<len;i++){
        cout<<v[i]<<" ";
    }
    for(int j=0;j<100;j++){
        cout<<j<<endl;
    }


    return 1;
}

