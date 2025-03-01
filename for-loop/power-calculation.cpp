#include<iostream>
using namespace std;

int main(){
    int base=2,exp=5,res=1;
    for(int i=1;i<=exp;i++)res*=base;
    cout<<res;

    return 0;
}