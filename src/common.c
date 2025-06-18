#include "common.h"
void allocate_RAM()  // процедура виділення пам'яті для 3D масиву
{
    Arr3D = (int***) malloc(P_S*sizeof(int**));
    for (int k=0; k < P_S; k++)
    {
        Arr3D[k] = (int**) malloc(M_S*sizeof(int*));
        for (int i=0; i < M_S; i++)
            Arr3D[k][i] = (int*) malloc(N_S*sizeof(int));
    }
}
void free_RAM()  // процедура звільнення пам'яті для 3D масиву
{
    for (int k=0; k < P_S; k++)
    {
        for (int i=0; i < M_S; i++)
            free(Arr3D[k][i]);
        free(Arr3D[k]);
    }
    free(Arr3D);
}
void allocate_RAM_Vector()//процедура виділення пам'яті для вектора
{
    Vector = (int*) malloc(VECTOR*sizeof(int));
}
void free_RAM_Vector()//процедура звільнення пам'яті для вектора
{
    free(Vector);
}
