#include <iostream>
#include <GLFW/glfw3.h>

int main()
{
	GLFWwindow* window;

	if (!glfwInit())
	{
		std::cerr << "failed to initialize GLFW" << std::endl;
		return -1;
	}

	window = glfwCreateWindow(1280, 720, "OpenGL Fractal", nullptr, nullptr);
	if (!window)
	{
		std::cerr << "failed to create window" << std::endl;
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);

	while (!glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT);

		glBegin(GL_LINES);

		// your vertices go here
		// for example to draw a line between (-0.5, -0.5) and (0.5, 0.5)
		glVertex2f(-0.5f, -0.5f);
		glVertex2f(0.5f, 0.5f);

		glEnd();

		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	return 0;
}