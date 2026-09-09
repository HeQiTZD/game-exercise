#include "AppDeleGate.h"

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
	cout << "做自己的游戏业务" << endl;

}
