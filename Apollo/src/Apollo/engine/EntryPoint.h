#pragma once

#ifdef AP_PLATFORM_WINDOWS

extern Apollo::engine::Application* Apollo::engine::CreateApplication();

int main(int argc, char** argv) 
{
	auto app = Apollo::engine::CreateApplication();
	app->Run();
	delete app;
}

#endif