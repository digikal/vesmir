#include "Application.h"


namespace Vesmir {

	Application::Application()
	{
	}


	Application::~Application()
	{
	}

	void Application::Run() {
		while (true);
	}

	// To be defined in client.
	Application* CreateApplication();
}