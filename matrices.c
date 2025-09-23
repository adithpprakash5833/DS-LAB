#include<stdio.h>
int main()
{
int m,n,i,j,k;
printf("enter the number of rows and columns of the matrices:\n");
scanf("%d%d",&m,&n);

int a[m][n],b[m][n],sum[m][n],sub[m][n],mul[m][n];

printf("enter elements to matrix A:\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);

printf("enter elements to matrix B:\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&b[i][j]);

printf("\n Matrix A:\n");
for(i=0;i<m;i++){
for(j=0;j<n;j++)
printf("%d",a[i][j]);
printf("\n");
}

printf("\n Matrix B:\n");
for(i=0;i<m;i++){
for(j=0;j<n;j++)
printf("%d",b[i][j]);
printf(" \n");
}

for(i=0;i<m;i++)
for(j=0;j<n;j++)
sum[i][j]=a[i][j]+b[i][j];

for(i=0;i<m;i++)
for(j=0;j<n;j++)
sub[i][j]=a[i][j]-b[i][j];

if(m==n){
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
mul[i][j]=0;
for(k=0;k<n;k++){
mul[i][j]+=a[i][k]*b[i][k];
}
}
}
}
printf("\n Matrix Addition:\n");
for(i=0;i<m;i++){
for(j=0;j<n;j++)
printf("%d",sum[i][j]);
printf("\n");
}
printf("\n Matrix subtraction:\n");
for(i=0;i<m;i++){
for(j=0;j<n;j++)
printf("%d",sub[i][j]);
printf("\n");
}
if(m==n){
printf("\n Matrix Multiplication:\n");
for(i=0;i<m;i++){
for(j=0;j<n;j++)
printf("%d",mul[i][j]);
printf("\n");
}
}
else{
printf("\n Matric multiplication not p[ossible (not square matrices).\n");
}
return 0;
}

