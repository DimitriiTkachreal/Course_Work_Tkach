#include "batch_table.h"
#include "common.h"
#include "Measurement.h"

void Select1_table_Arr3D()//варіант з 3D масивом
{
    float directly, random, back_d;

    /* Формування таблиці з результатами вимірів для

       алгоритму прямого вибору № 1 для усіх випадків

       відсортованості,згідно із зразком у методичці
    */

    printf("\t\t\tTable for the array: P = %d, M = %d, N = %d |array traversal method #7|\n\n",P_S,M_S,N_S);
    printf("\t\t\tOrdered\t\t\tRandom Ordered\t\tBack Ordered\n\n");
    Select1_Arr3D_measurement('o');
    directly = MeasurementProcessing();
    Select1_Arr3D_measurement('r');
    random = MeasurementProcessing();
    Select1_Arr3D_measurement('b');
    back_d = MeasurementProcessing();
    printf("Select1\t\t\t%.2f\t\t\t%.2f\t\t\t%.2f\n\n", directly, random, back_d);
}
void Select8_table_Arr3D()// варіант з 3D масивом
{
    float directly, random, back_d;

    /* Формування таблиці з результатами вимірів для

       алгоритму прямого вибору № 8 для усіх випадків

       відсортованості,згідно із зразком у методичці
    */

    printf("\t\t\tTable for the array: P = %d, M = %d, N = %d |array traversal method #7|\n\n",P_S,M_S,N_S);
    printf("\t\t\tOrdered\t\t\tRandom Ordered\t\tBack Ordered\n\n");
    Select8_Arr3D_measurement('o');
    directly = MeasurementProcessing();

    Select8_Arr3D_measurement('r');
    random = MeasurementProcessing();

    Select8_Arr3D_measurement('b');
    back_d = MeasurementProcessing ();

    printf("Select8\t\t\t%.2f\t\t\t%.2f\t\t\t%.2f\n\n", directly, random, back_d);
}
void Shell_2_table_Arr3D()//варіант з 3D масивом
{
    float directly, random, back_d;

    /* Формування таблиці з результатами вимірів для

       алгоритму Шелла № 2 для усіх випадків

       відсортованості,згідно із зразком у методичці
    */

    printf("\t\t\tTable for the array: P = %d, M = %d, N = %d |array traversal method #7|\n\n",P_S,M_S,N_S);
    printf("\t\t\tOrdered\t\t\tRandom Ordered\t\tBack Ordered\n\n");
    Shell_2_Arr3D_measurement('o');
    directly = MeasurementProcessing();
    Shell_2_Arr3D_measurement('r');
    random = MeasurementProcessing ();
    Shell_2_Arr3D_measurement('b');
    back_d = MeasurementProcessing ();
    printf("Shell_2\t\t\t%.2f\t\t\t%.2f\t\t\t%.2f\n\n", directly, random, back_d);
}
void Select1_table_Vector()//варіант з вектором
{
    float directly, random, back_d;

     /* Формування таблиці з результатами вимірів для

       алгоритму прямого вибору № 1 для усіх випадків

       відсортованості,згідно із зразком у методичці
    */

    printf("\t\t\t\tTable for the vector: VECTOR = %d\n\n", VECTOR);
    printf("\t\tOrdered\t\t\tRandom Ordered\t\tBack Ordered\n\n");
    Select1_Vector_measurement('o');
    directly = MeasurementProcessing();
    Select1_Vector_measurement('r');
    random = MeasurementProcessing ();
    Select1_Vector_measurement('b');
    back_d = MeasurementProcessing();
    printf("Select1\t\t%.2f\t\t\t%.2f\t\t\t%.2f\n\n", directly, random, back_d);
}
void Select8_table_Vector()//варіант з вектором
{
    float directly, random, back_d;

     /* Формування таблиці з результатами вимірів для

       алгоритму прямого вибору № 8 для усіх випадків

       відсортованості,згідно із зразком у методичці
    */

    printf("\t\t\t\tTable for the vector: VECTOR = %d\n\n", VECTOR);
    printf("\t\tOrdered\t\t\tRandom Ordered\t\tBack Ordered\n\n");
    Select8_Vector_measurement('o');
    directly = MeasurementProcessing();
    Select8_Vector_measurement('r');
    random = MeasurementProcessing ();
    Select8_Vector_measurement('b');
    back_d = MeasurementProcessing();
    printf("Select8\t\t%.2f\t\t\t%.2f\t\t\t%.2f\n\n", directly, random, back_d);
}
void Shell_2_table_Vector()//вваріант з вектором)
{
    float directly, random, back_d;

    /* Формування таблиці з результатами вимірів для

       алгоритму Шелла № 2 для усіх випадків

       відсортованості,згідно із зразком у методичці
    */

    printf("\t\t\t\tTable for the vector: VECTOR = %d\n\n", VECTOR);
    printf("\t\tOrdered\t\t\tRandom Ordered\t\tBack Ordered\n\n");
    Shell_2_Vector_measurement('o');
    directly = MeasurementProcessing ();
    Shell_2_Vector_measurement('r');
    random = MeasurementProcessing ();
    Shell_2_Vector_measurement('b');
    back_d = MeasurementProcessing ();
    printf("Shell_2\t\t%.2f\t\t\t%.2f\t\t\t%.2f\n\n", directly, random, back_d);
}
void batch_mode()//вивід всіх таблиць для всіх випадків відосртованості з усіма алгоритмами і масивами
{
    float directly, random, back_d;
    printf("\t\t\tTable for the array: P = %d, M = %d, N = %d |array traversal method #7|\n\n",P_S,M_S,N_S);
    printf("\t\t\tOrdered\t\t\tRandom Ordered\t\tBack Ordered\n\n");
    Select1_Arr3D_measurement('o');
    directly = MeasurementProcessing();
    Select1_Arr3D_measurement('r');
    random = MeasurementProcessing();
    Select1_Arr3D_measurement('b');
    back_d = MeasurementProcessing();
    printf("Select1\t\t\t%.2f\t\t\t%.2f\t\t\t%.2f\n\n", directly, random, back_d);
    Select8_Arr3D_measurement('o');
    directly = MeasurementProcessing();
    Select8_Arr3D_measurement('r');
    random = MeasurementProcessing();
    Select8_Arr3D_measurement('b');
    back_d = MeasurementProcessing ();
    printf("Select8\t\t\t%.2f\t\t\t%.2f\t\t\t%.2f\n\n", directly, random, back_d);
    Shell_2_Arr3D_measurement('o');
    directly = MeasurementProcessing();
    Shell_2_Arr3D_measurement('r');
    random = MeasurementProcessing ();
    Shell_2_Arr3D_measurement('b');
    back_d = MeasurementProcessing ();
    printf("Shell_2\t\t\t%.2f\t\t\t%.2f\t\t\t%.2f\n\n", directly, random, back_d);
    printf("\t\t\t\tTable for the vector: VECTOR = %d\n\n", VECTOR);
    printf("\t\t\tOrdered\t\t\tRandom Ordered\t\tBack Ordered\n\n");
    Select1_Vector_measurement('o');
    directly = MeasurementProcessing();
    Select1_Vector_measurement('r');
    random = MeasurementProcessing ();
    Select1_Vector_measurement('b');
    back_d = MeasurementProcessing();
    printf("Select1\t\t\t%.2f\t\t\t%.2f\t\t\t%.2f\n\n", directly, random, back_d);
     Select8_Vector_measurement('o');
    directly = MeasurementProcessing();
    Select8_Vector_measurement('r');
    random = MeasurementProcessing ();
    Select8_Vector_measurement('b');
    back_d = MeasurementProcessing();
    printf("Select8\t\t\t%.2f\t\t\t%.2f\t\t\t%.2f\n\n", directly, random, back_d);
    Shell_2_Vector_measurement('o');
    directly = MeasurementProcessing ();
    Shell_2_Vector_measurement('r');
    random = MeasurementProcessing ();
    Shell_2_Vector_measurement('b');
    back_d = MeasurementProcessing ();
    printf("Shell_2\t\t\t%.2f\t\t\t%.2f\t\t\t%.2f\n\n", directly, random, back_d);
}
