#include<iostream>
using namespace std;

int main(){
    int a[2][2]={{1,2},{3,4}},b[2][2]={{5,6},{7,8}},res[2][2]={0};
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            for(int k=0;k<2;k++)
                res[i][j]+=a[i][k]*b[k][j];
  
return 0;
}
