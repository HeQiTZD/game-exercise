#include<iostream>
#include "AppDeleGate.h"

int main() 
{
	//AppDeleGate app;
	//Application::getInstall()->run();

	AppDeleGate app;
	Application* a = (AppDeleGate*)&app;

	a->run();

	return 0;
}