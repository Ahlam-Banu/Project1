//Now we r going to  add some color to the screen, manipulate it.
//Also reset the  screen (5th EX)

#include <stdio.h>
#include "pasMath.h"
#ifdef WINDOWS 
#include <windows.h>
#endif

int main(void) {
    int n, k;
#ifdef WINDOWS
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD mode = 0;
    GetConsoleMode(h, &mode);
    mode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(h, mode);
#endif

    clearScreen();
    setForeground(YELLOW);
    setBackground(BLUE);
    gotoXY(1, 15);
    printf("Pascal Trinangle \n");
    resetColors();
    for (n = 0; n < MAX_LINE; n++) {
        for (k = 0; k < MAX_LINE - n - 1; k++) printf("  ");//we need to make
                                                            // space b4 writing numbers

        setForeground(RED+n%6);
        for (k = 0; k <= n; k++) {
            printf("%-4d", binom(n, k));
        }
        printf("\n");
    }
    resetColors();
    printf("\n");// to get rid of that empty colored line
    return 0;
}

/*
//SYMMETRICAL Pascal Triangle with each row a different color(4th EX)
#include <stdio.h>
#include "pasMath.h"

int main(void) {
    int n, k;
    char str[100];
    for (n = 0; n < MAX_LINE; n++) {
        //we need to make spaces b4 writing numbers to get symmetrical pascal t$
        for(k=0; k<MAX_LINE-n-1; k++)printf("  "); //2 spaces are given because$
        sprintf(str, "\033[0;3%dm", n%7+1);
        printf("%s", str);
        for (k = 0; k <= n; k++) {              //we are seperating the numbers$
            printf("%-4d", binom(n, k));            //4d
        }
        printf("\n");
    }
    printf("\033[0m\n");
    return 0;
}
*/
/*
// Pascal Triangle with color, chose RED here(3rd EX)
#include <stdio.h>
#include "pasMath.h"

int main(void) {
    int n, k;
    char str[100]="\033[0;31m";
    for (n = 0; n < MAX_LINE; n++) {
        //we need to make spaces b4 writing numbers to get symmetrical pascal t$
        for(k=0; k<MAX_LINE-n-1; k++) printf("  "); //2 spaces are given becaus$
        printf("%s",str);
        str[8]= str[8+1];
        if(str[8]=='8') str[8]='1';
        for (k = 0; k <= n; k++) {              //we are seperating the numbers$
            printf("%-4d", binom(n, k));            //4d
        }
        printf("\n");
    }
    printf("\033[0m\n");
    return 0;
}
*/

/*
//SYMMETRICAL Pascal Triangle (2nd EX)
#include <stdio.h>
#include "pasMath.h"

int main(void) {
    int n, k;
    for (n = 0; n < MAX_LINE; n++) {
        //we need to make spaces b4 writing numbers to get symmetrical pascal triangle
        for(k=0; k<MAX_LINE-n-1; k++)printf("  "); //2 spaces are given because of the number of digits
        for (k = 0; k <= n; k++) {				//we are seperating the numbers by
            printf("%-4d", binom(n, k));			//4d
        }
        printf("\n");
    }
    return 0;
}
*/

/*
// this project displays a Pascal triangle up to N rows (1st EX.)
#include <stdio.h>
#include "pasMath.h"

int main(void) {
    int n, k;
    for (n = 0; n < MAX_LINE; n++) {
        for (k = 0; k <= n; k++) {
            printf("%4d", binom(n, k));
        }
        printf("\n");
    }
    return 0;
}
*/
