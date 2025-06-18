#include "common.h"
#include "Filling_vector.h"

void fillVector_ordered()  //заповнення вектору строго за збільшенням
{
    for (int i = 0; i < VECTOR; i++)
    {
        Vector[i] = i + 1;
    }
}
void fillVector_random() //заповнення вектору "випадковими" числами
{
    for (int i = 0; i < VECTOR; i++)
    {
        Vector[i] = rand()%VECTOR;
    }
}
void fillVector_back() //заповнення вектору строго за зменшенням
{
    for (int i = 0; i < VECTOR; i++)
    {
        Vector[i] = VECTOR - i;
    }
}
