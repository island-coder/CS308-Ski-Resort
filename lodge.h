#include "colors.h"

void drawWalls()
{
    glPushMatrix ();
    glEnable(GL_LIGHTING);
    glColor3f(0.8,0.7,0.7);
    glMaterialfv(GL_FRONT, GL_AMBIENT, lightPurple); //FRONT,BACK,FRONT_AND_BACK
    glMaterialfv(GL_FRONT, GL_DIFFUSE, lightPurple);
    // glMaterialfv(GL_FRONT, GL_SPECULAR, white);
//glMaterialf(GL_FRONT, GL_SHININESS, 30.0);
    glutSolidCube(1);
    glDisable(GL_LIGHTING);
    glPopMatrix();

}

void drawRoof()
{
    glPushMatrix();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT,GL_AMBIENT_AND_DIFFUSE,brown1);
    glMaterialfv(GL_FRONT, GL_SPECULAR, white);

    glPushMatrix();
    glColor3f(0.4,0.2,0.2);
    glBegin(GL_QUADS);
    glVertex3f(0,1,1.2);
    glVertex3f(0,1,-0.2);
    glVertex3f(1,0,-0.2);
    glVertex3f(1,0,1.2);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.4,0.2,0.2);
    glBegin(GL_QUADS);
    glVertex3f(0,1,1.2);
    glVertex3f(0,1,-0.2);
    glVertex3f(-1,0,-0.2);
    glVertex3f(-1,0,1.2);
    glEnd();
    glPopMatrix();

    glDisable(GL_LIGHTING);

    glPopMatrix();

    glPushMatrix();
    glEnable(GL_LIGHTING);

    glMaterialfv(GL_FRONT, GL_AMBIENT, lightPurple); //FRONT,BACK,FRONT_AND_BACK
    glMaterialfv(GL_FRONT, GL_DIFFUSE, lightPurple);

    glPushMatrix();
    glColor3f(0.8,0.7,0.7);
    glBegin(GL_POLYGON);
    glVertex3f(-1*0.5,0.5,0);
    glVertex3f(0,1,0);
    glVertex3f(1*0.5,0.5,0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.8,0.7,0.7);
    glBegin(GL_POLYGON);
    glVertex3f(-1*0.5,0.5,1);
    glVertex3f(0,1,1);
    glVertex3f(1*0.5,0.5,1);
    glEnd();
    glPopMatrix();

    glDisable(GL_LIGHTING);
    glPopMatrix();


}

void drawFence(int n)
{

    glPushMatrix();
    glColor3f(0.8,0.7,0.7);
    float startx=-0.5,x=0;
    float endx=0.5;
    float divs=10;
    float gap=(endx-startx)/divs;
    for(int i=0; i<n; i++)
    {
        glPushMatrix();
        glTranslatef(x,0,0);
        glRotatef(-90,1,0,0);
        gluCylinder(gluNewQuadric(),gap*0.2,gap*0.2,gap*1.5,30,30);
        glPopMatrix();
        x+=gap;
    }
    glPopMatrix();
}

void drawFences()
{
    glPushMatrix();
    glTranslatef(-0.3,0,1.2);
    drawFence(8);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.4,0,1.2);
    glRotatef(90,0,1,0);
    drawFence(17);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.4,0,1.2);
    glRotatef(90,0,1,0);
    drawFence(17);
    glPopMatrix();

}


