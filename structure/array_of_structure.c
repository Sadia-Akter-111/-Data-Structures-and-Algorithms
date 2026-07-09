#include<stdio.h>

struct student{
    int roll;
    float marks;
};
int main()
{
    int i;
    struct student s[3];
    for(i=0;i<3;i++)
    {
        printf("Enter roll:: ");
        scanf("%d",&s[i].roll);
        printf("Marks:: ");
        scanf("%f",&s[i].marks);

    }
    printf("Data::\n");
    for(i=0;i<3;i++)
    {
        printf("Roll= %d,\nmarks=%.2f\n",s[i].roll,s[i].marks);
    }
}
