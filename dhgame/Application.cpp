#include "Application.h"
#include <iostream>
using namespace dhgame;

static Application* app = nullptr;

Application* dhgame::Application::getInstall()
{
	return app;
}

dhgame::Application::Application()
{
	app = this;
	cout << "Application构造\n";
}

dhgame::Application::~Application()
{
	cout << "Application析构\n";

}

void dhgame::Application::run()
{
	// 引擎初始化
	this->applicationDiaFinishLaunching();

	cout << "开始运行" << endl;
	while (1) 
	{

	}
}

void dhgame::Application::setDesignResolutionSize(int width, int height)
{
	this->_designResolutionSize.width = 10;
	this->_designResolutionSize.height = 10;
}
