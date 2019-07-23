#include "include/Main.hpp"
#include "TApplication.hpp"

int main(int argc, char *argv[]) {
   Lesson::TApplication Application;
   Application.Init();
   Application.Run();
   Application.End();

   return 0;
}
