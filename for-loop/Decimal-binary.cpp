#include<iostream>
using namespace std;

int main(){
    int n=10,bin=0,place=1;
    for(;n!=0;n/=2){
        int rem=n%2;
        bin +=rem*place;
        place*=10;
    }
    cout<<bin;



return 0;
}