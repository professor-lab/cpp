#include <iostream>

using namespace std;

//prototype (declaration)
int volume(int);
double volume(double,int);
long volume(long,int,int);
int main()
{
    cout<<volume(10)<<"\n";
    cout<<volume(2.5,8)<<"\n";
    cout<<volume(100,75,15)<<"\n";
    
    return 0;
  
}
//fnction definitions
int volume(int s)//cube
{
    return(s*s*s);
}
double volume(double r,int h)//cylinder
{
    return(3.14519*r*r*h);
}
long volume(long l,int b,int h) //rectangular box
{
    return(l*b*h);
}