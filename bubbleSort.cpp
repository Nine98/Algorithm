#include<stdio.h>
#include <stdlib.h>
#include<vector>
#include<string>
#include<stack>
#include<math.h>
#include<iostream>

using namespace std;

void bubbleSort(vector<int>& mt){
    int temp = 0;
    for(int i=0;i<mt.size();i++){
        for(int j=0;j<mt.size()-1-i;j++){
            if(mt[j]>mt[j+1]){
                temp = mt[j];
                mt[j] = mt[j+1];
                mt[j+1] = temp;
            }
        }
    }

}

int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(7);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    bubbleSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }
    return 1;
}










