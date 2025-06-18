#include "common.h"
#include "Filling_arr3D.h"
void fill_Arr3D_ordered()//заповнення 3D масиву строго за збільшенням
{
    int number=0;
    for (int k=0; k<P_S; k++)
    {
        for (int j=0; j<N_S; j++)
        {
            for (int i=0; i<M_S; i++)
            {
              Arr3D[k][i][j] = number++;
            }
        }
    }
}
void fill_Arr3D_random()//заповнення 3D масиву випадковими числами
{
    for (int k=0; k<P_S; k++)
    {
        for (int j=0; j<N_S; j++)
        {
            for (int i=0; i<M_S; i++)
            {
              Arr3D[k][i][j] = rand() % (P_S*M_S*N_S);
            }
        }
    }
}
void fill_Arr3D_back()//заповнення 3D масиву строго за зменшенням
{
    int number = P_S*M_S*N_S;
    for (int k=0; k<P_S; k++)
    {
        for (int j=0; j<N_S; j++)
        {
            for (int i=0; i<M_S; i++)
            {
                Arr3D[k][i][j] = number--;
            }
        }
    }
}
