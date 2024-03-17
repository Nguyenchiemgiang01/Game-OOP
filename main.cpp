#include "Luoi.h"
#include <conio.h>
#include <string>
int main(){
	Luoi L;
	L.background();
	L.viewgame();
	L.khoitaoVR(5);
	L.vevr();
	char c,d;
	L.vehinh(0);
	while(true){
		c = getch();
		d = getch();
		L.vehinh(d);
	}
	L.ketthuc();
	return 0;
}
