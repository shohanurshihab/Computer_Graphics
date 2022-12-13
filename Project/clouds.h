#include <windows.h>
#include <GL/gl.h>
#include <Gl/glu.h>
#include<math.h>
#include <GL/glut.h>

void cloud1()
{
    float x,y,i;
    float PI=3.1416;

    GLfloat radius;
    int triangleAmount =60;
    GLfloat twicePi = 2.0 * PI;

        glBegin(GL_POLYGON);
         glColor3ub(218, 221, 217);
        x=15.7; y=8;;
        twicePi = 2.0 * PI;
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (0.4*cos(i *  twicePi / triangleAmount)),
                    y + (0.7*sin(i * twicePi / triangleAmount))
                  );
        }
     glEnd();

        glBegin(GL_TRIANGLE_FAN);
         glColor3ub(218, 221, 217);
        x=15.3; y=7.5;;
        twicePi = 2.0 * PI;
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (0.4*cos(i *  twicePi / triangleAmount)),
                    y + (0.7*sin(i * twicePi / triangleAmount))
                  );
        }
     glEnd();

        glBegin(GL_POLYGON);
         glColor3ub(218, 221, 217);
        x=14.7; y=7.7;
        twicePi = 2.0 * PI;
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (0.4*cos(i *  twicePi / triangleAmount)),
                    y + (0.7*sin(i * twicePi / triangleAmount))
                  );
        }
     glEnd();
     
        glBegin(GL_POLYGON);
         glColor3ub(218, 221, 217);
        x=14.6; y=8.3;
        twicePi = 2.0 * PI;
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (0.4*cos(i *  twicePi / triangleAmount)),
                    y + (0.7*sin(i * twicePi / triangleAmount))
                  );
        }
     glEnd();
        glBegin(GL_POLYGON);
         glColor3ub(218, 221, 217);
        x=15.1; y=8.5;
        twicePi = 2.0 * PI;
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (0.4*cos(i *  twicePi / triangleAmount)),
                    y + (0.7*sin(i * twicePi / triangleAmount))
                  );
        }
     glEnd();

}
void cloud2()
{
    float x,y,i;
    float PI=3.1416;

    GLfloat radius;
    int triangleAmount =60;
    GLfloat twicePi = 2.0 * PI;


glTranslatef(-0.1, 2.0, 0.0);
glScalef(0.8,0.8,0.0);
        glBegin(GL_POLYGON);
         glColor3ub(218, 221, 217);
        x=15.7; y=8;;
        twicePi = 2.0 * PI;
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (0.4*cos(i *  twicePi / triangleAmount)),
                    y + (0.7*sin(i * twicePi / triangleAmount))
                  );
        }
     glEnd();

        glBegin(GL_POLYGON);
         glColor3ub(218, 221, 217);
        x=15.3; y=7.5;;
        twicePi = 2.0 * PI;
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (0.4*cos(i *  twicePi / triangleAmount)),
                    y + (0.7*sin(i * twicePi / triangleAmount))
                  );
        }
     glEnd();

        glBegin(GL_POLYGON);
         glColor3ub(218, 221, 217);
        x=14.7; y=7.7;
        twicePi = 2.0 * PI;
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (0.4*cos(i *  twicePi / triangleAmount)),
                    y + (0.7*sin(i * twicePi / triangleAmount))
                  );
        }
     glEnd();
     
        glBegin(GL_POLYGON);
         glColor3ub(218, 221, 217);
        x=14.6; y=8.3;
        twicePi = 2.0 * PI;
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (0.4*cos(i *  twicePi / triangleAmount)),
                    y + (0.7*sin(i * twicePi / triangleAmount))
                  );
        }
     glEnd();
        glBegin(GL_POLYGON);
         glColor3ub(218, 221, 217);
        x=15.1; y=8.5;
        twicePi = 2.0 * PI;
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (0.4*cos(i *  twicePi / triangleAmount)),
                    y + (0.7*sin(i * twicePi / triangleAmount))
                  );
        }
     glEnd();

}
void cloud3()
{
    float x,y,i;
    float PI=3.1416;

    GLfloat radius;
    int triangleAmount =60;
    GLfloat twicePi = 2.0 * PI;


glTranslatef(-13.0, -5.0, 0.0);
glScalef(1.6,1.6,0.0);
        glBegin(GL_POLYGON);
         glColor3ub(218, 221, 217);
        x=15.7; y=8;;
        twicePi = 2.0 * PI;
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (0.4*cos(i *  twicePi / triangleAmount)),
                    y + (0.7*sin(i * twicePi / triangleAmount))
                  );
        }
     glEnd();

        glBegin(GL_POLYGON);
         glColor3ub(218, 221, 217);
        x=15.3; y=7.5;;
        twicePi = 2.0 * PI;
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (0.4*cos(i *  twicePi / triangleAmount)),
                    y + (0.7*sin(i * twicePi / triangleAmount))
                  );
        }
     glEnd();

        glBegin(GL_POLYGON);
         glColor3ub(218, 221, 217);
        x=14.7; y=7.7;
        twicePi = 2.0 * PI;
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (0.4*cos(i *  twicePi / triangleAmount)),
                    y + (0.7*sin(i * twicePi / triangleAmount))
                  );
        }
     glEnd();
     
        glBegin(GL_POLYGON);
         glColor3ub(218, 221, 217);
        x=14.6; y=8.3;
        twicePi = 2.0 * PI;
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (0.4*cos(i *  twicePi / triangleAmount)),
                    y + (0.7*sin(i * twicePi / triangleAmount))
                  );
        }
     glEnd();
        glBegin(GL_POLYGON);
         glColor3ub(218, 221, 217);
        x=15.1; y=8.5;
        twicePi = 2.0 * PI;
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (0.4*cos(i *  twicePi / triangleAmount)),
                    y + (0.7*sin(i * twicePi / triangleAmount))
                  );
        }
     glEnd();

}