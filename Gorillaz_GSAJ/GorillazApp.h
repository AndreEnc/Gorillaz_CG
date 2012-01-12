#include <GL/glut.h>
#include <cggl/App.h>

#include "Gorillaz.h"


class GorillazApp : public cggl::App {

  Gorillaz * gorillaz;

public: 
  void CreateScene();
  void Draw();
  void Update(int deltaTimeMilis);
};
