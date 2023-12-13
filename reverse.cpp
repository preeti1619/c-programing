#include<iostream>
using namespace std;
int reverse(int n){
  int rem=0,ans=0;
while(n>0){
  int digit=n%10;
  ans=ans*10+digit;
  n=n/10;
}
cout<< ans;
}







int main(){
  int n,ans;
  cin>>n;
  reverse(n);
  //cout<<ans;
  return 0;
  }
