#include <GL/glut.h>
#include <math.h>
#include <SOIL.h>
#include <stdio.h>
#include "textures.h"

#include "terrain.h"
#include "pinetree.h"
#include "cablecarpole.h"
#include "sled.h"
#include "cablecar.h"
#include "cablecarwithtower.h"
#include "lodge.h"
#include "lake.h"
#include "bench.h"
#include "flag.h"
#include "skybox.h"

#include "scene.h"



// For animating the rotation of the objects
float sceneRotation = 0.0;

// variables to move outermost Object Frame (to move all the rendered environment)
float moveX = 0.0f;
float moveY = 0.0f;
float moveZ = 0.0f;

GLfloat rotX = 0.0f;
GLfloat rotY = 0.0f;
GLfloat rotZ = 0.0f;

//variables to move the camera
float camX = 3.0f;
float camY = 3.0f;
float camZ = 3.0f;


void setLighting()
{
    glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, GL_TRUE);
//glLightModeli(GL_LIGHT_MODEL_TWO_SIDE,GL_TRUE);
    glEnable(GL_LIGHT0);
//glDisable(GL_LIGHT0); // disable light source
//glEnable(GL_LIGHT1);
//glEnable(GL_LIGHT2);
// Set lighting intensity and color
    GLfloat qaAmbientLight[] = { 0.7, 0.7, 0.7, 1.0 };
    GLfloat qaDiffuseLight[] = { 0.4, 0.4, 0.4,0.1  };
    GLfloat qaSpecularLight[] = { 0.1, 0.1, 0.1,0.1 };
    glLightfv(GL_LIGHT0, GL_AMBIENT, qaAmbientLight);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, qaDiffuseLight);
    glLightfv(GL_LIGHT0, GL_SPECULAR, qaSpecularLight);
    glLightfv(GL_LIGHT1, GL_AMBIENT, qaAmbientLight);
//glLightfv(GL_LIGHT1, GL_DIFFUSE, qaDiffuseLight);
// glLightfv(GL_LIGHT1, GL_SPECULAR, qaSpecularLight);
    glLightfv(GL_LIGHT2, GL_AMBIENT, qaAmbientLight);
    glLightfv(GL_LIGHT2, GL_DIFFUSE, qaDiffuseLight);
    glLightfv(GL_LIGHT2, GL_SPECULAR, qaSpecularLight);
// Set the light position
    GLfloat qaLightPosition0[] = { 5, 50, 2, 1.0 };
    glLightfv(GL_LIGHT0, GL_POSITION, qaLightPosition0);

}

void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glEnable(GL_DEPTH_TEST);
}

void drawAxes()
{
    glPushMatrix();
    glBegin(GL_LINES);

    glLineWidth(1.5);

   // glColor3f(1.0, 0.0, 0.0); // RED - X
    glVertex3f(-40, 0, 0);
    glVertex3f(40, 0, 0);

    //glColor3f(0.0, 1.0, 0.0); //GREEN -Y
    glVertex3f(0, -40, 0);
    glVertex3f(0, 40, 0);

   // glColor3f(0.0, 0.0, 1.0); //BLUE -Z
    glVertex3f(0, 0, -40);
    glVertex3f(0, 0, 40);


    glEnd();
    glPopMatrix();
}
void DrawGrid()
{
    GLint line;
    GLfloat ext = 100.0f;
    GLfloat step = 1.0f;
    GLfloat yGrid = -0.4f;

    glBegin(GL_LINES);
    for (line = -ext; line <= ext; line += step)
    {
        glVertex3f(line, yGrid, ext);
        glVertex3f(line, yGrid, -ext);

        glVertex3f(ext, yGrid, line);
        glVertex3f(-ext, yGrid, line);
    }
    glEnd();
}

void display()
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    //Setting the modelview matrix to the identity matrix
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glPushMatrix();

    gluLookAt(0.0 + camX, 1.0 + camY, 5.0 + camZ, 0, 0, 0, 0, 1.0, 0);
    // glColor3f(1.0, 1.0, 1.0);
    //glTranslatef(0.0, 0.0, -5.0);

    glTranslatef(moveX, moveY, moveZ);
    glRotatef(rotX, 1.0f, 0.0f, 0.0f);
    glRotatef(rotY, 0.0f, 1.0f, 0.0f);
    glRotatef(rotZ, 0.0f, 0.0f, 1.0f);

    //DrawGrid();

    //drawAxes();
    setLighting();

    glPushMatrix();
    glRotatef(sceneRotation, 0.0, 1.0, 0.0);

    // drawPineTree();
    //drawSled();
    //drawTPole(8);
    // drawCableCar();
   // drawLodgeWithBase();
    //drawCableCarWithTower();

    renderScene();

    glPopMatrix();

    glPopMatrix();

    glutSwapBuffers();

}

void keyboardSpecial(int key, int x, int y)
{
    if (key == GLUT_KEY_UP)
        camY += 0.5;
    if (key == GLUT_KEY_DOWN)
        camY -= 0.5;

    glutPostRedisplay();
}

void keyboard(unsigned char key, int x, int y)
{

    if (key == 'z')
        moveZ += 1;

    if (key == 'Z')
        moveZ -= 1;

    if (key == 'l')
        rotY -= 5.0;

    if (key == 'r')
        rotY += 1.0;

    glutPostRedisplay();

}

//Rotating teapot
void Timer(int x)
{

    //sceneRotation += sceneRotation >= 360.0 ? -sceneRotation : 2;
    cable_car_mov_z -=0.1;
    cable_car_mov_y +=0.025;
    glutPostRedisplay();

    glutTimerFunc(60, Timer, 1);
}

void reshape(GLsizei w, GLsizei h)
{
    glViewport(0, 0, w, h);
    GLfloat aspect_ratio = h == 0 ? w / 1 : (GLfloat)w / (GLfloat)h;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    //Define the Perspective projection frustum
    // (FOV_in_vertical, aspect_ratio, z-distance to the near plane from the camera position, z-distance to far plane from the camera position)
    gluPerspective(120.0, aspect_ratio, 1.0, 100.0);

}

int main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGBA);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(150, 150);
    glutCreateWindow("Ski Resort");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);


    loadTextures();

    // keyboard function activation
    glutKeyboardFunc(keyboard);
    glutSpecialFunc(keyboardSpecial);

    glutTimerFunc(60.0, Timer, 1);
    init();
    glutMainLoop();


    return 0;
}
