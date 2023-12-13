#include<iostream>
#include<cmath>
using namespace std;
int decimaltobinary(int n){
    int decimal=0;
    int i=0;
    while(n>0){
        int bit=n%10;
  decimal= decimal+bit*pow(2,i++);
        n=n/10;
        
    }
    return decimal;
}



int main(){
    int num,decimal;
cin>>num;
decimaltobinary( num);
//cout<<decimal;
return 0;

}
