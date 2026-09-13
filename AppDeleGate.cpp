#include "AppDeleGate.h"
#include "UserGuideScene.h"

AppDeleGate::AppDeleGate()
{
	cout << "AppDeleGate构造" << endl;

}

AppDeleGate::~AppDeleGate()
{
	cout << "AppDeleGate析构" << endl;
}

void AppDeleGate::applicationDiaFinishLaunching()
{
	UserGuideScene* scene = new UserGuideScene();
	Director::getInstance()->runWithScene(scene);
}