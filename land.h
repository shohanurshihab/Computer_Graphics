#include <windows.h>
#include <GL/gl.h>
#include <Gl/glu.h>
#include<math.h>
#include <GL/glut.h>


void land()
{
        glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(14, 199, 26); // Light Green
	glVertex2f(-10, -10);
	glColor3ub (192, 209, 127);    // x, y
	glVertex2f(-10, -3);
	glColor3ub (14, 199, 26);
	glVertex2f(10, -3);    // x, y
	glColor3ub(14, 199, 26);
	glVertex2f(10, -10);

	glEnd();
}