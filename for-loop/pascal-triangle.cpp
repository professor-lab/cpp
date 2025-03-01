#include<iostream>
using namespace std;
int main(){
int rows=5;
for(int i=0;i<rows;i++){
    int num=1;
    for(int s=1;s<=rows-i;s++) cout<<" ";
    for(int j=0;j<=i;j++){
        cout<<num<<" ";
        num=num*(i-j)/(j+i);
    }
    cout<<endl;
    }
    return 0;
}