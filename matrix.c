#include<stdio.h>
#include<math.h>
int main()
{
int r1,c1,r2,c2;
printf("enter number of rows and columns of first matrix:\n");
scanf("%d%d", &r1,&c1);

printf("enter number of rows and columns of second matrix:\n");
scanf("%d%d", &r2,&c2);
if(c1!=r2){
printf("multiplication of matrices is not possible.First column equals to second row:");

}
int m1[r1][c1],m2[r2][c2],result[r1][c2],i,j,k;
printf("enter elements of first matrix:\n");
for(i=0;i<r1;i++){
for(j=0;j<c1;j++){
scanf("%d", &m1[i][j]);
}
}
printf("enter elements of second matrix:\n");
for(i=0;i<r2;i++){
for(j=0;j<c2;j++){
scanf("%d", &m2[i][j]);
}
}
for(i=0;i<r1;i++){
for(j=0;j<c2;j++){
result[i][j]=0;
}
}
for(i=0;i<r1;i++){
for(j=0;j<c2;j++){
for(k=0;k<c1;k++){
result[i][j]=m1[i][k]*m2[k][j];
}
}
}
printf("multiplied matrix:\n");
for(i=0;i<r1;i++){
for(j=0;j<c2;j++){
printf("%d", result[i][j]);
}
printf("\n");
}
return 0;
}





