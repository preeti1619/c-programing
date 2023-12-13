#include<iostream>
#include<limits.h>
using namespace std;
public:
class solution{
void maxprofitfinder(vector<int> &price,int i,int max_price,int&min_price,int&maxprofit){
    //base sol
    if(i==price.size()){
        return ;
    }
    if(price[i]<min_price){
        min_price=price;
        int todaysprofit=price[i]-min_price;
    }
    if(todaysprofit>maxprofit){
        maxprofit=todaysprofit;
    }

maxprofitfinder(price, i+1,min_price,max_price);
}

    int maxProfit(vector<int>price){
        int min_price=INT_MAX;
        int max_price=INT_MIN;
        maxProfitfinder(price,0,min_price,max_price);
       return maxprofit;     
        
    }
};