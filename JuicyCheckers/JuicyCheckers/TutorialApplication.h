/*
-----------------------------------------------------------------------------
Filename:    TutorialApplication.h
-----------------------------------------------------------------------------

This source file is part of the
___                 __    __ _ _    _
/___\__ _ _ __ ___  / / /\ \ (_) | _(_)
//  // _` | '__/ _ \ \ \/  \/ / | |/ / |
/ \_// (_| | | |  __/  \  /\  /| |   <| |
\___/ \__, |_|  \___|   \/  \/ |_|_|\_\_|
|___/
Tutorial Framework (for Ogre 1.9)
http://www.ogre3d.org/wiki/
-----------------------------------------------------------------------------
*/

#ifndef __TutorialApplication_h_
#define __TutorialApplication_h_

#include <OgreRoot.h>
#include <OISEvents.h>
#include <OISInputManager.h>
#include <OISKeyboard.h>
#include <OISMouse.h>
#include <OgreWindowEventUtilities.h>

//---------------------------------------------------------------------------

class TutorialApplication : public Ogre::WindowEventListener, public Ogre::FrameListener
{
public:
	TutorialApplication(void);
	virtual ~TutorialApplication(void);
	bool go();

protected:
	// Ogre::WindowEventListener
	virtual void windowResized(Ogre::RenderWindow* rw);
	virtual void windowClosed(Ogre::RenderWindow* rw);

	// Ogre::FrameListener
	virtual bool frameRenderingQueued(const Ogre::FrameEvent& evt);

	// Methods for initialising the game
	void createScene();
	void initInput();

private:
	Ogre::Root* mRoot;
	Ogre::String mResourcesCfg;
	Ogre::String mPluginsCfg;

	Ogre::RenderWindow* mWindow;

	Ogre::SceneManager* mSceneMgr;
	Ogre::Camera* mCamera;

	// Member variables for the OIS input
	OIS::InputManager* mInputManager;
	OIS::Mouse* mMouse;
	OIS::Keyboard* mKeyboard;

};

//---------------------------------------------------------------------------

#endif // #ifndef __TutorialApplication_h_

//---------------------------------------------------------------------------
