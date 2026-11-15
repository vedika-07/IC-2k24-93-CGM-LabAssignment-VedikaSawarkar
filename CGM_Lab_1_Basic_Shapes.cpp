#include <graphics.h>

int main()
{
    // Create graphics window
    initwindow(800, 600, "Basic Graphics Primitives");

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

    // Close graphics window
    closegraph();

    return 0;
}
      
