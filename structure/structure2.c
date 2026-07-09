#include<stdio.h>
struct student{
    int id;
    float cgpa;
    char name[20];
};
int main()
{
    struct student s1={17,3.73,"Aysha"};
     struct student s2={41,3.71,"sadia"};
     if(s1.id>s2.id)//individual member can be compare
     {
         printf("Hii");
     }
     else
     {
         printf("hello");
     }
}
