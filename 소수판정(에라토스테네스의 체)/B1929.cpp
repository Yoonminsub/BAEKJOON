/*
*Author : minsub Yoon
*Date : 2022.1.19
*https://www.acmicpc.net/problem/1929
*/

#include <iostream>
#include <algorithm>
using namespace std;
vector<pair<int,int>> A;
int m,n;
int main(){
    scanf("%d %d",&m,&n);
    int i;
    for(i=0;i<=n;i++){
        A.push_back({i,1});
    }
    A[0].second=0;
    A[1].second=0;
    for(i=0;i<=n;i++){
        if(A[i].second==1){
            int a;
            int b=n/i;
            for(a=1;a<=b;a++){
                A[a*i].second=0;
            }
            if(m<=i){
                printf("%d\n",i);
            }
        }
    }
    return 0;
}
