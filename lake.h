#include "colors.h"


void drawLakeSegment()
{
    glPushMatrix();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, lightBlue);
    //glMaterialfv(GL_FRONT, GL_SPECULAR, white);
    //glMaterialf(GL_FRONT, GL_SHININESS, 30.0);
    //gluCylinder(gluNewQuadric(),5,5,0.2,30,30);
    glutSolidSphere(2,30,30) ;
    glDisable(GL_LIGHTING);
    glPopMatrix();

}


void drawLake()
{
    glPushMatrix();

    glScalef(2,0.1,2);
    drawLakeSegment();

    glPopMatrix();

    glPushMatrix();

    glScalef(1,0.1,1);
    glTranslatef(3,0,0);
    drawLakeSegment();

    glPopMatrix();

    glPushMatrix();

    glScalef(1.5,0.1,1.8);
    glTranslatef(-1,0,-2);
    drawLakeSegment();

    glPopMatrix();

//    glPushMatrix();
//
//    glScalef(1.5,0.2,1.5);
//    glTranslatef(0,0,-2);
//    drawLakeSegment();
//
//    glPopMatrix();
}
