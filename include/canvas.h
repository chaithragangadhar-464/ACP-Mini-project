#ifndef CANVAS_H    //ifnd = if not defined
#define CANVAS_H

#define ROWS 30
#define COLS 60

extern char canvas[ROWS][COLS];   // extern = this variable is defined somewhere else . im only declaring it here

void initCanvas();
void displayCanvas();

#endif  

//this creates canvas initialize and display that 
//is creates blank spaces using '_'   