#include<iostream>
using namespace std;
void iteration(int num)
{
    if(num>0)
    {
        int value1=0;
        int value2=1;
        cout<<"1 ";
        for(int i=1;i<num;i++)
        {
            int sum=value1+value2;
            cout<<value1+value2<<" ";
            value1=value2;
            value2=sum;
        }
    }
}
void recursive(int num,int value1,int value2)
{
    if(num>0)
    {
        cout<<value2<<" ";
        recursive(num-1,value2,value1+value2);
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
    iteration(num);
    cout<<endl;
    recursive(num,0,1);
    return 0;
}