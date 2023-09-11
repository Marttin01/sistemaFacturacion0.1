#include<stdlib.h>
#include<stdio.h>
#include "Factura.h"

void mostrarFc (Factura* facturas, int numerosFc) {
	
	int j;
		
	if(facturas != NULL){
	 	
	 	printf("Las facturas son: \n\n");
		for(j = 0; j < numerosFc; j++){
		
		printf(" %s\n", facturas[j].titulo);
		printf(" %d\n", facturas[j].numeroFc);
		printf(" %d\n\n", facturas[j].monto);
			
		}
	 	free(facturas);
	 }else {
 		
 		printf("No se pudo cargar las facturas \n");
 		
 	}
	
}