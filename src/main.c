#include <stdio.h>

#include "canvas.h"
#include "editor.h"

int main()
{
    int choice;

    Shape s;

    initCanvas();

    while(1)
    {
        printf("\n===== 2D Graphics Editor =====\n");

        printf("1. Add Rectangle\n");
        printf("2. Add Line\n");
        printf("3. Add Triangle\n");
        printf("4. Add Circle\n");
        printf("5. Delete Shape\n");
        printf("6. Display Picture\n");
        printf("7. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                s.type=1;

                printf("x y width height : ");
                scanf("%d%d%d%d",
                      &s.p1,
                      &s.p2,
                      &s.p3,
                      &s.p4);

                addShape(s);
                redrawCanvas();
                displayCanvas();
                break;

            case 2:

                s.type=2;

                printf("x1 y1 x2 y2 : ");
                scanf("%d%d%d%d",
                      &s.p1,
                      &s.p2,
                      &s.p3,
                      &s.p4);

                addShape(s);
                redrawCanvas();
   displayCanvas();
                break;

            case 3:

                s.type=3;

                printf("x y height : ");
                scanf("%d%d%d",
                      &s.p1,
                      &s.p2,
                      &s.p3);

                addShape(s);
                redrawCanvas();
displayCanvas();
                break;

            case 4:

                s.type=4;

                printf("centerX centerY radius : ");
                scanf("%d%d%d",
                      &s.p1,
                      &s.p2,
                      &s.p3);

                addShape(s);
                redrawCanvas();
displayCanvas();
                break;

            case 5:
            {
                int index;

                listShapes();

                printf("Enter index: ");
                scanf("%d",&index);

                deleteShape(index);

                redrawCanvas();
displayCanvas();
                break;
            }

            case 6:

                displayCanvas();

                break;

            case 7:

                return 0;
        }
    }

    return 0;
}