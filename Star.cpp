#include<iostream>
#include<graphics.h>

int main()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

     setcolor(YELLOW);
     line(199,300,300,100);
     line(300,100,399,300);
     line(399,300,150,180);
     line(150,180,430,180);
     line(430,180,199,300);
     setfillstyle(6,YELLOW );
     floodfill(210, 285, YELLOW);
     floodfill(300, 102, YELLOW);
     floodfill(390, 285, YELLOW);
     floodfill(155, 181, YELLOW);
     floodfill(425, 181, YELLOW);

    getch();
    closegraph();

    return 0;
}
