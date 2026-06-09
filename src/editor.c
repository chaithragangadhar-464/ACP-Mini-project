#include <stdio.h>

#include "editor.h"
#include "canvas.h"
#include "shapes.h"

Shape objects[MAX_OBJECTS];
int count=0;

void addShape(Shape s)
{   
    if(count<MAX_OBJECTS)
    {
        objects[count]=s;
        count++;

        printf("Shape stored. Count = %d\n",count);
    }
}

void deleteShape(int index)
{
    int i;

    if(index<0 || index>=count)
        return;

    for(i=index;i<count-1;i++)
    {
        objects[i]=objects[i+1];
    }

    count--;
}

void modifyShape(int index, Shape s)
{
    if(index>=0 && index<count)
    {
        objects[index]=s;
    }
}

void redrawCanvas()
{   printf("redraw canavs called");
    int i;

    initCanvas();

    for(i=0;i<count;i++)
    {
        switch(objects[i].type)
        {
            case 1:
                drawRectangle(
                    objects[i].p1,
                    objects[i].p2,
                    objects[i].p3,
                    objects[i].p4
                );
                break;

            case 2:
                drawLine(
                    objects[i].p1,
                    objects[i].p2,
                    objects[i].p3,
                    objects[i].p4
                );
                break;

            case 3:
                drawTriangle(
                    objects[i].p1,
                    objects[i].p2,
                    objects[i].p3
                );
                break;

            case 4:
                drawCircle(
                    objects[i].p1,
                    objects[i].p2,
                    objects[i].p3
                );
                break;
        }
    }
}

void listShapes()
{
    int i;

    for(i=0;i<count;i++)
    {
        printf("%d : Shape Type %d\n",
               i,
               objects[i].type);
    }
}