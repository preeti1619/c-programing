#include<iostream>
using namespace std;
bool prime(int n){
    for(int i=2;i<n;i++){
if(n%i==0){
    return false;
}
else{
   return  true;
}
    }
}


int main(){

    int n;
    cin>>n;
    int ans=prime(n);
        if(ans){
            cout<<n <<"is prime";
        }
        else{
            cout<<n<<"isnot prime";
        }
    
    return 0;
}