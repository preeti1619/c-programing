#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int c=1;
        for(int j=0;j<i+1;j++){
cout<<c;
c++;
if(i>j){
    cout<<"*";
}
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        int p=n+i;
        for(int j=0;j<n-1-i;j++){
            cout<<p;
            p--;
            if(i<=n-1-i||j==0||j==1){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}