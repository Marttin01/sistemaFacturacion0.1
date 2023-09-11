#include<stdlib.h>
#include<stdio.h>

int mostrarLista () {
	
	int numero;
	
	printf("Elija una opcion: \n\n");
	printf("1.Mostrar Facturas \n");
	printf("2.Mostrar monto sin IVA incluido \n");
	printf("3.Mostrar monto con IVA \n");
	printf("4.Cargar devuelta las facturas \n\n");
	scanf(" %d", &numero);
	
	return numero;
}