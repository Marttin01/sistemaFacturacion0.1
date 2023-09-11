#include<stdlib.h>
#include<stdio.h>

int impTotal(Factura* facturas,int num){
	
	int monto = 0;
	int i;
	for(i = 0;i < num;i++){
		
		monto += facturas[i].monto;	
		
	}
	
	return monto;
}