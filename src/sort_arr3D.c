#include "common.h"
#include "sort_arr3D.h"

clock_t arr3D_Select1()//сортування 3D масиву алгоритмом прямого вибору № 1
{
    int Min, imin;
    int A[M_S][N_S];
    clock_t time_start, time_stop;
    time_start = clock();
    for (int s = 0; s < P_S - 1; s++)// прохід по всіх перерізах окрім останнього
    {
        Min = Arr3D[s][0][0];//встановлення початкового мінімума для запуску основного алгоритму
        imin = s;
        for (int i = s + 1; i < P_S; i++)// пошук мінімума серед перших елементів кожного перерізу
        {
            if (Arr3D[i][0][0] < Min)
            {
                Min = Arr3D[i][0][0];
                imin = i;
            }
        }
        for (int i = 0; i < M_S; i++)//перестановка перерізів за незменшенням перших елементів
        {
            for (int j = 0; j < N_S; j++)
            {
                A[i][j] = Arr3D[s][i][j];
                Arr3D[s][i][j] = Arr3D[imin][i][j];
                Arr3D[imin][i][j] = A[i][j];
            }
        }
    }
    time_stop = clock();
    return time_stop - time_start;
}
clock_t arr3D_Select8()//сортування 3D масиву алгоритмом прямого вибору № 8
{
    int L, R, imin, imax, tmp;
    clock_t time_start, time_stop;
    time_start = clock();
    L = 0;
    R = P_S - 1;
    while (L < R)
    {
        imin = L;
        imax = L;

        /*пошук мінімального і максимального елементів

          серед перших елементів кожного перерізу*/

        for (int i = L + 1; i <= R; i++)
        {
            if (Arr3D[i][0][0] < Arr3D[imin][0][0]) imin = i;
            else if (Arr3D[i][0][0] > Arr3D[imax][0][0]) imax = i;
        }
        if (imin != L)// перестановка мінімального в початок
        {
            for (int m = 0; m < M_S; m++)
            {
               for (int n = 0; n < N_S; n++)
                {
                    tmp = Arr3D[L][m][n];
                    Arr3D[L][m][n] = Arr3D[imin][m][n];
                    Arr3D[imin][m][n] = tmp;
                }
            }
        }
        if (imax != R)// перестановка максимального в кінець
        {
            if (imax == L) imax = imin;//виправлення індекса максимального якщо вже був обмін
            for (int m = 0; m < M_S; m++)
            {
                for (int n = 0; n < N_S; n++)
                {
                    tmp = Arr3D[R][m][n];
                    Arr3D[R][m][n] = Arr3D[imax][m][n];
                    Arr3D[imax][m][n] = tmp;
                }
            }
        }
        L = L + 1;
        R = R - 1;
    }
    time_stop = clock();
    return time_stop - time_start;
}
clock_t arr3D_Shell_2()//сортування 3D масиву алгоритмом Шелла № 2
{
    int A[M_S][N_S];
    int t,k,i,j,r,l,m;
    clock_t time_start, time_stop;
    time_start = clock();

    // визначення кількості кроків

    if (P_S < 4) t = 1;
    else t = (int)log2f((float)P_S)-1;
    int H[t];
    H[t-1]=1;
    for (int i=t-2; i>=0; i--) H[i]=2*H[i+1]+1;// задання послідовності кроків
    for(m = 0; m < t; m++)
    {
        k = H[m];
        for(l=k; l < P_S; l++)// прохід по масиву з поточним кроком
        {
            r=l;
            while(r>=k && Arr3D[r][0][0]<Arr3D[r-k][0][0])// поки поточний менший — міняємо місцями
            {
                for(i=0; i<M_S; i++)
                {
                    for(j=0; j<N_S; j++)
                    {
                        A[i][j]=Arr3D[r][i][j];
                    }
                }
                for(i=0; i<M_S; i++)
                {
                    for(j=0; j<N_S; j++)
                    {
                        Arr3D[r][i][j]=Arr3D[r-k][i][j];
                    }
                }
                for(i=0; i<M_S; i++)
                {
                    for(j=0; j<N_S; j++)
                    {
                        Arr3D[r-k][i][j]=A[i][j];
                    }
                }
                r=r-k;
            }
        }
    }
    time_stop = clock();
    return time_stop - time_start;
}
