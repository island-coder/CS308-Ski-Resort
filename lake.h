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


void drawBezierLakeSegment()
{
    float P0[] = {0,0};
    float P1[] = {0.4,0.8};
    float P2[] = {1,-1};
    float P3[] = {1.4,-0};
    float P4[] = {2,-0.4};
    float P5[] = {0,-1};


    glPushMatrix();
    glScalef(5,1,8);
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT, lightBlue);
    glMaterialfv(GL_FRONT, GL_SPECULAR, white);
    glMaterialf(GL_FRONT, GL_SHININESS, 70.0);

    glNormal3f(0,1,0);
    glBegin(GL_POLYGON);
    glNormal3f(0,1,0);
    for(float t=0; t<=1; t+=0.01)
    {
        GLfloat x= pow((1-t),3)*P0[0]+3*pow((1-t),2)*t*P1[0]+3*(1-t)*pow(t,2)*P2[0]+pow(t,3)*P3[0];
        GLfloat z= pow((1-t),3)*P0[1]+3*pow((1-t),2)*t*P1[1]+3*(1-t)*pow(t,2)*P2[1]+pow(t,3)*P3[1];
        glVertex3f(x,0,z);
    }
    for(float t=0; t<=1; t+=0.01)
    {
        GLfloat x= pow((1-t),3)*P3[0]+3*pow((1-t),2)*t*P4[0]+3*(1-t)*pow(t,2)*P5[0]+pow(t,3)*P0[0];
        GLfloat z= pow((1-t),3)*P3[1]+3*pow((1-t),2)*t*P4[1]+3*(1-t)*pow(t,2)*P5[1]+pow(t,3)*P0[1];
        glVertex3f(x,0,z);
    }
    glEnd();
    glDisable(GL_LIGHTING);
    glPopMatrix();
}

void drawBezierLake()
{
    glPushMatrix();
    drawBezierLakeSegment();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(6,0,0);
    glRotatef(-180,0,1,0);
    glScalef(2,1,2);
    drawBezierLakeSegment();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-14,0,0);
    glRotatef(0,0,1,0);
    glScalef(2,1,2);
    drawBezierLakeSegment();
    glPopMatrix();
}
