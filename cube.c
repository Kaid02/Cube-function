#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void cube();
int main()
{
	cube();
	return 0;
}
void cube()
{
		int a,b;
		
		printf("Enter the number : ");
		scanf("%d",&a);
		
		b=pow(a,3);
		
		printf("The cube of number is : %d ",b);
}		 
