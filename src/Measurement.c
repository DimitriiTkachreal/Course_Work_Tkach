#include "common.h"
#include "Filling_vector.h"
#include "sort_Vector.h"
#include "Filling_arr3D.h"
#include "sort_arr3D.h"
#include "Measurement.h"
clock_t  Res[measurements_number];
float MeasurementProcessing()//обробка і усереднення вимірів часу
{
    long int Sum;
    float AverageValue;

    // Крок 1. Для виконання Кроку 1 просто починаємо алгоритм з індексу rejected_number.

    /*Крок 2.Для знаходження min_max_number мінімальних і максимальних значень вимірів

    виконуємо min_max_number ітерацій головного цикла алгоритму шейкерного сортування в

    діапазоні індексів від rejected_number до measurements_number-1. В результаті,

    min_max_number мінімальних значень вимірів бу- дуть  знаходитись  на  позиціях

    в  діапазоні  індексів  від rejected_number до  rejected_number+min_max_number-1,

    а min_max_number максимальних значень вимірів – на позиціях в діапазоні індексів

    від measurements_number-min_max_number до measurements_number-1.*/

    clock_t buf;
	int L = rejected_number, R = measurements_number - 1;
	int k = rejected_number;
	for (int j=0; j < min_max_number; j++)
    {
		for (int i = L; i < R; i++)
		{
			if (Res[i] > Res[i + 1])
			{
				buf = Res[i];
				Res[i] = Res[i + 1];
				Res[i + 1] = buf;
				k = i;
			}
		}
		R = k;
		for (int i = R - 1; i >= L; i--)
		{
			if (Res[i] > Res[i + 1])
			{
				buf = Res[i];
				Res[i] = Res[i + 1];
				Res[i + 1] = buf;
				k = i;
			}
		}
		L = k + 1;

		// Крок 3.

		/* Знаходимо середнє значення вимірів після відкидання rejected_number перших

		 вимірів та min_max_number вимірів з мінімальними значеннями і min_max_number

		  вимірів з максима- льними  значеннями,  тобто  середнє  значення  вимірів  в

		  діапазоні індексів від rejected_number + min_max_number до measurements_number

		   - min_max_number - 1. */
	}
    Sum=0;
    for (int i = rejected_number + min_max_number; i < measurements_number - min_max_number; i++)
    Sum = Sum + Res[i];

    /* Кількість вимірів, що залишилась для обчислення середнього значення, дорівнює

       measurements_number – 2 * min_max_number - rejected_number */

    AverageValue = (float)Sum/(float)(measurements_number - 2*min_max_number - rejected_number);
    printf("");
    return AverageValue;
}
void Select1_Vector_measurement(char mode)// варіант з вектором
{
    /* Ця процедура заповнює масив вимірів часу для алгоритму

       прямого вибору № 1 для трьох випадків початкової

       відсортованості.

       Ця процедура приймає один параметр який може бути:

       d - встановлення початкової прямої відсортованості

       r - встановлення початкової випадкової відсортованості

       b - встановлення початкової оберненої відсортованості
    */
    for(int i = 0; i < measurements_number; i++)
    {
        if(mode == 'o')
        {
            allocate_RAM_Vector();
            fillVector_ordered();
            Res[i]= Select1_sort_Vector();
            free_RAM_Vector();
        }
        else if(mode == 'r')
        {
            allocate_RAM_Vector();
            fillVector_random();
            Res[i] = Select1_sort_Vector();
            free_RAM_Vector();
        }
        else if(mode == 'b')
        {
            allocate_RAM_Vector();
            fillVector_back();
            Res[i] = Select1_sort_Vector();
            free_RAM_Vector();
        }
    }
}
void Select8_Vector_measurement(char mode)// варіант з вектором
{
    /* Ця процедура заповнює масив вимірів часу для алгоритму

       прямого вибору № 8 для трьох випадків початкової

       відсортованості.

       Ця процедура приймає один параметр який може бути:

       d - встановлення початкової прямої відсортованості

       r - встановлення початкової випадкової відсортованості

       b - встановлення початкової оберненої відсортованості
    */
    for(int i = 0; i < measurements_number; i++)
    {
        if(mode == 'o')
        {
            allocate_RAM_Vector();
            fillVector_ordered();
            Res[i] = Select8_sort_Vector();
            free_RAM_Vector();
        }
        else if(mode == 'r')
        {
            allocate_RAM_Vector();
            fillVector_random();
            Res[i] = Select8_sort_Vector();
            free_RAM_Vector();
        }
        else if(mode == 'b')
        {
            allocate_RAM_Vector();
            fillVector_back();
            Res[i] = Select8_sort_Vector();
            free_RAM_Vector();
        }
    }
}
void Shell_2_Vector_measurement(char mode)// варіант з вектором
{
    /* Ця процедура заповнює масив вимірів часу для алгоритму

       Шелла № 2 для трьох випадків початкової відсортованості.

       Ця процедура приймає один параметр який може бути:

       d - встановлення початкової прямої відсортованості

       r - встановлення початкової випадкової відсортованості

       b - встановлення початкової оберненої відсортованості
    */
    for(int i = 0; i < measurements_number; i++)
    {
        if(mode == 'o')
        {
            allocate_RAM_Vector();
            fillVector_ordered();
            Res[i] = Shell_2_sort_Vector();
            free_RAM_Vector();
        }
        else if(mode == 'r')
        {
            allocate_RAM_Vector();
            fillVector_random();
            Res[i] = Shell_2_sort_Vector();
            free_RAM_Vector();
        }
        else if(mode == 'b')
        {
            allocate_RAM_Vector();
            fillVector_back();
            Res[i] = Shell_2_sort_Vector();
            free_RAM_Vector();
        }
    }
}
void Select1_Arr3D_measurement(char mode)//варіант з 3D масивом
{
    /* Ця процедура заповнює масив вимірів часу для алгоритму

       прямого вибору № 1 для трьох випадків початкової

       відсортованості.

       Ця процедура приймає один параметр який може бути:

       d - встановлення початкової прямої відсортованості

       r - встановлення початкової випадкової відсортованості

       b - встановлення початкової оберненої відсортованості
    */
    for (int i = 0; i < measurements_number; i++)
    {
        if (mode == 'o')
        {
            allocate_RAM();
            fill_Arr3D_ordered();
            Res[i] = arr3D_Select1();
            free_RAM();
        }
        else if (mode == 'r')
        {
            allocate_RAM();
            fill_Arr3D_random();
            Res[i] = arr3D_Select1();
            free_RAM();
        }
        else if (mode == 'b')
        {
            allocate_RAM();
            fill_Arr3D_back();
            Res[i] = arr3D_Select1();
            free_RAM();
        }
    }
}
void Select8_Arr3D_measurement(char mode)//варіант з 3D масивом
{
    /* Ця процедура заповнює масив вимірів часу для алгоритму

       прямого вибору № 8 для трьох випадків початкової

       відсортованості.

       Ця процедура приймає один параметр який може бути:

       d - встановлення початкової прямої відсортованості

       r - встановлення початкової випадкової відсортованості

       b - встановлення початкової оберненої відсортованості
    */
    for (int i = 0; i < measurements_number; i++)
    {
        if (mode == 'o')
        {
            allocate_RAM();
            fill_Arr3D_ordered();
            Res[i] = arr3D_Select8();
            free_RAM();
        }
        else if (mode == 'r')
        {
            allocate_RAM();
            fill_Arr3D_random();
            Res[i] = arr3D_Select8();
            free_RAM();
        }
        else if (mode == 'b')
        {
            allocate_RAM();
            fill_Arr3D_back();
            Res[i] = arr3D_Select8();
            free_RAM();
        }
    }
}
void Shell_2_Arr3D_measurement(char mode)//варіант з 3D масивом
{
    /* Ця процедура заповнює масив вимірів часу для алгоритму

       Шелла № 2 для трьох випадків початкової відсортованості.

       Ця процедура приймає один параметр який може бути:

       d - встановлення початкової прямої відсортованості

       r - встановлення початкової випадкової відсортованості

       b - встановлення початкової оберненої відсортованості
    */
    for (int i = 0; i < measurements_number; i++)
    {
        if (mode == 'd')
        {
            allocate_RAM();
            fill_Arr3D_ordered();
            Res[i] = arr3D_Shell_2();
            free_RAM();
        }
        else if (mode == 'r')
        {
            allocate_RAM();
            fill_Arr3D_random();
            Res[i] = arr3D_Shell_2();
            free_RAM();
        }
        else if (mode == 'b')
        {
            allocate_RAM();
            fill_Arr3D_back();
            Res[i] = arr3D_Shell_2();
            free_RAM();
        }
    }
}

