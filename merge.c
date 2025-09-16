#include<stdio.h>
int main()
{
int s1,s2,s3;
printf("Enter the size of the array:\n");
scanf("%d",&s1);
printf("Enter %d elements to the array:\n",s1);
int arr1[s1];
for(int i=0;i<s1;i++)
{
scanf("%d",&arr1[i]);
}
printf("Enter the size of the array:\n");
scanf("%d",&s2);
printf("Enter %d elements to the array:\n",s2);
int arr2[s2];
for(int i=0;i<s2;i++)
{
scanf("%d",&arr2[i]);
}

s3=s1+s2;
int arr3[s3];
for(int i=0;i<s1;i++)
{
arr3[i]=arr1[i];
}
for(int i=0;i<s2;i++)
{
arr3[s1+i]=arr2[i];
}
printf("Merged array:\n");
for(int i=0;i<s3;i++)
{
printf("%d",arr3[i]);
printf("\n");
}
return 0;
}

