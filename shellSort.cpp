#include<stdio.h>
#include <stdlib.h>
#include<vector>
#include<string>
#include<stack>
#include<math.h>
#include<iostream>

using namespace std;

void shellSort(vector<int>& mt){
    int len = mt.size();
    int in = len;//增量，分组数
    do{
        //一共 in 组
        // in = in/3+1;//+1是为了至少运行一次，如in=2的时候，即增量为1的时候整体排序一次
        in = 1;
        for(int k=0;k<in;k++){
            //每组进行插入排序
            for(int i=k+in;i<len;i+=in){
                if(mt[i] < mt[i-in]){
                    //后挪
                    int temp = mt[i];
                    int j;
                    for(j=i-in;j>=0 && temp<mt[j];j-=in){
                        mt[j+in] = mt[j];
                    }
                    mt[j+in] = temp;
                }
            }
        }

    }while(in>1);    

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
    shellSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 1;
}










