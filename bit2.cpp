#include<iostream>
using namespace std;
int getkb(int n,int n1){
    int count=0;
    while(n !=0 && n1 !=0){
        if(n&1|| n1 &1){
            count++;
        }
        n>>1;
        n1>>1;
    }
    
    return count;
}





int main(){
   int a, b;
   cin>>a>>b;
   getkb(a,b) ;
   return 0;
}