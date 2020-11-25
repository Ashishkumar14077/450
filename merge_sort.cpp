//find the mean of two array with same number of elements
#include <bits/stdc++.h> 
using namespace std;

vector<int> merge(vector<int> v1, vector<int> v2) //For merge sort
{
    vector<int> result;
    int i=0,j=0,flag1=0,flag2=0;
    while(i!=v1.size() && j!=v2.size());
    {
        if(v1[i]<v2[j])
        {
            result.push_back(v1[i]);
            i++;
            if(i!=v1.size()-1)
                flag1=1;
        }
        else if(v1[i]<v2[j])
        {
            result.push_back(v2[j]);
            j++;
            if(j!=v2.size()-1)
                flag2=1;
        }
    }
    if(flag1==1)
    {
        for(j;j<v2.size();j++)
        {
            result.push_back(v2[j]);
        }
    }
    if(flag2==1)
    {
        for(i;i<v1.size();i++)
        {
            result.push_back(v1[i]);
        }
    }

    return result;

}
int find_median(vector<int> v)
{
    sort(v.begin(),v.end());
    int size=v.size();
    int mid;
    if(size%2==0)
    {
        mid=(size/2) - 1 ;
        int avg = (v[mid]+v[mid+1])/2;
        return avg;
    }
    else{
        mid=(size-1)/2;
        return v[mid];
    }
}
int main()
{
    vector<int> array1={2,5,8,12,25,39};  //first array
    vector<int> array2={3,4,13,29,35,43}; //second array
    
    vector<int> result=merge(array1, array2); // merged array
    int median=find_median(result);
    cout<<"median"<<median<<endl;
    return 0;
}