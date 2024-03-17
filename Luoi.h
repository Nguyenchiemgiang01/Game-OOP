#ifndef LUOI_H
#define LUOI_H
#include "Cell.h"
#include "Player.h"
#include "Virut.h"

class Luoi{
	private:
		Cell **ds;
		Player nv;
		Virut *vr;
		int SLvr;
	public:
		Luoi();
		void background();
		void viewgame();
		void khoitaoVR(int);
		void vehinh(char c);
		void vevr();
		void ketthuc();

};
#endif
