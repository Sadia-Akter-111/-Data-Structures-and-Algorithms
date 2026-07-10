 #include<stdio.h>
 #define SIZE 100
 int stack[SIZE];
 int top=-1;
 //push
 void push(int value)
 {
     if(top==SIZE-1)
     {
         printf("stack is overflow!!\n");
     }
     else
     {
         top++;
         stack[top]=value;

     }
 }
 //pop
 void pop()
 {
     int item;
     if(top==-1)
     {
         printf("Stack underflow");

     }
     else
     {
         item=stack[top];
         top--;
         printf("popped item is %d\n",item);
     }
 }
 //peek
 void peek()
 {
     if(top==-1)
     {
         printf("stack is empty!!");
     }
     else
        printf("peek element is %d",stack[top]);
 }
 //display
 void display()
 {
     int i;
      if(top==-1)
     {
         printf("No item is found");
     }
     else
     {


     for(i=top;i>=0;i--)
     {
         printf("%d",stack[i]);
     }
     }
 }
 int main()
 {
     int choice,value;
     do{
        printf("\nEnter choice\n1.push\n2.pop\n3.peek\n4.display\n5.exist\n");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            printf("Enter value:: ");
            scanf("%d",&value);
            push(value);
            break;
            case 2:
            pop();
            break;
            case 3:
                peek;
                break;
            case 4:
                display();
                break;
            case 5:
                printf("program ended!! ");
            default:
                printf("Invalid choice.");







        }
     }while(choice!=5);
 }
