#include<stdio.h>
// #include<iostream>

int n;
int p[10];
void DFS(int index){
    if(index == n+1){
        for(int i=1;i<n+1;i++){
            printf("%d",p[i]);
        }
        printf("\n");
        return;
    }
    for(int i=0;i<n+1;i++){
        p[index]=i;
        DFS(index+1);
    }
}
int main(){
    n=3;
    DFS(1);
    return 1;
}