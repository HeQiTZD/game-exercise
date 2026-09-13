#include "Application.h"
#include "Director.h"
#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace dhgame;
using namespace std;

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
	// 获取控制台屏幕缓冲区句柄
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hConsole == INVALID_HANDLE_VALUE)
	{
		std::cerr << "获取控制台句柄失败" << std::endl;
	}

	CONSOLE_CURSOR_INFO cursorInfo;
	//获取控制台光标信息
	if (!GetConsoleCursorInfo(hConsole, &cursorInfo))
	{
		std::cerr << "获取光标信息失败" << std::endl;
	}

	//设置光标不可见
	cursorInfo.bVisible = FALSE;
	if (!SetConsoleCursorInfo(hConsole, &cursorInfo))
	{
		std::cerr << "设置光标不可见失败" << std::endl;
	}


	this->applicationDiaFinishLaunching();

	cout << "开始运行" << endl;
	while (1) 
	{
		Director::getInstance()->draw();
	}
}