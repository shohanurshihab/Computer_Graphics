#include <windows.h>
#include <GL/gl.h>
#include <Gl/glu.h>
#include<math.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

float  counter=8.00;

void boat1()
{

   //Bottom Part
   glLoadIdentity();
   counter=counter-0.001;
    if(counter<-15)
   {
    counter=8.00; 
   }
 glTranslatef(counter,-2.00,0.0);

glBegin(GL_POLYGON); // Boat Starts
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(2.30, 1.00);
	glVertex2f(2.6, 1.65);
	glVertex2f(4.8, 1.65);
	glVertex2f(4.80, 1.00);
	
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9, 0.5, 0.1);
	glVertex2f(2.50, 0.20);
	glVertex2f(2.20, 1.00);
	glVertex2f(5.50, 1.00);
	glVertex2f(5.00, 0.20);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.1, 1.1);
	glVertex2f(2.65, 1.10);
	glVertex2f(2.65, 1.60);
	glVertex2f(3.05, 1.60);
	glVertex2f(3.05, 1.10);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(91, 75, 130);
	glVertex2f(4.85, 1.0);
	glVertex2f(4.85, 1.60);
	glVertex2f(5.25, 1.60);
	glVertex2f(5.25, 1.0);
	glEnd();

 float x,y,i;
    float PI=3.1416;

    GLfloat radius;
    int triangleAmount =60;
    GLfloat twicePi = 2.0 * PI;

        glBegin(GL_POLYGON);
        glColor3ub(191, 175, 130);
        x=5.05; y=1.9;
        twicePi = 2.0 * PI;
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (0.18*cos(i *  twicePi / triangleAmount)),
                    y + (0.28*sin(i * twicePi / triangleAmount))
                  );
        }

     glEnd();

glBegin(GL_LINES);
	glColor3ub(91, 75, 130);
	glVertex2f(5.85, 0.0);
	glVertex2f(5.25, 1.33);
	glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(51, 38, 3);
	glVertex2f(5.8, -0.90);
	glVertex2f(5.8, 0.05);
    glVertex2f(6.4, 0.05);
	glEnd();
	glPopMatrix();

}

float  counter1=9.00;
void boat2()
{

   //Bottom Part
   glLoadIdentity();
   counter1=counter1-0.002;
    if(counter1<-15)
   {
    counter1=8.00; 
   }
 glTranslatef(counter1,1.00,0.0);

glBegin(GL_POLYGON); // Boat Starts
	glColor3ub(255, 255, 255);
	glVertex2f(2.30, 1.00);
	glVertex2f(2.6, 1.65);
	glVertex2f(4.8, 1.65);
	glVertex2f(4.80, 1.00);
	
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(150, 150, 150);
	glVertex2f(2.50, 0.20);
	glVertex2f(2.20, 1.00);
	glVertex2f(5.50, 1.00);
	glVertex2f(5.00, 0.20);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(2.65, 1.10);
	glVertex2f(2.65, 1.60);
	glVertex2f(3.05, 1.60);
	glVertex2f(3.05, 1.10);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 15, 130);
	glVertex2f(4.85, 1.0);
	glVertex2f(4.85, 1.60);
	glVertex2f(5.25, 1.60);
	glVertex2f(5.25, 1.0);
	glEnd();

 float x,y,i;
    float PI=3.1416;

    GLfloat radius;
    int triangleAmount =60;
    GLfloat twicePi = 2.0 * PI;

        glBegin(GL_POLYGON);
        glColor3ub(191, 175, 130);
        x=5.05; y=1.9;
        twicePi = 2.0 * PI;
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (0.18*cos(i *  twicePi / triangleAmount)),
                    y + (0.28*sin(i * twicePi / triangleAmount))
                  );
        }

     glEnd();

glBegin(GL_LINES);
	glColor3ub(91, 75, 130);
	glVertex2f(5.85, 0.0);
	glVertex2f(5.25, 1.33);
	glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(51, 38, 3);
	glVertex2f(5.8, -0.90);
	glVertex2f(5.8, 0.05);
    glVertex2f(6.4, 0.05);
	glEnd();
	glPopMatrix();

}