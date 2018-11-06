#pragma once

#include "rt3d.h"
#include "rt3dObjLoader.h"
#include "glm\glm.hpp"
#include <glm\gtc\matrix_transform.hpp>
#include <glm\gtc\type_ptr.hpp>
#include <stack>

class Coin
{
public:

	Coin(glm::vec3 position); // Constructor

	~Coin();

	void init();// Method To Initialize The Coin
	void draw(std::stack<glm::mat4>& stack); // Method To Draw The Coin

	glm::vec3 getPos(); // Returns Coin Position
	glm::vec3 setPos(glm::vec3 newPos); // Sets Coin Position

private:

	GLuint meshIndexCount = 0; //  Initializes The Coins Mesh Index Count
	GLuint md2VertCount = 0; // Initializes The Vert Count Of The Players Model Vert Count
	GLuint meshObjects[2]; // An Array Of Mesh Objects
	GLuint textures[2]; // An Array Of Textures
	GLuint shaderProgram; // Initializes The Shaders

	glm::vec3 coinPosition; // The Coins Current Position
	rt3d::materialStruct material0; // Initializes The Material Matrix
};