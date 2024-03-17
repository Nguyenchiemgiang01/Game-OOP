#include "Luoi.h"
#include "winbgim.h"
#include "Cell.h"
#include "Virut.h"
#include <fstream> 
#include <iostream>
using namespace std;

Luoi:: Luoi(){
	ds = new Cell*[39];
	for(int i=0;i<39;i++){
		ds[i] = new Cell[25];
	}
	for(int x=0;x<39;x++)
		for(int y=0;y<25;y++)
			ds[x][y].nhap(x*30+15,y*30+10);
}

void Luoi:: background(){
	initwindow(1500,800);
	setbkcolor(11);
	cleardevice();
	setwindowtitle("Diet Virut Corona");
}
void Luoi:: viewgame(){
	setbkcolor(9);
	setfillstyle(1,9);
	bar(1200,10,1500,760);
	
	
	setcolor(5);
	rectangle(1200,10,1500,760);
	rectangle(14,9,1186,761);
	
	fstream F("data.txt",ios::in);
	char temp[255];
	F.getline(temp,255);
	setcolor(0);
	settextstyle (3,0,1);
	settextjustify(0,1);
	outtextxy(1205,50,temp);
	F.getline(temp,255);
	outtextxy(1205,100,temp);
	F.close();
}
void Luoi:: khoitaoVR(int n){
	SLvr = n;
	vr = new Virut[n];
	for(int i=0;i<n;i++){
		vr[i].nhap();
		//ds[vr[i].x][vr[i].y].hinh_vr(i);
		delay((vr->x+vr->y)*100);
	}
}
// void Luoi:: vevr(){
// 	vr.khoitao(5);
// 	int xx,yy;
// 	Virut* ptrVR;
// 	for (int i=0;i<5;i++){
// 		vr.get(ptrVR,i);
// 		xx = (*ptrVR).x;
// 		yy = (*ptrVR).y;
// 		ds[xx][yy].hinh_vr(5);
// 	}
// }
void Luoi:: vevr(){
	for(int i= 0; i<SLvr;i++){
		ds[vr[i].x][vr[i].y].hinh_vr(i);
	}
}
void Luoi:: vehinh(char c){
	setwritemode(0);
	ds[nv.x][nv.y].hinh_nv(11);
	nv.dichuyen(c);
	ds[nv.x][nv.y].hinh_nv(14);
}
void Luoi:: ketthuc(){
	getch();
	closegraph();
}
