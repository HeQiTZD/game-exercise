#include "Director.h"
#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;
using namespace dhgame;

static Director* instance = nullptr;

Director::Director()
{
	this->setDesignResolutionSize(10, 10);
}

Director::~Director()
{

}

Director* dhgame::Director::getInstance()
{
	if (instance == nullptr) {
		instance = new Director();
	}

	return instance;
}

void Director::setDesignResolutionSize(int width, int height)
{
	this->_designResolutionSize.width = width;
	this->_designResolutionSize.height = height;
	if (this->_frame) delete[] this->_frame;

	this->_frame = new char[width * height];
}

void dhgame::Director::draw()
{
	int width = this->_designResolutionSize.width;
	int height = this->_designResolutionSize.height;
	memset(this->_frame, ' ', width * height);
	system("cls");

	cout.flush();
	Sleep(100);
}

void dhgame::Director::runWithScene(Scene* scene)
{
	this->_runningScene = scene;
}