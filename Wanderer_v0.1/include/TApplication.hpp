#ifndef APPLICATION_TYPE_HEADER
#define APPLICATION_TYPE_HEADER

#include "Main.hpp"
#include "TMapWidget.hpp"
#include "TPlayer.hpp"

namespace Lesson {
	class TApplication {
         protected:
            sf::RenderWindow *Window;
            TMapWidget *MapWidget;
            TPlayer *Player;
         public:
			TApplication();
			~TApplication();
			void Init();
			void Run();
			void End();
	};
}

#endif
