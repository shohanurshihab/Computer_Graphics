#include <windows.h>
#include <GL/gl.h>
#include <Gl/glu.h>
#include<math.h>
#include <GL/glut.h>
#include "sun.h"
#include "river.h"
#include "land.h"
#include "sky.h"
#include "clouds.h"
#include "mountain.h"
#include "boats.h"
#include "birds.h"


void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();


    //River

	river();

    // LAND
    land();

	//sky

    sky();

	// SUN
	sun();

    //SUN Reflection

    sun_reflect();

    //clouds
    cloud1();
    cloud2();
    cloud3();
    glLoadIdentity();

    //mountain
    middle_mountain();
    left_mountain();
    right_mountain();

    //boats
  //glColor3f(0.0,1.0,0.0);
  boat1();
  boat2();

  //birds
  birds();

  glutSwapBuffers();
	glFlush();

}


void init()
{
    glClearColor(1.0,1.0,1.0,0.0);
      glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10,10,-10,10);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA|GLUT_DEPTH);

    glutInitWindowPosition(200,100);
    glutInitWindowSize(960,540);

    glutCreateWindow("Village");
    init();
    glutDisplayFunc(display);
    glutIdleFunc(display);

    glutMainLoop();

}
