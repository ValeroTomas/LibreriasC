#include "Colores.h"

void color(int color)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

/** JERONIMO PERALES - TOM�S VALERO - JOAQUIN TABORDA */
