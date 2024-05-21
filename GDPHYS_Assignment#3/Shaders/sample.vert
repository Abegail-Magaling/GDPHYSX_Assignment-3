#version 330 core

//Gets the data at Attrib Index 0
//Converts it and stores it into a Vec3
layout(location = 0) in vec3 aPos;

//Create a transfrom variable
uniform mat4 transform;

//Projection Matrix
uniform mat4 projection;

void main()
{
	//gl_Position is predefined
	//this denotes the final position of the vertex / point

	//Multiply the transformation matrix to the vec4  to the vec4 version of aPos
	gl_Position = projection * transform * vec4(aPos, 1.0);
}