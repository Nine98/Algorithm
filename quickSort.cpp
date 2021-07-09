#include<stdio.h>
#include <stdlib.h>
#include<vector>
#include<string>
#include<stack>
#include<math.h>
#include<iostream>

using namespace std;

void quickSort(vector<int>& mt,int start,int end){
    if(start >end) return;//边界条件不能忘！！！！！！
    int left = start,right = end;
    int base_val = mt[start];
    while(left <right){
        //从右到左寻找比 base_val 小的数
        while(left < right && mt[right] >= base_val){
            right--;
        }
        //找到了比 base_val 小的值和位置
        if(left <right && mt[right] < base_val){
            mt[left] = mt[right];
        }
        //从左到右寻找比 base_val 大或等于的数
        while(left <right && mt[left] < base_val){
            left++;
        }
        //找到了比 base_val 大或等的数和位置
        if(left <right && mt[left] >= base_val){
            mt[right] = mt[left];
        }
    }
    if(left == right){
        mt[left] = base_val;
        // cout<<base_val<<endl;
    }
    quickSort(mt,start,left-1);
    quickSort(mt,left+1,end);

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
    quickSort(v,0,4);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 1;
}










