#include "Player.h"

Player:: Player(int x,int y):x(x),y(y){

}
void Player:: dichuyen(char c){
    int t=c;
    switch (t) {
        case 72 : up();break;
        case 80 : down();break;
        case 75 : left();break;
        case 77 : right();break;
    }
}
void Player:: up(){
    if(y>0) y--;
}
void Player:: down(){
    if(y<24) y++;
}
void Player:: left(){
    if(x>0) x--;
}
void Player:: right(){
    if(x<38) x++;
}