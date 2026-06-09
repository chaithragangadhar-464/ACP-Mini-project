//MAnages objects
//add delete and modify and redraw after modifying

#ifndef EDITOR_H
#define EDITOR_H
#define MAX_OBJECTS 100

typedef struct {
    int type;

    int p1;
    int p2;
    int p3;
    int p4;
    int p5;
}Shape;

void addShape(Shape s);
void deleteShape(int index);
void modifyShape(int index,Shape s);
void redrawCanvas();
void listShapes();

#endif
