#include <windows.h>
#include <GL/gl.h>
#include <Gl/glu.h>
#include<math.h>
#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    //draw

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(59, 175, 247); // dark green


	glVertex2f(-10, -3);    // x, y
	glVertex2f(-10, 2);
	glVertex2f(10, 2);    // x, y
	glVertex2f(10, -3);

	glEnd();


    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(14, 199, 26); // Light Green

	glVertex2f(-10, -10);    // x, y
	glVertex2f(-10, -3);
	glVertex2f(10, -3);    // x, y
	glVertex2f(10, -10);

	glEnd();

	  glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(126, 217, 247); // Light Green

	glVertex2f(-10, 2);    // x, y
	glVertex2f(-10, 10);
	glVertex2f(10, 10);    // x, y
	glVertex2f(10, 2);

	glEnd();

	float x,y,i;
    float PI=3.1416;

    GLfloat radius;
    int triangleAmount =40;
    GLfloat twicePi = 2.0 * PI;

        glBegin(GL_POLYGON);
        glColor3ub(238, 139, 21);
        x=0; y=5; radius =2;
        twicePi = 2.0 * PI;
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
     glEnd();

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
    glutInitWindowSize(900,900);

    glutCreateWindow("Background");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    init();
    glutMainLoop();
}
