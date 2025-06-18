#include "common.h"
#include "main_menu.h"
#include "batch_table.h"
#include "Filling_arr3D.h"
#include "Filling_vector.h"
#include "sort_Vector.h"
#include "sort_arr3D.h"
#include <windows.h>

void Alg_Select1()//процедура в меню для вибору структури даних в якій буде сортування прямим вибором № 1
{
    int v;
    while(1)
    {
        system("cls");
        printf("Select data structure for sorting by Algorithm - Select1 :\n");
        printf("1. Arr3D\n");
        printf("2. Vector\n");
        printf("3. Return\n");
        if (scanf("%d", &v) != 1)
        {
            printf("Invalid input. Please enter a number.\n");
            system("pause");
            while (getchar() != '\n');
            continue;
        }
        switch (v)
        {
            case 1:
            {
                Select1_table_Arr3D();
                system("pause");
                break;
            }
            case 2:
            {
                Select1_table_Vector();
                system("pause");
                break;
            }
            case 3:
            {
                printf("Returning...\n");
                Sleep(2000);
                break;
            }
            default:
            {
                printf("Impossible mode. Please try again.\n");
                Sleep(1000);
                break;
            }
        }
        if (v == 3) break;
    }
}
void Alg_Select8()//процедура в меню для вибору структури даних в якій буде сортування прямим вибором номер 8
{
   int y;
    while(1)
    {
        system("cls");
        printf("Select data structure for sorting by Algorithm - Select8 :\n");
        printf("1. Arr3D\n");
        printf("2. Vector\n");
        printf("3. Return\n");
        if (scanf("%d", &y) != 1)
        {
            printf("Invalid input. Please enter a number.\n");
            system("pause");
            while (getchar() != '\n');
            continue;
        }
        switch (y)
        {
            case 1:
            {
                Select8_table_Arr3D();
                system("pause");
                break;
            }
            case 2:
            {
                Select8_table_Vector();
                system("pause");
                break;
            }
            case 3:
            {
                printf("Returning...\n");
                Sleep(2000);
                break;
            }
            default:
            {
                printf("Impossible mode. Please try again.\n");
                Sleep(1000);
                break;
            }
        }
        if (y == 3) break;
    }
}
void Alg_Shell_2()//процедура в меню для вибору структури даних в якій буде сортування методом Шелла номер 2
{
    int y;
    while(1)
    {
        system("cls");
        printf("Select data structure for sorting by Algorithm - Shell_2 :\n");
        printf("1. Arr3D\n");
        printf("2. Vector\n");
        printf("3. Return\n");
        if (scanf("%d", &y) != 1)
        {
            printf("Invalid input. Please enter a number.\n");
            Sleep(1000);
            while (getchar() != '\n');
            continue;
        }
        switch (y)
        {
            case 1:
            {
                Shell_2_table_Arr3D();
                system("pause");
                break;
            }
            case 2:
            {
                Shell_2_table_Vector();
                system("pause");
                break;
            }
            case 3:
            {
                printf("Returning...\n");
                Sleep(2000);
                break;
            }
            default:
            {
                printf("Impossible mode. Please try again.\n");
                Sleep(1000);
                break;
            }
        }
        if (y == 3) break;
    }
}
void menu()//процедура головного меню
{
    int x;
    while(1)
    {
        system("cls");
        printf("MAIN MENU:\n");
        printf("1. Algorithm - Select1\n");
        printf("2. Algorithm - Select8\n");
        printf("3. Algorithm - Shell_2\n");
        printf("4. Batch_mode:\n");
        printf("5. Exit\n");
        printf("Select algorithm or mode:\n");
        if (scanf("%d", &x) != 1)
        {
            printf("Invalid input. Please enter a number.\n");
            Sleep(1000);
            while (getchar() != '\n');
            continue;
        }
        switch (x)
        {
            case 1:
            {
                Alg_Select1();
                continue;
            }
            case 2:
            {
                Alg_Select8();
                continue;
            }
            case 3:
            {
                Alg_Shell_2();
                continue;
            }
            case 4:
            {
                batch_mode();
                system("pause");
                continue;
            }
            case 5:
            {
                exit(0);
            }
            default:
            {
                printf("Impossible mode. Please try again.\n");
                Sleep(1000);
            }
        }
    }
}
