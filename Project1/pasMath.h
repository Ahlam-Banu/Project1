#pragma once
// a header file in C/C++ usually contains 3 parts: 1. Constant definition
// 2. function prototype, 3. structure definition
// 1. constant definition
#define WINDOWS // comment this line if u want to port application back to Linux
#define MAX_LINE 12
enum COLORS { BLACK = 30, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE };
//We only needed ton initialize the first one a.k.a BLACK 
//after this it gets automatically assigned that RED is 31 and so on...

// 2. function prototypes/declarations
int binom(int a, int b);
int fact(int a);

void resetColors(void);
void setForeground(int);//we can  add "int color" as arguement but
void setBackground(int);//its not necesary
void clearScreen(void);
void gotoXY(x, y);//LOCATION, argument 1 is horizontal axis point & argumnet2
