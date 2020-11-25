//Find min.no. of merge operation to make an array palindrome

#include <bits/stdc++.h>
using namespace std;

int MinOperationPalindrome(int arr[],int n)
{
    int count=0;
    for(int i=0,j=n-1;i<=j;)
    {
        if(arr[i]==arr[j])
        {
            i++;
            j--;
        }
        else
        {
            if(arr[i]<arr[j])
            {
                arr[i+1]=arr[i+1]+arr[i];
                i++;
                count++;
            }
            if(arr[i]>arr[j])
            {
                arr[j-1]=arr[j-1]+arr[j];
                j--;
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int array[] ={11,14,15,99} ;  // {11,14,15,99} , {1,4,5,9} ,{1,4,5,9,1}
    int size=sizeof(array)/sizeof(array[0]);

    cout<<"Number of Merges for making palindrome "<<MinOperationPalindrome(array,size);
    return 0;
}