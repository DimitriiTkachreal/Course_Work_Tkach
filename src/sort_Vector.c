#include "common.h"
#include "sort_Vector.h"
clock_t Select1_sort_Vector()//сортування вектора алгоритмом прямого вибору № 1
{
    int Min, imin;
    clock_t time_start, time_stop;
    time_start = clock();
    for(int s = 0; s < VECTOR-1;s++)
    {
        Min = Vector[s];
        imin = s;
        for(int i = s+1; i < VECTOR;i++)
        {
            if (Vector[i] < Min)
            {
                Min = Vector[i];
                imin = i;
            }
        }
        Vector[imin] = Vector[s];
        Vector[s] = Min;
    }
    time_stop = clock();
    return time_stop - time_start;
}
clock_t Select8_sort_Vector()//сортування вектора алгоритмом прямого вибору № 8
{
    int L, R, imin, imax, tmp;
    clock_t time_start, time_stop;
    time_start = clock();
    L= 0;
    R = VECTOR - 1;
    while (L<R)
    {
        imin = L;
        imax = L;
        for(int i=L+1; i<R+1; i++)
        {
          if (Vector[i] < Vector[imin]) imin = i;
          else if (Vector[i] > Vector[imax]) imax = i;
        }
        if (imin!=L)
        {
            tmp = Vector[imin];
            Vector[imin] = Vector[L];
            Vector[L] = tmp;
        }
        if (imax!=R)
        {
            if (imax==L)
            {
                tmp=Vector[imin];
                Vector[imin]=Vector[R];
                Vector[R]=tmp;
            }
            else
            {
                tmp=Vector[imax];
                Vector[imax]=Vector[R];
                Vector[R]=tmp;
            }
        }
        L=L+1;
        R=R-1;
    }
    time_stop = clock();
    return time_stop - time_start;
}
clock_t Shell_2_sort_Vector()//сортування вектора алгоритмом Шелла № 2
{
   int tmp, t, j, k;
    clock_t time_start, time_stop;
    time_start = clock();
    if (VECTOR<4) t=1;
    else t=(int)log2f((float)VECTOR)-1;
    int Stages[t];
    Stages[t-1]=1;
    for (int i=t-2; i>=0; i--) Stages[i]=2*Stages[i+1]+1;
    for (int p=0; p<t; p++)
    {
        k=Stages[p];
        for (int i=k; i<VECTOR; i++)
        {
            j=i;
            while (j>=k && Vector[j]<Vector[j-k])
            {
                tmp=Vector[j];
                Vector[j]=Vector[j-k];
                Vector[j-k]=tmp;
                j=j-k;
            }
        }
    }
    time_stop = clock();
    return time_stop - time_start;
}
