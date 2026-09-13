#pragma once
#include "dhgame.h"
using namespace dhgame;
using namespace std;

class AppDeleGate : public Application
{
public:
	AppDeleGate();
	~AppDeleGate();

	virtual void applicationDiaFinishLaunching() override;
};
