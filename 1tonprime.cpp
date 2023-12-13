#include<iostream>
using namespace std;

bool checkprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
        else{
            return true;
        }
    }
}

int main(){
   int n;
   cin>>n;
   for(int i=2;i<n;i++){
    int ans=checkprime(i);
    if(ans){
        cout<<i;
    }
    

   } 
   return 0;
}