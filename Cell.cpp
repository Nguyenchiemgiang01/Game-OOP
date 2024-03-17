#include "Cell.h"
#include "winbgim.h"
Cell:: Cell (){
	x=1;
	y=1;
}
void Cell:: nhap(int xx,int yy){
	x=xx;
	y=yy;
}

void Cell:: hinh_nv(int n){
	setfillstyle(1,n);
	bar(x,y,x+30,y+30);
}
void Cell:: hinh_vr(int color){
	setcolor(color);
	sector(x+15,y+15,0,360,15,15);
}
