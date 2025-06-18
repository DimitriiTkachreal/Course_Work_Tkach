#ifndef COMMON_H_INCLUDED
#define COMMON_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
// задання вимірів для тривимірного масиву
#define N_S 100
#define M_S 16
#define P_S 32
#define VECTOR 32  // встановлення розміру вектора

int*** Arr3D; // оголощення тривимірного масиву
int *Vector; //оголошення вектору
void allocate_RAM ();
void free_RAM();
void allocate_RAM_Vector();
void free_RAM_Vector();

#endif // COMMON_H_INCLUDED
