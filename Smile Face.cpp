#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <stdio.h>


int main()
{


    int gr = DETECT, gm;
    initgraph(&gr, &gm, " ");


    setcolor(YELLOW);
    circle(400, 200, 100);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(401, 200, YELLOW);

    // Set color of background to black
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);

    // Use fill ellipse for creating eyes
    fillellipse(360, 190, 20, 10);
    fillellipse(440, 190, 20, 10);

    // Use ellipse for creating mouth
    ellipse(400, 215, 210, 340, 30, 15);
    ellipse(400, 215, 210, 340, 30, 16);
    ellipse(400, 215, 210, 340, 30, 17);
    ellipse(400, 215, 210, 340, 30, 18);
    ellipse(400, 215, 210, 340, 30, 19);
    ellipse(400, 215, 210, 340, 30, 20);

    getch();

    // closegraph function closes the
    // graphics mode and deallocates
    // all memory allocated by
    // graphics system
    closegraph();

    return 0;
}


