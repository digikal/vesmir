#pragma once
#ifdef VZ_PLATFORM_WINDOWS

extern Vesmir::Application* Vesmir::CreateApplication();

int main(int argc, char** argv) {
	auto app = Vesmir::CreateApplication();
	app->Run();
	delete app;
}
#endif