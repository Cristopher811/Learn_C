#include<stdio.h>
/*Imptime la tabla Fahrenheit-Celsius
 * para fahr = 0, 20, ..., 300*/

int main(void){

	float fahr, celsius;
	int lower, upper, step;

	lower = 0; /* límite inferior de la tabla de temperaturas*/
	upper = 300; /*limite superior*/
	step = 20; /*tamaño del incremento*/

	fahr = lower;
	printf("Conversión Fahrenheit a Celsius\n");
	while(fahr <= upper){
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	celsius = lower;
	printf("\nConversión Celsius a Fahrenheit\n");
	while (celsius <= upper) {
		fahr = (celsius * 9.0/5.0) + 32.0;
		printf("%3.f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}

	int fahrr;
	printf("\n\n\n De otra forma \n\n\n");
	for(fahrr = 300; fahrr >= 0; fahrr = fahrr - 20){
		printf("%3d %6.1f\n", fahrr, (5.0/9.0) * (fahrr - 32));
	}
}
