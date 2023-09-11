#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
#include "cargarFc.c"
#include "Factura.h"
#include "inputFactura.c"
#include "mostrarFc.c"
#include "impIva.c"
#include "impTotal.c"
#include "listaOpc.c"

int main() {
	
	int montoTotal = 0;
	int j;
	bool repetir = false;
	char letra;
	int numerosFc = obtenerNumFc();
 	Factura* fcs = cargarFc(numerosFc);
 	
 	do{
	 	
	 	int numeroList = mostrarLista();
 	
 		if(numeroList == 1) {
	 		mostrarFc(fcs, numerosFc);	
	 	}else if(numeroList == 2){
 			int mont = impTotal(fcs, numerosFc);
 			printf("El monto total SIN iva es de: %d\n", mont);
 		}else if(numeroList == 3) {
 			int mont = impTotal(fcs, numerosFc);
	 		importeIva(mont, numerosFc);
 		}else if(numeroList == 4) {
 			numerosFc = obtenerNumFc();
		 	fcs = cargarFc(numerosFc);
	 	}else printf("El numero ingresado no esta dentro de las opciones \n");
	 	
	 	printf("Para seleccionar otra opcion presione Y o para finalizar presione N \n");
	 	scanf(" %c", &letra);
	 	
	 	if(letra == 'Y' || letra == 'y'){
	 		repetir = true;
	 	}else if(letra == 'N' || letra == 'n'){
	 		repetir = false;
	 	}else printf("La letra ingresada no es correcta \n");
		 	
	 }while(repetir == true);
	  	
return 0;
}