void drawLodgeWindow()
{

    glPushMatrix();
    glColor3f(0,0.2,0.8);
    glScalef(0.6,1,0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix ();
    glColor3f(0.7,0.5,0.2);
    glScalef(0.6,0.08,0.05);
    glTranslatef(0,0,1.2);
    glutSolidCube(1);
    glPopMatrix();


    glPushMatrix (); //hori top
    glColor3f(0.7,0.5,0.2);
    glScalef(0.6,0.08,0.05);
    glTranslatef(0,6,1.2);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix(); //hori bottom
    glColor3f(0.7,0.5,0.2);
    glScalef(0.6,0.08,0.05);
    glTranslatef(0,-6,1.2);
    glutSolidCube(1);
    glPopMatrix();




    glPushMatrix ();
    glColor3f(0.7,0.5,0.2);
    glScalef(0.08,1,0.05);
    glTranslatef(0,0,1.2);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix ();  //left vert
    glColor3f(0.7,0.5,0.2);
    glScalef(0.08,1,0.05);
    glTranslatef(4,0,1.2);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix (); //right vert
    glColor3f(0.7,0.5,0.2);
    glScalef(0.08,1,0.05);
    glTranslatef(-4,0,1.2);
    glutSolidCube(1);
    glPopMatrix();

}

void drawLodge()
{

    glPushMatrix();
    glScalef(5,5,5);

    glPushMatrix();
    glTranslatef(0,0.5,0);
    drawWalls();

    glPushMatrix();
    glTranslatef(0,0,-0.5);
    drawRoof();
    glPopMatrix();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,1,1);
    glScalef(0.2,0.2,0.2);
    glTranslatef(1,0,-2.5);
    drawLodgeWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,1,1);
    glScalef(0.2,0.2,0.2);
    glTranslatef(-1,0,-2.5);
    drawLodgeWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,1,1);
    glScalef(0.2,0.2,0.2);
    glTranslatef(1,-2,-2.5);
    drawLodgeWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,1,1);
    glScalef(0.2,0.2,0.2);
    glTranslatef(-1,-2,-2.5);
    drawLodgeWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,1,1);
    glScalef(0.2,0.2,0.2);
    glTranslatef(1,-2,-7.5);
    glRotatef(180,0,1,0);
    drawLodgeWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,1,1);
    glScalef(0.2,0.2,0.2);
    glTranslatef(-1,-2,-7.5);
    glRotatef(180,0,1,0);
    drawLodgeWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,1,1);
    glScalef(0.2,0.2,0.2);
    glTranslatef(-1,0,-7.5);
    glRotatef(180,0,1,0);
    drawLodgeWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,1,1);
    glScalef(0.2,0.2,0.2);
    glTranslatef(1,0,-7.5);
    glRotatef(180,0,1,0);
    drawLodgeWindow();
    glPopMatrix();


    glPopMatrix();

}

void drawStair()
{

    glPushMatrix();
    glColor3f(0.4,0.3,0.2);
    glScalef(2,0.3,1);
    glutSolidCube(1);
    glPopMatrix();

}

void drawStairs()
{

    float angle = 0,y=0,gap=0.3,height=7,radius=2;
    int n = 10;

    while(y<=height)   //idnicate where the helix should end(i.r at cylinder height )
    {
        double x = radius * cos(angle);
        double z = radius * sin(angle);
        y = y + gap;

        glPushMatrix();

        glTranslatef(x,y,z);

        glPushMatrix();
        glRotatef((-180/PI)*angle,0,1,0);
        drawStair();
        glPopMatrix();

        glPopMatrix();

        angle = angle + ((2 * PI) / n);
    }

    glPushMatrix();
    glColor3f(0.6,0.6,0.2);
    glRotatef(-90,1,0,0);
    gluCylinder(gluNewQuadric(),1,0.3,height,30,30);
    glPopMatrix();


}

void drawLodgeWithBase()
{

    glPushMatrix();
    glColor3f(0.6,0,0.6);
    glScalef(3,0.01,5);
    glutSolidCube(2.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7,0.5,0.0);
    glTranslatef(-2,0,2);
    glRotatef(-90,1,0,0);
    gluCylinder(gluNewQuadric(),0.2,0.2,5,30,30);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7,0.5,0.0);
    glTranslatef(2,0,2);
    glRotatef(-90,1,0,0);
    gluCylinder(gluNewQuadric(),0.2,0.2,5,30,30);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7,0.5,0.0);
    glTranslatef(-2,0,-2);
    glRotatef(-90,1,0,0);
    gluCylinder(gluNewQuadric(),0.2,0.2,5,30,30);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7,0.5,0.0);
    glTranslatef(2,0,-2);
    glRotatef(-90,1,0,0);
    gluCylinder(gluNewQuadric(),0.2,0.2,5,30,30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,3,0);
    drawLodge();
    glPopMatrix();

    glPushMatrix();
    glScalef(5,5,5);
    drawFences();
    glPopMatrix();

    glPushMatrix();
    glScalef(
        0.5,0.5,0.5);
    drawStairs();
    glPopMatrix();
}
