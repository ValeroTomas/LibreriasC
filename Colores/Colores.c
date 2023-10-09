#include "Colores.h"

void color(int color)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

/** JERONIMO PERALES - TOMÁS VALERO - JOAQUIN TABORDA */
