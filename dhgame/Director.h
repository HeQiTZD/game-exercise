#include <iostream>

namespace dhgame 
{
	class Director {

	private:
		Director();

	public:
		~Director();

		static Director* getInstance();
	};
}