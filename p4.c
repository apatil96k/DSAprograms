#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 5
int front=0,rear=-1,count=0;
char cq[MAX];
void cqinsert()
{
int ele;
if(count==MAX)
{
printf("\n queue is full\n\n");
return;
}
printf("enter the element to be inserted\n");
scanf("%d",&ele);
rear=(rear+1)%MAX;
cq[rear]=ele;
count++;
}
void cqdelete()
{
if(count==0)
{
printf("queue is empty\n");
return;
}
printf("element deleted is=%d\n\n",cq[front]);
front=(front+1)%MAX;
count--;
}
void cqdisplay()
{
int j=front,i;
if(count==0)
{
printf("queue is empty\n");
}
printf("circular queue content is\n");
for(i=1;i<=count;i++)
{
printf("%d\t",cq[j]);
j=(j+1)%MAX;
}
printf("\n\n");
}
void main()
{
int ch;
do
{
printf("1.insert\t 2.delete\t 3.display\t 4.exit\n");
printf("enter your choice\n\n");
scanf("%d",&ch);
switch(ch)
{
case 1:cqinsert();
break;
case 2:cqdelete();
break;
case 3:cqdisplay();
break;
case 4:exit(0);
default:printf("invalid choice\n");
break;
}
}
while(1);
}
