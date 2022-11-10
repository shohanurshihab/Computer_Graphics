/*
 * GL05IdleFunc.cpp: Translation and Rotation
 * Transform primitives from their model spaces to world space (Model Transform).
 */
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>
#include <GL/gl.h>
#include<stdio.h>


// Global variable
GLfloat angle = 0.0f;  // Current rotational angle of the shapes

float x,y,i;
float PI=3.1416;
/* Initialize OpenGL Graphics */
void initGL() {
   // Set "clearing" or background color
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

    // Black and opaque
}

void init(void)
{
    //glClearColor (1.0, 1.0, 1.0, 0.0);
    glLoadIdentity();
    glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
}

/* Called back when there is no other event to be handled */
void idle() {
   glutPostRedisplay();   // Post a re-paint request to activate display()
}

/* Handler for window-repaint event. Call back when the window first appears and
   whenever the window needs to be re-painted.


    */
void display() {
   glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer
   glMatrixMode(GL_MODELVIEW);     // To operate on Model-View matrix
   glLoadIdentity();               // Reset the model-view matrix

   glPushMatrix();                     // Save model-view matrix setting
  // glTranslatef(0.6f, -0.6f, 0.0f);    // Translate
   glRotatef(0.0f + angle, 0.0f, 0.0f, 1.0f); // Rotate 180+angle degree
   glBegin(GL_LINES);
   	glLineWidth(7.5);
     glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(0.0f, 0.0f);
      glVertex2f(0.3f, 0.2f);
   glEnd();
   glPopMatrix();

    glPushMatrix();                     // Save model-view matrix setting
  // glTranslatef(0.6f, -0.6f, 0.0f);    // Translate
   glRotatef(0.0f + angle, 0.0f, 0.0f, 1.0f); // Rotate 180+angle degree
   glBegin(GL_LINES);
   	glLineWidth(7.5);
      glColor3f(0.0f, 1.0f, 0.0f);
      glVertex2f(0.0f, 0.0f);
      glVertex2f(-0.3f, 0.2f);
   glEnd();
   glPopMatrix();

   glPushMatrix();                     // Save model-view matrix setting
  // glTranslatef(0.6f, -0.6f, 0.0f);    // Translate
   glRotatef(0.0f + angle, 0.0f, 0.0f, 1.0f); // Rotate 180+angle degree
   glBegin(GL_LINES);
   	glLineWidth(7.5);
      glColor3f(0.0f, 0.0f, 1.0f); // Red
      glVertex2f(0.0f, 0.0f);
      glVertex2f(0.0f, -0.35f);
   glEnd();
   glPopMatrix();


 float x, y;
    int n;
    GLfloat radius;
    int triangleAmount =40;
    GLfloat twicePi = 2.0 * PI;

        glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0f, 1.0f, 1.0f);
        x=0; y=0; radius =0.05;
        twicePi = 2.0 * PI;
        glVertex2f(x, y); // center of circle
        for(n = 0; n <= triangleAmount;n++) {
        glVertex2f(
                    x + (radius * cos(n *  twicePi / triangleAmount)),
                    y + (radius * sin(n * twicePi / triangleAmount))
                  );
        }
    glEnd();



	glFlush();  // Render now
                           // Restore the model-view matrix

   glutSwapBuffers();   // Double buffered - swap the front and back buffers

   // Change the rotational angle after each display()
   angle += 1.0f;
}





/* Handler for window re-size event. Called back when the window first appears and
   whenever the window is re-sized with its new width and height */
void reshape(GLsizei width, GLsizei height) {  // GLsizei for non-negative integer
   // Compute aspect ratio of the new window
   if (height == 0) height = 1;                // To prevent divide by 0
   GLfloat aspect = (GLfloat)width / (GLfloat)height;

   // Set the viewport to cover the new window
   glViewport(0, 0, width, height);

   // Set the aspect ratio of the clipping area to match the viewport
   glMatrixMode(GL_PROJECTION);  // To operate on the Projection matrix
   glLoadIdentity();
   if (width >= height) {
     // aspect >= 1, set the height from -1 to 1, with larger width
      gluOrtho2D(-1.0 * aspect, 1.0 * aspect, -1.0, 1.0);
   } else {
      // aspect < 1, set the width to -1 to 1, with larger height
     gluOrtho2D(-1.0, 1.0, -1.0 / aspect, 1.0 / aspect);
   }
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
   glutInit(&argc, argv);          // Initialize GLUT
   glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);  // Enable double buffered mode
   glutInitWindowSize(640, 480);   // Set the window's initial width & height - non-square
   glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
   glutCreateWindow("Animation via Idle Function");  // Create window with the given title
   glutDisplayFunc(display);
     //glutDisplayFunc(circle);
          // Register callback handler for window re-paint event
   glutReshapeFunc(reshape);       // Register callback handler for window re-size event
   glutIdleFunc(idle);             // Register callback handler if no other event
   initGL();
   init();                    // Our own OpenGL initialization
   glutMainLoop();                 // Enter the infinite event-processing loop
   return 0;
}

