#include "TMapWidget.hpp"

namespace Lesson {
    TMapWidget::TMapWidget(int aX, int aY, int aWidth, int aHeigh):
        X(aX),
        Y(aY),
        Width(aWidth),
        Heigh(aHeigh),
        SomeTexture(){
        SomeTexture.loadFromFile("Map.png", sf::IntRect(0,0,400,400));
        }

    TMapWidget::~TMapWidget() {

    }

    void TMapWidget::Draw(sf::RenderWindow *Window) {
        sf::Sprite SpriteStuff;
        SpriteStuff.setTexture(SomeTexture);
        SpriteStuff.setPosition(X, Y);
        float WidgetWidth = (int)Width/(float)SomeTexture.getSize().x;
        float WidgetHeigh = (int)Heigh/(float)SomeTexture.getSize().y;
        SpriteStuff.setScale(WidgetWidth, WidgetHeigh);

        Window->draw(SpriteStuff);
        }
}
