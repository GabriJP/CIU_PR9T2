//
//  OBJLoader.hpp
//  ModelsFromFile
//
//  Created by Laura del Pino D�az on 18/4/16.
//  Copyright � 2016 Laura del Pino D�az. All rights reserved.
//

#ifndef OBJLoader_hpp
#define OBJLoader_hpp

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <math.h>

#endif /* OBJLoader_hpp */

using namespace std;

class Model_OBJ
{
public:
	Model_OBJ();
	float* calculateNormal(float* coord1, float* coord2, float* coord3);
	int Load(char *filename);	// Loads the model
	void Draw();					// Draws the model on the screen

	float* normals;							// Stores the normals
	float* Faces_Triangles;					// Stores the triangles
	float* vertexBuffer;					// Stores the points which make the object
	long TotalConnectedPoints;				// Stores the total number of connected verteces
	long TotalConnectedTriangles;			// Stores the total number of connected triangles

};