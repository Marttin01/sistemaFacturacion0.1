#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include "Factura.h"


Factura* cargarFc (int numero) {
	
	int i;
	int j;
	int numerosFc = numero;
	int montoTotal = 0;
	
	//---------------- CARGA DE FACTURAS EN EL ARRAY facturas QUE CONTIENE VARIAS ESTRUCTURAS
	
 	Factura* facturas = malloc(numerosFc * sizeof(Factura));
	for(i = 0; i < numerosFc; i++){
		
		printf("Ingrese el titulo de la factura: \n");
		scanf(" %s", facturas[i].titulo);
		
		printf("Ingrese el numero de factura: \n");
		scanf(" %d", &facturas[i].numeroFc);
		
		printf("Ingrese el monto de la factura SIN IVA: \n");
		scanf(" %d", &facturas[i].monto);
		printf("\n");
		
	}
	
	return facturas;
		
}