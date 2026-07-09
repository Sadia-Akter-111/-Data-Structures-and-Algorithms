#include<stdio.h>
struct student{
    int id;
    float cgpa;
    char name[20];
};
int main()
{
    struct student s1;
    printf("Enter your id:: ");
    scanf("%d",&s1.id);
    printf("Enter cgpa:: ");
    scanf("%f",&s1.cgpa);
    printf("Enter name:: ");
    scanf("%s",&s1.name);
    printf("Students information::\n ");
    printf("ID= %d\n",s1.id);
    printf("CGPA= %.2f\n",s1.cgpa);
    printf("NAME= %s\n",s1.name);
}
