#include <iostream>
using namespace std;
int m=10;

int main()
{
    int m=20;
    {
        int k=m;
        int m=30;

        cout<<"\nWe are in inner block";
        cout<<"\n k = "<<k;
        cout<<"\n m = "<<m;
        cout<<"\n ::m = "<<::m;
    }
    cout<<"\n We are in outer block";
    cout<<"\n m= "<<m;
    cout<<"\n ::m = "<<::m;


    return 0;
}