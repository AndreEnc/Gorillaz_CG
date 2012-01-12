#include <GL/glut.h>
#include <cggl/App.h>

#include "GorillazApp.h"
#include "gorillaz.h"

using namespace cggl;

void GorillazApp::CreateScene() 
{
}

void GorillazApp::Draw()
{
	App::Draw();
}
void GorillazApp::Update(int deltaTimeMilis)
{
	App::Update(deltaTimeMilis);
}

void main(int argc, char **argv) {
  GorillazApp app;
  app.Run(argc, argv);
}