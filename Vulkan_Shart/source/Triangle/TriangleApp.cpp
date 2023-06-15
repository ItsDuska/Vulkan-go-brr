#include "TriangleApp.hpp"

void vta::TriangleApp::run()
{
	initWindow();
	initVulkan();
	mainLoop();
	cleanup();
}

void vta::TriangleApp::initWindow()
{
	glfwInit();

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	window = glfwCreateWindow(WINDOW_WIDTH,WINDOW_HEIGHT, "Vulkan shartti", nullptr, nullptr);
}

void vta::TriangleApp::initVulkan()
{
	createInstance();
}

void vta::TriangleApp::mainLoop()
{
	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
	}
}

void vta::TriangleApp::cleanup()
{
	glfwDestroyWindow(window);
	glfwTerminate();
}

void vta::TriangleApp::createInstance()
{
	VkApplicationInfo appInfo{};
	appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
	appInfo.pApplicationName = "Shart Triangle";
	appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
	appInfo.pEngineName = "No Engines?!";
	appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
}
