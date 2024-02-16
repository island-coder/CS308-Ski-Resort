#include "colors.h"

float PI = 3.141;


void drawWindow()
{



    glPushMatrix();
    // glEnable(GL_LIGHTING);
    // glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, lightBlue);
    //  glMaterialfv(GL_FRONT, GL_SPECULAR, white);
    // glMaterialf(GL_FRONT, GL_SHININESS, 70.0);

    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,  glass);

    //glNormal3f(0.0, 5.0, 0.0);

    //glColor3f(0.0,0.0,0.4);
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(0,1,1);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(0,1,0);
    glTexCoord2f(1.0f,0.0f);
    glVertex3f(0,0,0);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(0,0,1);
    glEnd();

    glDisable(GL_TEXTURE_2D);
    // glDisable(GL_LIGHTING);
    glPopMatrix();



}

void drawBody()
{

    glPushMatrix();

    //glEnable(GL_LIGHTING);
    //glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, orange);
    // glutSolidCube(1);
    drawTexturedCube(1,1,1,metallic_stripe);
    glPopMatrix();


    glPushMatrix();
    //  GLUquadric* quad = gluNewQuadric();
    glTranslatef(0, 0.5, -0.5);
    // gluCylinder(quad, 0.5, 0.5, 1, 30, 30);
    // gluDeleteQuadric(quad);
    drawTexturedCylinder(0.5,1,lodge_wall);
    glPopMatrix();

    glPushMatrix();
    // quad = gluNewQuadric();
    glTranslatef(0, -0.5, -0.5);
    // gluCylinder(quad, 0.5, 0.5, 1, 30, 30);
    drawTexturedCylinder(0.5,1,lodge_wall);
    //gluDeleteQuadric(quad);
    glPopMatrix();



}

void drawBodyWithWindows()
{
    drawBody();

    glPushMatrix();
    glTranslatef(0.52,-0.2,0.1);
    glScalef(0.5,0.6,0.4);
    drawWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.52,-0.2,-0.5);
    glScalef(0.5,0.6,0.4);
    drawWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.52,-0.2,0.1);
    glScalef(0.5,0.6,0.4);
    drawWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.52,-0.2,-0.5);
    glScalef(0.5,0.6,0.4);
    drawWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.35, -0.2, 0.53);
    glRotatef(90,0,1,0);
    glScalef(1, 0.6, 0.7);
    drawWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.35, -0.2, -0.53);
    glRotatef(90, 0, 1, 0);
    glScalef(1, 0.6, 0.7);
    drawWindow();
    glPopMatrix();

}


void drawHandleCurvedBottom(float radius)
{

    float angle = 0,height=0.5;
    int n = 30;

    glPushMatrix();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, red1);
    //glColor3f(0.40,0.4,0.5);

    glBegin(GL_QUAD_STRIP);
    for (int c = 0; c <= n/4; c++)
    {
        double x = radius * cos(angle);
        double z = radius * sin(angle);
        glVertex3f(x, 0, z);
        glVertex3f(x, height, z);

        angle = angle + ((2 * PI) / n);
    }
    glEnd();

    angle = 0;

    glBegin(GL_QUAD_STRIP);
    for (int c = 0; c <= n / 4; c++)
    {
        double x = radius * cos(angle);
        double z = radius * sin(angle);
        glVertex3f(x * 0.8, 0, z * 0.8);
        glVertex3f(x * 0.8, height, z * 0.8);

        angle = angle + ((2 * PI) / n);
    }
    glEnd();

    angle = 0;

    glBegin(GL_QUAD_STRIP);
    for (int c = 0; c <= n / 4; c++)
    {
        double x = radius * cos(angle);
        double z = radius * sin(angle);
        glVertex3f(x, height, z);
        glVertex3f(x * 0.8, height, z * 0.8);

        angle = angle + ((2 * PI) / n);
    }
    glEnd();

    angle = 0;

    glBegin(GL_QUAD_STRIP);
    for (int c = 0; c <= n / 4; c++)
    {
        double x = radius * cos(angle);
        double z = radius * sin(angle);
        glVertex3f(x, 0, z);
        glVertex3f(x * 0.8, 0, z * 0.8);

        angle = angle + ((2 * PI) / n);
    }
    glEnd();
    glDisable(GL_LIGHTING);

    glPopMatrix();
}


