#include<stdio.h>
int main()
{
	int num1 , num2, num3;
	int max = num1 , min= num1;
	printf("Enter number1:");
	scanf("%d" , &num1);
	printf("Enter number2:");
	scanf("%d" , &num2);
	printf("Enter number3:");
	scanf("%d" , &num3);

	if (num1 > num2 && num1 > num3 )
	 	printf("largest number is %d" , num1 );
    	else if (num2 > num3  )
		printf(" lagest number is %d" , num2);
	else
		printf(" lagerst number is %d" , num3);
	
	     if (num1 < num2 && num1 < num3 )
                printf("smaller number is %d" , num1 );
        else if (num2 > num3 )
                printf("smaller number is %d" , num2 );
        else 
                printf("smaller number is %d" , num3);


return 0;





}
