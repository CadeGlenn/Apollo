#include <apollo.h>
#include <iostream>

using namespace Apollo;
using namespace engine;

class Sandbox : public Application
{
	public:
		Sandbox()
		{
			std::cout << "Hello World!" << std::endl;
		}
		
		~Sandbox() 
		{
		}
};

Application* engine::CreateApplication() 
{
	return new Sandbox();
}