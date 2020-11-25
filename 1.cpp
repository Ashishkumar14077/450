//Reverse a array
#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{
	int p;
	(n%2==0)?(p=n/2-1):(p=n/2);
	for(int i=0;i<p;i++)
	{
		int temp=arr[i];
		arr[i]=arr[n-i];
		arr[n-i]=temp;
	}
}
void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<endl;
	
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	reverse(arr,n);
	print(arr,n);
	return 0;
}