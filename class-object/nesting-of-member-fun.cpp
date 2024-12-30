#include <iostream>
using namespace std;

class set
{
    int m,n;
 public:
    void input(void);
    void display(void);
    int largest(void);

};
int set::largest(void)
{
    if(m>=n)
        return(m);
    else
        return(n);
}
void set::input(void)
{
    cout<<"\ninput values of m : ";
    cin>>m;
    cout<<"\ninput values of n : ";
    cin>>n;
}
void set::display(void)
{
    cout<<"\nLargest Value = "<<largest();
}
int main()
{
    set A;
    A.input();
    A.display();    
    return 0;
}