#include <Vesmir.h>

class Sandbox : public Vesmir::Application {
public:
	Sandbox() {

	} 

	~Sandbox() {

	}
};

Vesmir::Application* Vesmir::CreateApplication() {
	return new Sandbox();
}