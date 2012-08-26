#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class HelloWorldApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
private:
    float red, green, blue;
};

void HelloWorldApp::setup()
{
    red = 0;
    green = .5;
    blue = 1.0;
}

void HelloWorldApp::mouseDown( MouseEvent event )
{
}

void HelloWorldApp::update()
{
    red+=.01;
    green+=.025;
    blue+=.003;
    if(red > 1)
        red = 0;
    if(green > 1)
        green = 0;
    if(blue  > 1)
       blue = 0;
}

void HelloWorldApp::draw()
{
	// clear out the window with black
	gl::clear( Color( red, green, blue ) ); 
}

CINDER_APP_BASIC( HelloWorldApp, RendererGl )
