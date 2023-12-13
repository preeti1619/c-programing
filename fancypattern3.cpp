#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int condt=i<=n/2?2*i:0;
        for(int j=0;j<=condt;j++){
            if(j<condt/2){
                cout<<j+1;
            }
            else{
                cout<<condt-j+1;
            }
            
        }
        cout<<endl;
    }
    return 0;
}