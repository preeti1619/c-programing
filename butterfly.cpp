#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<2*n;i++){
        int condt=i<n? i:2*n-i-1;
        int space=i<n? 2*(n-condt-1):i-condt-1;
        for(int j=0;j<2*n;j++){
if(j<condt){
    cout<<"*";
}
else if(space >0){
    cout<<" ";
    space--;
}
else{
    cout<<"*";
}
        }
        cout<<endl;
    }


           
    return 0;
}