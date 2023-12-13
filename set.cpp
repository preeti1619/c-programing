#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n!=0){
        n=(n&n-1);
       // cout<<"number of set bit is "<<count;
        count++;
        
    }
        cout<<"number of set bit is "<<count;
    
    return 0;
}