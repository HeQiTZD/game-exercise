#pragma once
namespace dhgame
{
	class Application {
	public:

		static Application* getInstall();

		Application();
		~Application();
		void run();

		virtual void applicationDiaFinishLaunching() = 0;
	};
}