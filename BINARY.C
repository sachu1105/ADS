#include<stdio.h>
#include<conio.h>
#include<process.h>
struct node
{
int d;
struct node *llink,*rlink;
};
struct node* creat(int d)
{
struct node* newnode;
newnode=((struct node*)malloc(sizeof(struct node)));
newnode->d=d;
newnode->llink=NULL;
newnode->rlink=NULL;
return(newnode);
}
void inorder(struct node *ptr)
{
if(ptr!=NULL)
{
inorder(ptr->llink);
printf("%d\n",ptr->d);
inorder(ptr->rlink);
}
}
void preorder(struct node *ptr)
{
if(ptr!=NULL)
{
printf("%d\n",ptr->d);
     preorder(ptr->llink);
     preorder(ptr->rlink);
}
}
void postorder(struct node *ptr)
{
if(ptr!=NULL)
{
postorder(ptr->llink);
postorder(ptr->rlink);
printf("%d\n",ptr->d);
}
}
void main()
{
struct node *root=NULL;
struct node *temp,*newnode,*ptr;
int c,elem,i,p,flag=0;
char ch;
clrscr();
while(1)
{
print("\n binary search tree\n1.Creation\n2.Inorder\n3.Preorder\n4.postorder\n5.Exit\nEnter your choice:");
scanf("%d",&c);
switch(c)
{
case 1:do
{
printf("Enter the element to be inserted:");
scanf("%d",&elem);
newnode=creat(elem);
if(root==NULL)
root=newnode;
else
{
ptr=root;
 while((ptr!=NULL)&&(flag==0))
 {
if(elem<ptr->d)
{
temp=ptr;
ptr=ptr->llink;
}
else if(elem>ptr->d)
{
temp=ptr;
ptr=ptr->rlink;
}
else
{
flag=1;
printf("Item already exist\n");
}
}
if((ptr==NULL)&&(flag==0))
{
if(temp->d>elem)
  temp->llink=newnode;
  else
  temp->rlink=newnode;
  }
  }
flag=0;
printf("do you want to continue(y\n)?");
getch();
scanf("%c",&ch);
}
while(ch=='y'||ch=='Y');
printf("BST is created\n");
break;
case2:if(root!=NULL)
{
inorder(root);
getch();
}
else
printf("Empty\n");
break;
case3:if(root!=NULL)
{
preorder(root);
getch();
}
else
printf("Empty\n");
break;
case 4:if(root!=NULL)
{
postorder(root);
getch();
}else
printf("empty\n");
break;
case 5:exit(0);
default:printf("Invalid choice\n");
}
}
}








