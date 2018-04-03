//Toplama ,cikarma , carpma ve bolme islemi

#include <stdio.h>
int main (){
	char operator;
	double firstNumber , secondNumber;
	printf ("Bir isaret giriniz(+,-,*,/):");
	scanf("%c",&operator);
	
	printf("Iki numara giriniz:");
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
		printf("%.1lf*%1.lf=%.1lf",firstNumber , secondNUmber , firstNumber*secondNumber);
		break;
	
	case'/':
		printf("%.1lf/%.1lf=%.1lf",firstNumber , secondNumber , firstNumber/secondNumber);
		break;
// Hicbir isaret eslesmiyorsa(+,-,*,/)
default:|
		printf("Hata! Isaret eslesmiyor");
		}
	return 0 ;
} 


