#include <windows.h>
#include <GL/gl.h>
#include <Gl/glu.h>
#include<math.h>
#include <GL/glut.h>

float  counter2=5.00;
void birds()
{
   glLoadIdentity();
   counter2=counter2-0.0005;
    if(counter2<-3)
   {
    counter2=5.00; 
   }
 glTranslatef(counter2-1,6.00,0.0);
    glBegin(GL_LINE_STRIP);
    glColor3ub(1,1,1);
    glVertex2f(0.25,0.25);
    glVertex2f(0,0);
    glVertex2f(-0.25,0.25);
  glEnd();
glLoadIdentity();
 glTranslatef(counter2+1,5.00,0.0);
    glBegin(GL_LINE_STRIP);
    glColor3ub(1,1,1);
    glVertex2f(0.25,0.25);
    glVertex2f(0,0);
    glVertex2f(-0.25,0.25);
  glEnd();
glLoadIdentity();
 glTranslatef(counter2,5.00,0.0);
    glBegin(GL_LINE_STRIP);
    glColor3ub(1,1,1);
    glVertex2f(0.25,0.25);
    glVertex2f(0,0);
    glVertex2f(-0.25,0.25);
  glEnd();
glLoadIdentity();
 glTranslatef(counter2+2,6.00,0.0);
    glBegin(GL_LINE_STRIP);
    glColor3ub(1,1,1);
    glVertex2f(0.25,0.25);
    glVertex2f(0,0);
    glVertex2f(-0.25,0.25);
  glEnd();
}