#include<stdio.h>

int main()
{
int ar[30], n, i, sm =0;

printf("Enter how many numbers you want to input:\t");
scanf("%d", &n);
for(i=0; i<n; i++)
{
printf("\nEnter the number at position %d\t", i+1);
scanf("%d", &ar[i]);
}
printf("\nThe elements of the array you have entered are:\n");
for(i=0; i <n; i++)
printf("%d\t", ar[i]);

for(i=0; i <n; i++)
sm = sm + ar[i];
printf("\nThe sum of all the elements of the array you have entered is: %d",sm);
}


	 


  
