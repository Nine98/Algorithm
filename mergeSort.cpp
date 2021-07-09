#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
using namespace std;

vector<int> temp;

void mergeSort(vector<int>& nums, int start, int end){
    if(start>=end) return;
    int mid = (start+end)/2;
    mergeSort(nums,start,mid);
    mergeSort(nums,mid+1,end);
    //合并两个有序序列
    int length = 0;//表示辅助空间有多少个元素
    int i_start = start;
    int i_end = mid;
    int j_start = mid+1;
    int j_end = end;
    while(i_start<=i_end && j_start<=j_end){
        if(nums[i_start]<nums[j_start]){
            temp[length] = nums[i_start];
            length++;
            i_start++;
        }else{
            temp[length] = nums[j_start];
            length++;
            j_start++;
        }
    }
    while(i_start<=i_end){
        temp[length] = nums[i_start];
        i_start++;
        length++;
    }
    while(j_start<=j_end){
        temp[length] = nums[j_start];
        length++;
        j_start++;
    }
    //把辅助空间的数据放到原空间
    for(int i=0;i<length;i++){
        nums[start+i]=temp[i];
    }
}


int main(){
    vector<int> nums;
    for(int i=10;i>0;i--){
        nums.push_back(i);
        temp.push_back(0);
    }
    mergeSort(nums,0,nums.size()-1);
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}