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

	glFlush();

}
void reshape(int w,int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10,10,-10,10);
    glMatrixMode(GL_MODELVIEW);
}

void init()
{
    glClearColor(1.0,1.0,1.0,0.0);
}

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(200,100);
    glutInitWindowSize(960,540);

    glutCreateWindow("Village");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    init();
    glutMainLoop();
}
