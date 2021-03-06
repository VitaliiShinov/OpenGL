#include "pch.h"
#include <iostream>
#include <string>
#include "GL/glew.h"
#include "display.h"
#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include "mesh.h"

int main(int argc, char *argv[])
{
	SDL_SetMainReady();

	Display display(800, 600, "Hello World!");

	Vertex vertices[] = {
						Vertex(glm::vec3(-0.5,-0.5,0)),
						Vertex(glm::vec3(0,0.5,0)),
						Vertex(glm::vec3(0.5,-0.5,0)),
	};

	Mesh mesh(vertices, sizeof(vertices) / sizeof(vertices[0]));

	mesh.Draw();

	while (!display.IsClosed())
	{
		glClearColor(0.0f, 0.2f, 0.2f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);
		display.Update();
	}

	return 0;
}