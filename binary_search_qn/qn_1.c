/*3x+5=65
solve this eqn by binary search*/
#include<stdio.h>
int main()
{
    int low=0,high=100;
    int x;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int value=3*mid+5;
        if(value==65)
        {
            x=mid;
            printf("solution: x= %d\n",x);
            return 0;
        }
        else if(value<65)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    printf("No integer solution found.\n");
}


