#include<stdio.h>
#include <stdlib.h>
#include<vector>
#include<string>
#include<stack>
#include<math.h>
#include<iostream>

using namespace std;

void insertSort(vector<int>& mt){
    int i=0,j=0;
    for(i=1;i<mt.size();i++){
        int temp = mt[i];
        //先判断，看看需不需要挪，可减少复杂度
        if(mt[i-1] > mt[i]){
            for(j=i-1;j>=0;j--){
                if(temp < mt[j]){
                    mt[j+1] = mt[j];
                }else{
                    break;
                }
            //    mt[j+1] = mt[j];
            }
            mt[j+1] = temp;//注意：必须是j+1,因为 mt[j]<=temp 了或者j<0了，不用用j了，不然会少个数
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
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }
    insertSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 1;
}










