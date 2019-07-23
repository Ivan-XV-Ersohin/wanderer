#ifndef MAPWIDGET_HEADER
#define MAPWIDGET_HEADER

#include "Main.hpp"

namespace Lesson {
class TMapWidget{
protected:
    int X, Y, Width, Heigh;
    sf::Texture SomeTexture;
public:
    TMapWidget(int aX, int aY, int aWidth, int aHeigh);
    ~TMapWidget();
    void Draw(sf::RenderWindow *Window);
};
}
#endif // MAPWIDGET_HEADER
