#include<stdlib.h>
#include<stdio.h>
#ifndef FACTURA_H
#define FACTURA_H

typedef struct {
	char titulo[20];
	int numeroFc;
	int monto;
} Factura;

#endif