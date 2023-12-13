#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	bool isprime=true;
    for(int i=1;i<n;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime){
        cout<<"prime";

    }
    else{
        cout<<"number not prime";
    }return 0;
}