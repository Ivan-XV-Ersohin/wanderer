#include "TPlayer.hpp"

namespace Lesson{
    TPlayer::TPlayer(int aX, int aY):
    X(aX),
    Y(aY),
    PlayerTexture(PlayerTexture.loadFromFile("MainCharacter.png")){
        //PlayerTexture.create(50, 50);
        //PlayerTexture.setRepeated(true);

    }

    TPlayer::~TPlayer(){

    }

    void TPlayer::Draw(sf::RenderWindow *Window, int time){
    sf::Sprite PlayerSprite;
    PlayerSprite.setTexture(TPlayer::PlayerTexture);
    PlayerSprite.setPosition(TPlayer::X+time/10.0, TPlayer::Y+time/10.0);
    int CurrentFrame = (time%360)/40;
    if (CurrentFrame >= 8)
        CurrentFrame = 0;
    PlayerSprite.setTextureRect(sf::IntRect(35 * int(CurrentFrame), 0, 35, 50));
    Window->draw(PlayerSprite);
    }
}
