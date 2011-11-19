// Include the Irrlicht header
#include "irrlicht.h"

// Irrlicht Namespaces
using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;


int main()
{
    IrrlichtDevice *irrDevice = createDevice(EDT_OPENGL,
                                          dimension2d<u32>(512, 384),
                                          16,
                                          false,
                                          false,
										  false,
                                          0);
                                          
    irrDevice->setWindowCaption(L"Irrlicht and CMake Hello World");
    
    IVideoDriver* irrDriver = irrDevice->getVideoDriver();
    ISceneManager* irrSceneMgr = irrDevice->getSceneManager();
    IGUIEnvironment* irrGUIEnv = irrDevice->getGUIEnvironment();

    irrGUIEnv->addStaticText(
            L"Hello World! This is the Irrlicht OpenGL engine!",
	        rect<int>(10,10,200,30), true, true, 0, -1);
    
    while(irrDevice->run())
    { 
        irrDriver->beginScene(true, true, SColor(0,192,192,192));
                
                irrSceneMgr->drawAll();
                irrGUIEnv->drawAll();
                
	    irrDriver->endScene();
	}
 
    irrDevice->drop();

    return(0);
}

