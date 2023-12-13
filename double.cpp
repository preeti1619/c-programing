#include<iostream>
using namespace std;
void printarr(int arr[],int size){
for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
}

}
void inc(int arr[],int size){
arr[1]=arr[1]+10;
printarr(arr,size);
}
int main(){
int arr[]={2,3,9};
int size=2;
arr[0]=arr[2]+2;
printarr(arr,size);
inc(arr,size);
return 0;
}