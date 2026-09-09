#pragma once
using namespace std;
namespace dhgame
{
	struct Size
	{
		int width;
		int height;
	};

	class Application {

	protected:
		Size _designResolutionSize;

	public:

		static Application* getInstall();

		Application();
		~Application();
		void run();

		virtual void applicationDiaFinishLaunching() = 0;
	
		//设计分辨率尺寸
		void setDesignResolutionSize(int width, int height);
	};
}