#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int e,id=-1,n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"element to be deleted";
	cin>>e;
	for(int i=0;i<n;i++)
	{
        if(a[i]==e)
        {
        	id=i;
        	break;
		}
	}
	if(id==-1)
	{
		cout<<"element not found";
		return 0;
    }
    for(int i=id;i<n;i++)
    {
    	a[i]=a[i+1];
	}
	n--;
	cout<<"array after deletion";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
