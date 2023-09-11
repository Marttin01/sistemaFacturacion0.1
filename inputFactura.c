#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

int obtenerNumFc () {
	
	char letra;
	bool repetir = false;
	int numero;
		
	printf("Ingrese el numero de facturas a cargar: \n");
	scanf(" %d", &numero);
	
	printf("El numero ingresado de facturas es de: %d\n\n", numero);
	printf("Desea cambiar el numero? Presione Y para cambiar y N para no modificarlo \n");
	scanf(" %c", &letra);
	
	if(letra == 'Y' || letra == 'y') {
			
		do {
			
			printf("Ingrese el numero de facturas a cargar: \n");
			scanf(" %d", &numero);
			repetir = true;
			
			printf("El numero ingresado de facturas es de: %d\n\n", numero);
			
			printf("Desea cambiar el numero? Presione Y para cambiar y N para no modificarlo \n");
			scanf(" %c", &letra);
			
			if(letra == 'n' || letra == 'N') repetir = false;
			
		}while(repetir == true);
		
	}	
		
	return numero;
}