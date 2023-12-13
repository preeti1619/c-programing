#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num=8-i;
        int count=i+1;
        for(int j=0;j<17;j++){
            //int count=i+1;

       // num=num-2;
        if(j==num&&count>0){
            cout<<i+1;
            num=num+2;
            count--;
        }
        else{
            cout<<"*";
        }
        }
        cout<<endl;

    }
    return 0;
}