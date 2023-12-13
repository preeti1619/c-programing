#include<iostream>
using namespace std;
int main(){
    int arr[]={1,0,1,0,0,1,1,1,1,1,1,1};
    int size=13;
    int count0=0;
    int count1=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            count0++;
        }
        if(count1==1){
            count1++;
        }

    }
    cout<<"number of zero"<<count0;
    cout<<"number of ones"<<count1;
return 0;
}