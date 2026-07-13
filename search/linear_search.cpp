#include<iostream>
using namespace std;
int main()
{
    int n,arr[100],target,pos=-1;
    cin>>n;
    cout<<"Enter number of elements:: " ;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter a target number :: ";
    cin>>target;
    for(int i=0;i<n;i++)
    {
        if(target==arr[i])
        {
            pos=i;
            break;
        }
    }
    if(pos==-1)
        cout<<"not found";
    else
        cout<<"found at " <<pos<<" index";
}
