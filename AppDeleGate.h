#pragma
#include "dhgame.h"
using namespace dhgame;

class AppDeleGate : public Application
{
public:
	AppDeleGate();
	~AppDeleGate();

	virtual void applicationDiaFinishLaunching() override;
};