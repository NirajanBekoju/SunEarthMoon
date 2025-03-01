#include<glm/glm.hpp>
#include "Cube.h"




Cube::Cube()
{
	vertices = { -1.0f, 1.0f, -1.0f, -1.0f, -1.0f, -1.0f, 1.0f, -1.0f, -1.0f,
		1.0f, -1.0f, -1.0f, 1.0f, 1.0f, -1.0f, -1.0f, 1.0f, -1.0f,
		1.0f, -1.0f, -1.0f, 1.0f, -1.0f, 1.0f, 1.0f, 1.0f, -1.0f,
		1.0f, -1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, -1.0f,
		1.0f, -1.0f, 1.0f, -1.0f, -1.0f, 1.0f, 1.0f, 1.0f, 1.0f,
		-1.0f, -1.0f, 1.0f, -1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f,
		-1.0f, -1.0f, 1.0f, -1.0f, -1.0f, -1.0f, -1.0f, 1.0f, 1.0f,
		-1.0f, -1.0f, -1.0f, -1.0f, 1.0f, -1.0f, -1.0f, 1.0f, 1.0f,
		-1.0f, -1.0f, 1.0f, 1.0f, -1.0f, 1.0f, 1.0f, -1.0f, -1.0f,
		1.0f, -1.0f, -1.0f, -1.0f, -1.0f, -1.0f, -1.0f, -1.0f, 1.0f,
		-1.0f, 1.0f, -1.0f, 1.0f, 1.0f, -1.0f, 1.0f, 1.0f, 1.0f,
		 1.0f, 1.0f, 1.0f, -1.0f, 1.0f, 1.0f, -1.0f, 1.0f, -1.0f };


	texCoords = { 0.0f, 0.25f, 0.25f, 0.25f, 0.25f, 0.75f,
		0.0f, 0.25f, 0.25f, 0.75f, 0.0f, 0.75f,
		// front face
			0.25f, 0.25f, 0.25f, 0.25f, 0.5f, 0.75f,
				 0.25f, 0.25f, 0.5f, 0.75f, 0.25f, 0.75f,
		// right face
		0.5f, 0.25f, 0.75f, 0.25f, 0.75f, 0.75f,
				 0.5f, 0.25f, 0.75f, 0.75f, 0.5f, 0.75f,
		// back face
		0.75f, 0.0f, 1.0f, 0.0f, 1.0f, 0.5f,
				 0.75f, 0.25f, 1.0f, 0.75f, 0.75f, 0.75f,
		// left face
		 0.0f, 0.0f, 0.25f, 0.0f, 0.25f, 0.5f,
		0.0f, 0.25f, 0.25f, 0.75f, 0.0f, 0.75f, // base � right back
				0.75f, 0.0f, 1.0f, 0.0f, 1.0f, 0.5f,
				 0.75f, 0.25f, 1.0f, 0.75f, 0.75f, 0.75f,
		// base � right back
	};

	//0.0f,0.0f,0.0f,1.0f,1.0f,1.0f,
//1.0f,0.0f,0.0f,0.0f,1.0f,1.0f,
	texCoordsOrtho = {
		//	0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
	//0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,

//		0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 0.0f,
	//	1.0f, 0.0f, 1.0f, 1.0f, 0.0f, 1.0f,

		//0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
	//	0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
		//0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
//		0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,


		//0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
		//0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
		//0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
		//0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
	//	0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
//		0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,



0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,
0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,
0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,
0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,

1.0f,1.0f,0.0f,1.0f,1.0,0.0f,
0.0f,1.0f,0.0f,0.0f,1.0f,0.0f,

0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,
0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,
0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,
0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,
0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,
0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,

	};


}


//	int getNumTriangles();
int Cube::getNumIndices()
{
	return vertices.size() / 3;
}
std::vector<float> Cube::getVertices()
{
	return vertices;
}

std::vector<float> Cube::getTexCoords()
{
	return texCoords;
}

std::vector<float> Cube::getTexCoordsOrtho()
{
	return texCoordsOrtho;
}

//accessors
