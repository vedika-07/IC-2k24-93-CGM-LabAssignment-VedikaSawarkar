#include<graphics.h>
#include<cmath>
int main(){
    int gd=DETECT;
    int gm;
    initgraph(&gd,&gm,(char*)"");
    int x1=100,y1=100;
    int x2=500,y2=300;
    float dx=x2-x1;
    float dy=y2-y1;

    float m=dy/dx;
    float x=x1;
    float y=y1;

    if(fabs(m)<=1){
        while(x<=x2){
            putpixel(round(x),round(y),WHITE);
            x=x+1;
            y=y+m;
        }
    }
    else{
        while(y<=y2){
            putpixel(round(x),round(y),WHITE);
            y=y+1;
            x=x+(1/m);
        }
    }
    getch();
    closegraph();
    return 0;
}
            
   
