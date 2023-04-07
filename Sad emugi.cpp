#include<iostream>
#include<graphics.h>

int main()
{

    initwindow(1000,600,"Rahima Bagum");

     setcolor(WHITE);
     circle(300,300,150);
     setfillstyle(SOLID_FILL,YELLOW);
     floodfill(274,284,WHITE);



     setcolor(BLACK);
     circle(240,260,45);
     setfillstyle(SOLID_FILL,WHITE);
     floodfill(230,260,BLACK);

     setcolor(BLACK);
     ellipse(240,280,0,360,20,25);
     setfillstyle(SOLID_FILL,BLACK);
     floodfill(240,280,BLACK);


     setcolor(BLACK);
     circle(340,260,45);
     setfillstyle(SOLID_FILL,WHITE);
     floodfill(360,260,BLACK);



     setcolor(BLACK);
     ellipse(340,280,0,360,20,25);
     setfillstyle(SOLID_FILL,BLACK);
     floodfill(340,280,BLACK);


     setcolor(BLACK);
     ellipse(300,390,0,180,70,40);
     ellipse(300,390,0,180,69,39);
     ellipse(300,390,0,180,68,38);
     ellipse(300,390,0,180,67,37);
     ellipse(300,390,0,180,66,36);


    getch();
    return 0;
}

