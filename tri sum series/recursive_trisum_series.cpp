#include<iostream>
using namespace std;
void recursive(int num,int value1,int value2,int value3)
{
    if(num>0)
    {
        cout<<value1+value2+value3<<" ";
        recursive(num-1,value2,value3,value1+value2+value3);
    }
    else
    {
        return;
    }
}
int main()
{
    int num;
    cout<<"Enter the fibonacci index: ";
    cin>>num;
    recursive(num,1,0,0);
    return 0;
}