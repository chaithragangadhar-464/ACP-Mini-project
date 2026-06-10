#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include "canvas.h"
#include "shapes.h"

void drawRectangle(int x,int y,int width,int height)
{   
    int i,j;

    for(i=y;i<y+height;i++)
    {
        for(j=x;j<x+width;j++)
        {
            if(i>=0 && i<ROWS &&
               j>=0 && j<COLS)
            {
                canvas[i][j]='*';

            }
        }
    }
}

void drawTriangle(int x,int y,int height)
{    printf("Drawing rectangle");
    int i,j;

    for(i=0;i<height;i++)
    {
        for(j=-i;j<=i;j++)
        {
            int row=y+i;
            int col=x+j;

            if(row>=0 && row<ROWS &&
               col>=0 && col<COLS)
            {
                canvas[row][col]='*';
            }
        }
    }
}

void drawCircle(int xc,int yc,int r)
{
    int x,y;

    for(y=0;y<ROWS;y++)
    {
        for(x=0;x<COLS;x++)
        {
            int dx=x-xc;
            int dy=y-yc;

            if(dx*dx + dy*dy <= r*r)
            {
                canvas[y][x]='*';
            }
        }
    }
}

void drawLine(int x1,int y1,int x2,int y2)
{
    int dx=abs(x2-x1);
    int dy=abs(y2-y1);

    int sx=(x1<x2)?1:-1;
    int sy=(y1<y2)?1:-1;

    int err=dx-dy;

    while(1)
    {
        if(y1>=0 && y1<ROWS &&
           x1>=0 && x1<COLS)
        {
            canvas[y1][x1]='*';
        }

        if(x1==x2 && y1==y2)
            break;

        int e2=2*err;

        if(e2>-dy)
        {
            err-=dy;
            x1+=sx;
        }

        if(e2<dx)
        {
            err+=dx;
            y1+=sy;
        }
    }
}