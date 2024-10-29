#include<stdio.h>
#include<stdlib.h>
typedef struct SLL
{
long long int PhNo;
char SEM[5],name[50],USN[10],Program[10];
struct SLL *next;
}
node;
node *start=NULL;
node* getnode()
{
char u[10];
node *p;
p=(node *)malloc(sizeof(node));
printf("Enter Name, USN, SEM, program and phone number of the student respectively:");
scanf("%s%s%s%s%lld",p->name,p->USN,p->SEM,p->Program,&(p->PhNo));
p->next=NULL;
return p;
}
void Ins_front()
{
node *p;
p=getnode();
p->next=start;
start=p;
}
void Del_front()
{
node *temp=start;
if(start==NULL)
{
printf("List is empty ");
return;
}
start=start->next;
printf("The %s student's data is deleted\n",temp->USN);
free(temp);
}
void display()
{
int count=0;
node *temp=start;
if(temp==NULL)
{
printf("List is empty\n");
return;
}
printf("\n\t\tName\t\tUSN\t\tSEM\t\tProgram\t\tPhone number");
while(temp!=NULL)
{
printf("\n\t\t%s\t\t%s\t\t%s\t\t%s\t\t%lld",temp->name,temp->USN,temp->SEM,temp->Program,temp->PhNo);

temp=temp->next;
count++;
}
printf("\n\t\tThere are %d nodes \n",count);
}
void Ins_end()
{
node *p,*temp=start;
p=getnode();
if(start==NULL)
{
start=p;
return;
}
while (temp->next!=NULL)
temp=temp->next;
temp->next=p;
}
void Del_end()
{
node *temp=start,*prev;
if(start==NULL)
{
printf("List is empty ");
return;
}
while (temp->next!=NULL)
{
prev=temp;
temp=temp->next;
}
prev->next=NULL;
printf("The %s student's data is deleted\n",temp->USN);
free(temp);
}
int main()
{
int n,i,op;
printf("Enter\n\t\t 1 to Create a SLL of N Students Data by using front insertion.\n\t\t 2 to Display the status of SLL and count the number of nodes in it.\n\t\t 3 to Insert the node at front of SLL\n\t\t 4 to Delete the node at front of SLL\n\t\t 5 to Insert the node at end of SLL\n\t\t 6 to Delete the node at end of SLL\n\t\t7 to exit");
while(1)
{
printf("\n\t\tEnter your choice -->");
scanf("%d",&op);
switch(op)
{
case 1:
printf("Enter the number of students : ");
scanf("%d",&n);
for(i=0;i<n;i++)
Ins_front();
break;
case 2:
display();
break;
case 3:
Ins_front();
break;
case 4:
Del_front();
break;
case 5:
Ins_end();
break;
case 6:
Del_end();
break;
case 7:
exit(0);
default:
break;
}
}
return 0;
}
