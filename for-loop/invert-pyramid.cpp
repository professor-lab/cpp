#include<iostream>
using namespace std;

int main(){
    for(int i=5;i>=1;i--){
        for(int s=0;s<=5;s++)cout<<"";
        for(int j=1;j<=2*i-1;j++)cout<<"*";
        cout<<endl;
    }
}