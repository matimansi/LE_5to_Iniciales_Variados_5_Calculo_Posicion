
/*
	Ecuacion MRU --> P(f) = P(i) + V . T
*/

#include <stdio.h>

float calculo_posicion (float velocidad, float tiempo);
float velocidad, tiempo;

int main()
{
	float resultado;
	printf("\nBienvenido a mi programa...\n");
	printf("Gracias a este programa podras saber la posicion final de un auto\n");
	printf("ingresando el tiempo y la velocidad, asumiendo que la posicion inicial es 0\n\n");
	printf("Ingrese la velocidad en m/s\n>>> ");
	scanf("%f", &velocidad);
	printf("Ingrese el tiempo en segundos\n>>> ");
	scanf("%f", &tiempo);
	resultado = calculo_posicion(velocidad, tiempo);
	printf("La posicion final del auto es: %.3f metros\n\n", resultado);
	return 0;
}

float calculo_posicion (float velocidad, float tiempo)
{
	float posicion_final;
	posicion_final = velocidad * tiempo;
	return (posicion_final);
}
