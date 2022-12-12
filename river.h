#include <windows.h>
#include <GL/gl.h>
#include <Gl/glu.h>
#include<math.h>
#include <GL/glut.h>

void river()
{

   glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	//glColor3ub(59, 175, 247);
    glColor3ub (0, 162, 255);

	glVertex2f(-10, -3);
	glColor3ub (248, 252, 199);    // x, y
	glVertex2f(-10, 2);
	glColor3ub (0, 162, 255);
	glVertex2f(10, 2);
	    // x, y
	glVertex2f(10, -3);

	glEnd();
}