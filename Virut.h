#ifndef VIRUT_H
#define VIRUT_H
class Virut{
    public:
        int x,y,color;
        Virut *next;
        Virut();
        //Virut(int =0,int =0,int =0);
        void set(int,int,int);
        void nhap();
};
int random(int min,int max);
#endif