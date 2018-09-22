//
// Bachelor of Software Engineering
// Media Design School
// Auckland
// New Zealand
//
// (c) 2005 - 2018 Media Design School
//
// File Name	:	Utility.h
// Description	:	header file outlining the Utility
// Author		:	Steven Cao & Vivian Ngo
// Mail 		:	steven.zha7447@mediadesign.school.nz, vivian.ngo7572@mediadesign.school.nz
//

#pragma once

//---OpenGL Includes---//
#include "Dependencies\glm\glm.hpp"
#include "Dependencies\glm\gtc\matrix_transform.hpp"
#include "Dependencies\glm\gtc\type_ptr.hpp"
#include "glew.h"
#include "freeglut.h"
#include "SOIL.h"
#include "FMOD\fmod.hpp"
#include <Box2D.h>

//---Loaders---//
#include "TextureLoader.h"
#include "ShaderLoader.h"

//---Local Includes---//

//---Library Includes---//
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <chrono>
#include <Windows.h>
#include <thread>
#include <memory>
#include <cmath>
#include <vld.h>		// Memory Leak Detector

class CUtility
{
public:
	CUtility();
	~CUtility();

	static GLuint program;
};

namespace Utility
{
	const unsigned int SCR_WIDTH = 1000;
	const unsigned int SCR_HEIGHT = 800;

	//Used for the fixtures
	enum Shapes
	{
		POLYGON = 0,
		CIRCLE,
	};

	//Used for controls keyboard
	enum InputState
	{
		INPUT_FIRST_RELEASE,	// First frame of Up state 
		INPUT_RELEASED,			// Default State (Up) 
		INPUT_FIRST_PRESS,		// First frame of Down state 
		INPUT_HOLD,				// Key is held Down 
	};
	//Used for controls mouse
	enum InputMouse
	{
		MOUSE_LEFT,
		MOUSE_MIDDLE,
		MOUSE_RIGHT
	};

	struct Transform
	{
		glm::vec3 position;
		glm::vec3 rotation;
		glm::vec3 scale;
	};
	//Used to identify objects
	enum Tags
	{
		BIRD = 0,
		PIG,
		DESOBJECTS,
		INDESOBJECTS,
		BACKGROUND,
	};

}

