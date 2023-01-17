#include<iostream>
using namespace std;

int divide(int numerator,int denominator)
{
    if(numerator<0)
    {
        return -1;
    }
    else if(numerator==0)
    {
        return 0;
    }
    numerator=numerator-denominator;
    return divide(numerator,denominator)+1;
}
int modulous(int numerator,int denominator)
{
    numerator=numerator-denominator;
    if(numerator==0)
    {
        return 0;
    }
    else if(numerator<0)
    {
        return numerator+denominator;
    }
    return modulous(numerator,denominator);
}
int main()
{
    int a=0,b=0;
    cout<<"enter numerator"<<endl;
    cin>>a;
    cout<<"enter denominator"<<endl;
    cin>>b;
    
    if(b!=0)
    {
        
        cout<<"showing divisoion "<<divide(a,b);
        cout<<endl;
        cout<<"showing modulous "<<modulous(a,b)<<endl;
    }
    else
    {
        cout<<"b is zero so error "<<endl;
    }
    
    return 0;
}