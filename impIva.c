#include<stdlib.h>
#include<stdio.h>

void importeIva(int monto, int numFc){
	
	printf("El monto acumulado de la/s %d", numFc);
	monto = monto * 1.21;
	printf(" factura/s CON IVA es de : %d\n", monto);
	
}