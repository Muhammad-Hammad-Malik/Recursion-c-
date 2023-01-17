#include<iostream>
using namespace std;
int search(int* ,int ,int ,int );
int main()
{
	int size=10;
    int* arr=new int[size];
    int find;
    for(int i=0;i<size;i++)
    {
        arr[i]=i+1;
    }
    cout<<"Enter a value you want to search: ";
    cin>>find;
    cout<<search(arr,0,size-1,find);

}
int search(int* arr,int start,int end,int find)
{
	
    int mid=(end+start)/2;
	if(start==end)
	{
		cout<<" NOT FOUND "<<endl;
		return -1;
	}
    if(arr[mid]==find)
    {
        return mid+1;
    }
    else if(arr[mid]>find)
    {
        end=mid-1;
    }
    else if(arr[mid]<find)
    {
        start=mid+1;
    }
    int value=search(arr,start,end,find);
}
