#pragma once

#include <iostream>

#include "Scene.h"

namespace dhgame 
{
	struct Size
	{
		int width;
		int height;
	};

	class Director {

	protected:
		friend class Application;
		Size _designResolutionSize;
		char* _frame = nullptr;
		Scene* _runningScene = nullptr;

	private:
		Director();
		void draw();

	public:
		~Director();

		static Director* getInstance();

		//设计分辨率尺寸
		void setDesignResolutionSize(int width, int height);
		//运行场景
		void runWithScene(Scene* scene);

	};
}
