#include<stdio.h>
#include <stdlib.h>
#include<vector>
#include<string>
#include<math.h>
#include<iostream>

using namespace std;

#define Mul(x,y) ++x*y ++
int getLongestPalindrome(string A, int n) {
    // write code here
    if(n==1) return 1;
    vector<int> dp(n,1);
    int res = 0;
    for(int i=1;i<n;i++){
        // if(i==1){
        //     dp[i] = (A[i]==A[i-1]?2:1);
        //     continue;
        // }
        if(i-dp[i-1]-1>=0){
            if(A[i]==A[i-dp[i-1]-1]) dp[i]=max(dp[i-1]+2,dp[i]);
        }
        if(i-dp[i-1]>=0){
            int left = i-dp[i-1],right = i;
            while(left<right){
                if(A[left]==A[right]){
                    left++;
                    right--;
                }else{
                    break;
                }
            }
            if(left >= right) dp[i]=max(dp[i-1]+1,dp[i]);
        }
        if(A[i]==A[i-1]) dp[i] = max(dp[i],2);
        if(i-2>=0 && A[i]==A[i-2]) dp[i] = max(dp[i],3);
        res = max(dp[i],res);
        cout<<"i= "<<i<<"  " <<dp[i]<<endl;
    }
    return res;
    
}

// int main(){
    
    // // string s="babcbcacababb";
    // // int len = 13;//3
    // // string s="dacbcbcabacaabcbcbdaaccacdddabdbcdcdbdabccbdababdaccbbbaccdaaacbbdcdadcacdbcbcacacaddbcbbcadccacdaabddacbcbbcdcadcbbcdddccdccdcbbbaabdadabdbbcbababacbbddbcdbdbbdabaaaaabacadbadbbadabccbbadbcdbcbaadbbddcacdbacadccbccdbacabacaacdbdcbcabbbccdadcbaccccccaaacbbbcbacdadaadcdbacaaadcbdccbcbcdacbababbc";
    // // int len = 295;//9
    // string s = "bdbccdcdbaccaabdbbbdadbcbabdadcdbacdbbdcccbdcddbbbadcbaaacaacacccbbdddbabccaddabdcabadaccaadbddcdaadbabcbdbccbadabbcacdddaddaabcbacaaabccdcacccdddabcdcaacaaccbbcabaababddccababcbcbcbaabdcdbbbdacdaadaddcaadcabcacbcbcababdbadabccacacdbdbbbcbdcbbddacbbbbdbbdaddbadbddaabdddaa";
    // int len = 272;//9
    // // string s="12333321";
    // // int len = 8;//8
    // // string s="abaaaaaba";
    // // int len = 9;//9
    // int res = getLongestPalindrome(s,len);
    // cout<<"res: "<<res<<endl;
    // return 1;
// }

int main(){
    int a=1;
    int b=3;
    int c=4;
    printf("%d",Mul(a+b,b+c));
}

