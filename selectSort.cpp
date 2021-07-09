#include<stdio.h>
#include <stdlib.h>
#include<vector>
#include<string>
#include<stack>
#include<math.h>
#include<iostream>

using namespace std;

// void selectSort(vector<int>& nums){//升序
// 	for(int i=0;i<nums.size()-1;i++){
//         //int minValue = nums[i];
//         int index = i;
// 		for(int j=i+1;j<nums.size();j++){//注意
// 			if(nums[index]>nums[j]){
// 				//minValue = nums[j];
//                 index = j;
// 			}
// 		}
//         swap(nums[i],nums[index]);
// 	}
// }

// void selectSort(vector<int>& mt){//降序
//     int i=0,j=0;
//     int max_index = 0;
//     int max_val = 0;
//     int k=mt.size()-1;
//     for(i=0;i<mt.size();i++){
//         max_val = mt[0];//0--升序，i--降序
//         max_index = 0;
//         for(j=0;j<mt.size()-i;j++){
//             if(max_val < mt[j]){
//                 max_val = mt[j];
//                 max_index = j;
//             }
//         }
//         k=j-1;
//         int temp = mt[k];
//         mt[k] = max_val;
//         mt[max_index] = temp;
//         k--;
//     }
// }


void selectSort(vector<int>& mt){//降序
    int i=0,j=0;
    int max_index = 0;
    int max_val = 0;
    for(i=mt.size()-1;i>=0;i--){
        max_index = i;
        for(j=i-1;j>=0;j--){
            if(mt[j]>mt[max_index]){
                max_index = j;
            }
        }
        int temp = mt[max_index];
        mt[max_index] = mt[i];
        mt[i] = temp;
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
    selectSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 1;
}










