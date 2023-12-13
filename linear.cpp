#include<iostream>
using namespace std;
int main(){
    int arr[]={7,8,4,3};
    int size=4;
    cout<<"enter key";
    int flag=0;
    int key;
    cin>>key;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            flag =1;
            break;
        }
    }
    if(flag){
        cout<<"present";
    }
    else{
        cout<<"not present";

    }
    return 0;

}