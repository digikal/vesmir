#pragma once
#include "Core.h"

namespace Vesmir {

	class VESMIR_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	// To be defined in CLIENT
	Application* CreateApplication();
}