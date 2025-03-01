#include<iostream>
using namespace std;
 
int main(){
    int arr[]={1,5,6,4,8,9,5,2,0,7};
    for(int i=0;i<2;i++)swap(arr[i],arr[9-i]);
    for(int num:arr)cout<<num<<" ";
}