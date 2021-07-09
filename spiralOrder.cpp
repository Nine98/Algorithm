#include<stdio.h>
#include <stdlib.h>
#include<vector>
#include<string>
#include<stack>
#include<math.h>
#include<iostream>

using namespace std;

vector<int> spiralOrder(vector<vector<int> > &matrix) {
    vector<int> res;
    int m = matrix.size();//行
    if(m<=1) return res;
    int n = matrix[0].size();//列数
    if(n==0) return matrix[0];
    int col1 = 0,col2 = n-1;
    int row1 = 0,row2 = m-1;
    while(col1<col2 && row1<row2){
        //每次循环打印一个圈，上、右、下、左
        for(int i=col1;i<=col2;i++){
            res.push_back(matrix[row1][i]);
        }
        for(int i=row1+1;i<row2;i++){
            res.push_back(matrix[i][col2]);
        }
        for(int i=col2;i>=col1;i--){
            res.push_back(matrix[row2][i]);
        }
        for(int i=row2-1;i>row1;i--){
            res.push_back(matrix[i][col1]);
        }
        
        col1++,col2--;
        row1++,row2--;
    }
    cout<<col1<<"  "<<col2<<"  "<<row1<<"  "<<row2<<endl;
    if(col1 != col2 && row1==row2){//奇数行，偶数列，中间那行单独排
        for(int i=col1;i<=col2;i++){
            res.push_back(matrix[row1][i]);
        }
    }
    else if(row1 != row2 && col1==col2){//偶数行，奇数列，中间那列单独排
        for(int i=row1;i<=row2;i++){
            res.push_back(matrix[i][col1]);
            // cout<<matrix[i][col1]<<endl;
        }
    }else if(col1==col2 && row1==row2){//奇数行，奇数列
        res.push_back(matrix[row1][col1]);
    }
    
    return res;
}

int main(){
    vector<int> res;
    vector<vector<int>> mt;
    int m=4,n=1;
    int k=1;
    for(int i=0;i<m;i++){
        vector<int> v;
        for(int j=0;j<n;j++){
            v.push_back(k);
            cout<<k<<endl;
            k++;
        }
        mt.push_back(v);
    }
    cout<<"***"<<endl;
    res = spiralOrder(mt);
    for(int i=0;i<m*n;i++){
        cout<<res[i]<<endl;
    }
    
    return 1;
}