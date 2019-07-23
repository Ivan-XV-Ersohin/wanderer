#ifndef PLAYER_HEADER
#define PLAYER_HEADER

#include "Main.hpp"

namespace Lesson{
    class TPlayer{
    protected:
        int X, Y;
        //enum typeOfPlayer {Gamer = 0} tOP;
        sf::Texture PlayerTexture;
       // sf::Sprite PlayerSprite;
    public:
    TPlayer(int aX, int aY);
    ~TPlayer();
    void Draw(sf::RenderWindow *Window, int time);
    //void Death();
    };
}

#endif // PLAYER_HEADER
