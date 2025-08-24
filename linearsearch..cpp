#include<stdio.h>
 
int main()
{
int ar[30], n, i, flag = 0, num;

printf("Enter how many numbers you want to input:\t");
scanf("%d", &n);
for(i=0; i<n; i++)
{
printf("\nEnter the number at position %d\t", i+1);
scanf("%d", &ar[i]);
}
printf("\nNow enter the element you want to search:\t");
scanf("%d", &num );
for(i=0; i <n; i++)
{
if (ar[i] == num)
{
printf("The number %d is found at position %d", num, i+ 1);

flag = 1;
break;
}
}
if(flag == 0)
printf("\n The number %d has not been found\n", num);
}

