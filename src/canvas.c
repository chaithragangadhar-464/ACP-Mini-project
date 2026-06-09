#include <stdio.h>
#include "canvas.h"

char canvas[ROWS][COLS];

void initCanvas()
{
    int i,j;

    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
        {
            canvas[i][j]='_';
        }
    }
}

void displayCanvas()
{   printf("canvas[5][5] = %c\n", canvas[5][5]);
    int i,j;

    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
        {
            printf("%c",canvas[i][j]);
           
        }

        printf("\n");
    }
}