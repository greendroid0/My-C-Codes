//Toplama ,cikarma , carpma ve bolme islemi

#include <stdio.h>
	int main (){
	char operator;
	double firstNumber , secondNumber;
	printf ("Select an operator(+,-,*,/):");
	scanf("%c",&operator);
	
	printf("Enter two numbers:");
	scanf("%lf %lf",&firstNumber , &secondNumber);

	switch(operator)
{
	case'+':
		printf("%.1lf+%.1lf=%.1lf",firstNumber , secondNumber , firstNumber+secondNumber);
		break;

	case'-':
		printf("%.lf-%.1lf=%.1lf",firstNumber , secondNumber , firstNumber-secondNumber);
		break;

	case'*':
		printf("%.1lf*%1.lf=%.1lf",firstNumber , secondNumber , firstNumber*secondNumber);
		break;
	
	case'/':
		printf("%.1lf/%.1lf=%.1lf",firstNumber , secondNumber , firstNumber/secondNumber);
		break;
// If operators not matching (+,-,*,/)
default;|
		printf("Error! Operator isn't matching");
		}
	return 0 ;
} 


