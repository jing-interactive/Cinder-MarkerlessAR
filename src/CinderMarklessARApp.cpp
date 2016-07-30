#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"
#include "CinderOpenCV.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class CinderMarklessARApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void CinderMarklessARApp::setup()
{
}

void CinderMarklessARApp::mouseDown( MouseEvent event )
{
}

void CinderMarklessARApp::update()
{
}

void CinderMarklessARApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( CinderMarklessARApp, RendererGl )
