#include<stdio.h>
#include<conio.h>
#define MAX 5
void insert();
void ram();
void dispay();
int q[MAX],ITEM,ch,front=-1,rear=1;
void main()
{
    clrscr()
{
  printf("1.insert\n");
    printf("2.insert\n");
    printf("3.insert\n");
    printf("exit\n");
   do
    {
        printf("enter your choice\n");
    }
    while(ch!=4);
    scanf("%d",&ch);
    switch(ch)
           {
         case 1:
            insert();
            break;
         case 2.:
            rem();
            break;
         case 3:
            display();
            break;
         case 4:
            exit(0);
            break();
            default;
            printf("wrong choice\n");
           }
}
}
