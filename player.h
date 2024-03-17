#ifndef PLAYER_H
#define PLAYER_H
class Player{
    public:
        int x,y;
    public:
        Player(int x=5,int y=5);
        void dichuyen(char c);
        void up();
        void down();
        void left();
        void right();
};
#endif