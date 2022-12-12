#include <windows.h>
#include <GL/gl.h>
#include <Gl/glu.h>
#include<math.h>
#include <GL/glut.h>

void sky()
{
      glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	//glColor3ub(127, 181, 250); // 
 glColor3ub(217, 234, 255); 
	glVertex2f(-10, 2);    // x, y
    glColor3ub(217, 234, 255);
	glVertex2f(-10, 10);
    glColor3ub(77, 156, 255);
	glVertex2f(10, 10);   // x, y
	glVertex2f(10, 2);

	glEnd();
}