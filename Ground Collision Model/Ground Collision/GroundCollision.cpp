// Falling Boxes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "FreeGLUTCallbacks.h"
#include "GroundCollisionApplication.h"


int main(int argc, char **argv)
{
	GroundCollisionApplication groundCollision(ORTHOGRAPHIC);
	return glutmain(argc, argv, 1024, 768, "Falling Boxes", &groundCollision);
}
