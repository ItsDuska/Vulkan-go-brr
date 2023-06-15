#pragma once


#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>


#include <iostream>
#include <stdexcept>
#include <cstdlib>

/*
	vta = VULKAN TRIANGLE APPLICATION
*/
namespace vta
{
	class TriangleApp 
	{
	public:
		void run();

	private:
		void initWindow();
		void initVulkan();
		void mainLoop();
		void cleanup();

		void createInstance();

	private:
		GLFWwindow *window = nullptr;
		VkInstance instance;

		const int WINDOW_WIDTH = 800;
		const int WINDOW_HEIGHT = 600;
	};
}