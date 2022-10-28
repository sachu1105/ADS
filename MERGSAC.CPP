#include<stdio.h>
#include<conio.h>
int main()
{
int arr1[50],arr2[50],size1,size2,i,k,merge[100];
clrscr();
printf("\n enter size of 1st array:",size1);
scanf("%d",&size1);
printf("\n enter%d elements:",size1);
for(i=0;i<size1;i++)
{
scanf("%d",&arr1[i]);
   merge[i]=arr1[i];
 }
 k=i;
 printf("\n enter size of 2nd array:");
 scanf("\%d",&size2);
 printf("enter%d elements;",size2);
 for(i=0;i<size2;i++)
 {
 scanf("%d",&arr2[i]);
    merge[k]=arr2[i];
    k++;
 }
 printf("\n the new array after merging is:\n");
 for(i=0;i<k;i++)
 printf("%d\t",merge[i]);
 getch();
 return 0;
 }
