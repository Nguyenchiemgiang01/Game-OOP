#include "Virut.h"
#include <time.h>
#include <stdlib.h>

int random(int min,int max){
    srand((int)time(0));
    return min + rand() % (max + 1 - min);
}
Virut:: Virut(){
    x= random(0,38);
    y= random(0,24);
    color = 5;
}
// Virut:: Virut(int x,int y,int color){
//     this->x=x;
//     this->y=y;
//     this->color = color;
// }
void Virut:: set(int x,int y,int color){
    this->x=x;
    this->y=y;
    this->color = color;
}
void Virut:: nhap(){
    x= random(0,38);
    y= random(0,24);
    color = 5;
}