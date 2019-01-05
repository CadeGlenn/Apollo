#pragma once

#include "Core.h"

namespace Apollo { namespace engine {

	class APOLLO_API Application
	{
		public:
			Application();
			virtual ~Application();
			
			void Run();
	};

	Application* CreateApplication();

} }
