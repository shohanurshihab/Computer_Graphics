#include <windows.h>
#include <GL/gl.h>
#include <Gl/glu.h>
#include<math.h>
#include <GL/glut.h>

void sun()
{

float x,y,i;
    float PI=3.1416;

    GLfloat radius;
    int triangleAmount =60;
    GLfloat twicePi = 2.0 * PI;

        glBegin(GL_POLYGON);
        glColor3ub(253, 184, 19);
        x=-8; y=6;;
        twicePi = 2.0 * PI;
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (1.2*cos(i *  twicePi / triangleAmount)),
                    y + (2*sin(i * twicePi / triangleAmount))
                  );
        }
     glEnd();
}

void sun_reflect()
{
    glTranslatef(-8.0, 0.0, 0.0);
     glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(4,1.8);    // x, y
	glVertex2f(-4,1.8);    // x, y

	glEnd();

   glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(3,1.4);    // x, y
	glVertex2f(-3,1.4);    // x, y

	glEnd();

	   glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(2,1.0);    // x, y
	glVertex2f(-2,1.0);    // x, y

	glEnd();

	   glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(1,0.6);    // x, y
	glVertex2f(-1,0.6);    // x, y

	glEnd();


	   glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.5,0.2);    // x, y
	glVertex2f(-0.5,0.2);    // x, y

	glEnd();

	   glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.1,-0.2);    // x, y
	glVertex2f(-0.1,-0.2);    // x, y

	glEnd();

}