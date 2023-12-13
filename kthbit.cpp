#include<iostream>
using namespace std;

int kthbit(int n,int k){
 int mask=   1<<k;
    int ans=n|mask;
    cout<<ans;






int main(){
int n,k;
cin>>n>>k;
kthbit(n,k);
return 0;
}