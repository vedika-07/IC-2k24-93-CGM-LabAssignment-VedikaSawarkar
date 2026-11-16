#include <graphics.h>
#include <conio.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    // 1. Straight Line
    line(50, 100, 250, 100);

    // 2. Circle
    circle(150, 250, 70);

    // 3. Rectangle
    rectangle(350, 180, 550, 300);

    // 4. Triangle
    line(650, 180, 580, 320);
    line(580, 320, 720, 320);
    line(720, 320, 650, 180);

    // Keep the window open
    getch();
}
