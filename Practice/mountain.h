#include <windows.h>
#include <GL/gl.h>
#include <Gl/glu.h>
#include<math.h>
#include <GL/glut.h>

void middle_mountain()
{
     glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	//glColor3ub(59, 175, 247);
    glColor3ub (0, 162, 2);

	glVertex2f(3, 2);
	glColor3ub (0, 162, 2);    // x, y
	glVertex2f(5, 2);
	glColor3ub (87, 42, 0);
	glVertex2f(4, 5);
	    // x, y
	//glVertex2f(10, -3);
    glLoadIdentity();
	glEnd();
}


void left_mountain()
{
    glTranslatef(0.8,1.0,0.0);
    glScalef(0.6,0.5,0.0);
     glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	//glColor3ub(59, 175, 247);
    glColor3ub (0, 162, 2);

	glVertex2f(3, 2);
	glColor3ub (0, 162, 2);    // x, y
	glVertex2f(5, 2);
	glColor3ub (87, 42, 0);
	glVertex2f(4, 5);
	    // x, y
	//glVertex2f(10, -3);

	glEnd();
   glLoadIdentity();
}

void right_mountain()
{
    glTranslatef(1.35,0.4,0.0);
   glScalef(0.9,0.8,0.0);
     glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	//glColor3ub(59, 175, 247);
    glColor3ub (0, 162, 2);

	glVertex2f(3, 2);
	glColor3ub (0, 162, 2);    // x, y
	glVertex2f(5, 2);
	glColor3ub (87, 42, 0);
	glVertex2f(4, 5);
	    // x, y
	//glVertex2f(10, -3);
    glLoadIdentity();
	glEnd();
}