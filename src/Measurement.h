#ifndef MEASUREMENT_H_INCLUDED
#define MEASUREMENT_H_INCLUDED

#include <time.h>
#define measurements_number 28
#define rejected_number 2
#define min_max_number 3

extern clock_t Res[measurements_number];
float MeasurementProcessing();// функція обробки і усереднення значень вимірів часу роботи алгоритму

void Select1_Vector_measurement(char mode);
void Select8_Vector_measurement(char mode);
void Shell_2_Vector_measurement(char mode);

void Select1_Arr3D_measurement(char mode);
void Select8_Arr3D_measurement(char mode);
void Shell_2_Arr3D_measurement(char mode);


#endif // MEASUREMENT_H_INCLUDED
