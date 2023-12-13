#include<iostream>
using namespace std;
 bool even(int n){
    if((n&1)==0){
        return true;
    }
    else{
        return false;
    }
}










int main(){
int n;

cin>>n;
 bool ans=even(n);
if(ans){
    cout<<n<<"is even";

}
else{
    cout<<n<<"is odd";
}
return 0;
}