void arch(float radius)
{

    float angle = 0, height = 0.5;
    int n = 30;

    glPushMatrix();
    //glColor3f(0.40, 0.4, 0.5);
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, purple);
    glBegin(GL_QUAD_STRIP);
    for (int c = 0; c <= n / 4; c++)
    {
        double x = radius * cos(angle);
        double z = radius * sin(angle);
        glVertex3f(x, 0, z);
        glVertex3f(x, height, z);

        angle = angle + ((2 * PI) / n);
    }
    glEnd();

    angle = 0;

    glBegin(GL_QUAD_STRIP);
    for (int c = 0; c <= n / 4; c++)
    {
        double x = radius * cos(angle);
        double z = radius * sin(angle);
        glVertex3f(x * 0.8, 0, z * 0.8);
        glVertex3f(x * 0.8, height, z * 0.8);

        angle = angle + ((2 * PI) / n);
    }
    glEnd();

    angle = 0;

    glBegin(GL_QUAD_STRIP);
    for (int c = 0; c <= n / 4; c++)
    {
        double x = radius * cos(angle);
        double z = radius * sin(angle);
        glVertex3f(x, height, z);
        glVertex3f(x * 0.8, height, z * 0.8);

        angle = angle + ((2 * PI) / n);
    }
    glEnd();

    angle = 0;

    glBegin(GL_QUAD_STRIP);
    for (int c = 0; c <= n / 4; c++)
    {
        double x = radius * cos(angle);
        double z = radius * sin(angle);
        glVertex3f(x, 0, z);
        glVertex3f(x * 0.8, 0, z * 0.8);

        angle = angle + ((2 * PI) / n);
    }
    glEnd();
    glDisable(GL_LIGHTING);
    glPopMatrix();
}


void drawHandeTop()
{
    glPushMatrix();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, purple);
    glMaterialfv(GL_FRONT, GL_SPECULAR, white);
    glMaterialf(GL_FRONT, GL_SHININESS, 30.0);
    //glColor3f(0.40, 0.1, 0.5);
    glScalef(0.5,0.5,1);
    glTranslatef(0,0.5,0);
    glutSolidCube(1);
    glDisable(GL_LIGHTING);

    glPopMatrix();
}

void drawHandeBottom()
{
    glPushMatrix();

    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, purple);
    glScalef(0.1, 0.5, 1);

    glutSolidCube(1);

    glDisable(GL_LIGHTING);

    glPopMatrix();
}


void drawHandle()
{

    glPushMatrix();
    glTranslatef(0, 1, 0);
    glRotatef(90,1,0,0);


    drawHandeTop();

    glPushMatrix();
    glTranslatef(-1, 0.25, 1.4);
    glRotatef(90, 0, 1, 0);
    drawHandeBottom();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.8, 0, 0.5);
    drawHandleCurvedBottom(1);
    glPopMatrix();

    glPopMatrix();


}
void drawWire()
{
    glPushMatrix();
    //glColor3f(0.3, 0.3, 0.3);

    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, darkBrown);
    glTranslatef(1, 2,0);
    glRotatef(-90,1,0,0);
    gluCylinder(gluNewQuadric(),0.05,0.05,2.5,30,30);
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE,lightBlue );
    glTranslatef(0, 0,2.5);
    glRotatef(90,1,0,0);
    glutSolidTorus(0.08,0.1,25,25);
    glDisable(GL_LIGHTING);


    glPopMatrix();
}

void drawCableCar()
{

    //loadTextureCableCar();

    glPushMatrix();
    glScalef(3,3,5);
    drawBodyWithWindows();

    //glPushMatrix();
    //glRotatef(90,1,0,0);
    //drawBody();
    //glPopMatrix();

    glPushMatrix();
    glScalef(1, 1, 0.5);
    glTranslatef(1, 1.4,-0.1);
    drawHandle();
    glPopMatrix();


    glPushMatrix();
    drawWire();
    glPopMatrix();



    glPopMatrix();


}
