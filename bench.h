#include "colors.h"

void drawStrip()
{
    glPushMatrix();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, wood);
    glScalef(4.5,0.6,0.2);
    glutSolidCube(1);
    glDisable(GL_LIGHTING);
    glPopMatrix();

}

void drawSupport()
{
    glPushMatrix();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, brown1);
    glScalef(0.3,1.5,0.2);
    glutSolidCube(1);
    glDisable(GL_LIGHTING);
    glPopMatrix();
}

void drawBenchSeat()
{
    glPushMatrix();
    drawStrip();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,0.8,0);
    drawStrip();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,1.6,0);
    drawStrip();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,1,-0.01);
    drawSupport();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1,1,-0.01);
    drawSupport();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1,1,-0.01);
    drawSupport();
    glPopMatrix();
}

void drawBenchBase()
{
    glPushMatrix();
    glTranslatef(0,0,1);
    glScalef(1,1,2);
    glRotatef(90,1,0,0);
    drawStrip();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,-0.5,0.5);
    glScalef(1,2.5,2);
    glRotatef(-45,1,0,0);
    drawStrip();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,-0.5,0.5);
    glScalef(1,2.5,2);
    glRotatef(45,1,0,0);
    drawStrip();
    glPopMatrix();

}

void drawBench()
{
    glPushMatrix();
    glTranslatef(0,1,0);
    drawBenchSeat();
    drawBenchBase();
    glPopMatrix();


}
