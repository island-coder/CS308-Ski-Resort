#include "colors.h"

void drawWalls()
{
    glPushMatrix ();
    glEnable(GL_LIGHTING);
    //glColor3f(0.8,0.7,0.7);
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
    // glEnable(GL_LIGHTING);
    //glMaterialfv(GL_FRONT,GL_AMBIENT_AND_DIFFUSE,brown1);
    glMaterialfv(GL_FRONT, GL_SPECULAR, white);
    glNormal3f(0.0, 0.0, 10.0);

    glEnable(GL_TEXTURE_2D);
    glPushMatrix();
    //glColor3f(0.4,0.2,0.2);
    glBindTexture(GL_TEXTURE_2D, lodge_roof);
    glBegin(GL_QUADS);
    glVertex3f(0,1,1.2);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(0,1,-0.2);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(1,0,-0.2);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(1,0,1.2);
    glTexCoord2f(1.0f, 1.0f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    // glColor3f(0.4,0.2,0.2);
    glBindTexture(GL_TEXTURE_2D, lodge_roof);
    glBegin(GL_QUADS);
    //glNormal3f(-1.0, 1.0, 1.0);
    glVertex3f(0,1,1.2);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(0,1,-0.2);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-1,0,-0.2);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-1,0,1.2);
    glTexCoord2f(1.0f, 1.0f);
    glEnd();
    glPopMatrix();

    glDisable(GL_TEXTURE_2D);

    // glDisable(GL_LIGHTING);

    glPopMatrix();

    glPushMatrix();
     glEnable(GL_LIGHTING);
    // glNormal3f(0.0, 0.0, -1.0);

    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, lightPurple); //FRONT,BACK,FRONT_AND_BACK
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, lightPurple);

    //glBindTexture(GL_TEXTURE_2D, lodge_wall);
    glPushMatrix();
   // glEnable(GL_TEXTURE_2D);
    // glColor3f(0.8,0.7,0.7);
    ////glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
 //   glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glBegin(GL_POLYGON);
    glVertex3f(-1*0.5,0.5,0);
  //  glTexCoord2f(0.0f, 0.0f);
    glVertex3f(0,1,0);
   // glTexCoord2f(0.5f, 1.0f);
    glVertex3f(1*0.5,0.5,0);
   // glTexCoord2f(1.0f, 0.0f);
    glEnd();
    //glDisable(GL_TEXTURE_2D);
    glPopMatrix();

    //glBindTexture(GL_TEXTURE_2D, lodge_wall);
    glPushMatrix();
//glColor3f(0.8,0.7,0.7);
//    glEnable(GL_TEXTURE_2D);
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glBegin(GL_POLYGON);
    glVertex3f(-1*0.5,0.5,1);
    //glTexCoord2f(0.0f, 0.0f);
    glVertex3f(0,1,1);
    //glTexCoord2f(0.5f, 1.0f);
    glVertex3f(1*0.5,0.5,1);
    //glTexCoord2f(1.0f, 0.0f);
    glEnd();
    glDisable(GL_TEXTURE_2D);
    glPopMatrix();


    glDisable(GL_LIGHTING);
    glPopMatrix();


}

void drawFence(int n)
{

    glPushMatrix();
    glEnable(GL_LIGHTING);

    glMaterialfv(GL_FRONT, GL_AMBIENT, darkBrown); //FRONT,BACK,FRONT_AND_BACK
    glMaterialfv(GL_FRONT, GL_DIFFUSE, darkBrown);

    // glColor3f(0.8,0.7,0.7);
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

    glDisable(GL_LIGHTING);
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
    glEnable(GL_LIGHTING);

    glMaterialfv(GL_FRONT, GL_AMBIENT, lightBlue); //FRONT,BACK,FRONT_AND_BACK
    glMaterialfv(GL_FRONT, GL_DIFFUSE, lightBlue);
    // glColor3f(0,0.2,0.8);
    glScalef(0.6,1,0.1);
    glutSolidCube(1);
    glDisable(GL_LIGHTING);

    glPopMatrix();


    glPushMatrix();
    glEnable(GL_LIGHTING);

    glMaterialfv(GL_FRONT, GL_AMBIENT, lightBrown); //FRONT,BACK,FRONT_AND_BACK
    glMaterialfv(GL_FRONT, GL_DIFFUSE, lightBrown);


    glPushMatrix ();
    // glColor3f(0.7,0.5,0.2);
    glScalef(0.6,0.08,0.05);
    glTranslatef(0,0,1.2);
    glutSolidCube(1);
    glPopMatrix();


    glPushMatrix (); //hori top
    //  glColor3f(0.7,0.5,0.2);
    glScalef(0.6,0.08,0.05);
    glTranslatef(0,6,1.2);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix(); //hori bottom
    // glColor3f(0.7,0.5,0.2);
    glScalef(0.6,0.08,0.05);
    glTranslatef(0,-6,1.2);
    glutSolidCube(1);
    glPopMatrix();




    glPushMatrix ();
    // glColor3f(0.7,0.5,0.2);
    glScalef(0.08,1,0.05);
    glTranslatef(0,0,1.2);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix ();  //left vert
    //glColor3f(0.7,0.5,0.2);
    glScalef(0.08,1,0.05);
    glTranslatef(4,0,1.2);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix (); //right vert
    // glColor3f(0.7,0.5,0.2);
    glScalef(0.08,1,0.05);
    glTranslatef(-4,0,1.2);
    glutSolidCube(1);
    glPopMatrix();

    glDisable(GL_LIGHTING);

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
    //drawWallsTop();
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
    //glColor3f(0.4,0.3,0.2);
    glScalef(2,0.3,1);
    glutSolidCube(1);
    glPopMatrix();

}

void drawStairs()
{

    float angle = 0,y=0,gap=0.3,height=7,radius=2;
    int n = 10;

    glPushMatrix();
    glEnable(GL_LIGHTING);

    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, red1); //FRONT,BACK,FRONT_AND_BACK

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
    // glColor3f(0.6,0.6,0.2);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, darkBrown);
    glRotatef(-90,1,0,0);
    gluCylinder(gluNewQuadric(),1,0.3,height,30,30);
    glPopMatrix();


    glDisable(GL_LIGHTING);
    glPopMatrix();

}

void drawLodgeWithBase()
{

    glPushMatrix();
    glEnable(GL_LIGHTING);

    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE,darkBrown); //FRONT,BACK,FRONT_AND_BACK
    //glColor3f(0.6,0,0.6);
    glScalef(3,0.1,4);
    glTranslatef(0,0,0.3);
    glutSolidCube(2.5);
    glDisable(GL_LIGHTING);
    glPopMatrix();

    glPushMatrix();
    glEnable(GL_LIGHTING);

    //glMaterialfv(GL_FRONT, GL_AMBIENT, darkYellow); //FRONT,BACK,FRONT_AND_BACK
    // glMaterialfv(GL_FRONT, GL_DIFFUSE, darkYellow);

    glPushMatrix();
    // glColor3f(0.7,0.5,0.0);
    glTranslatef(-2,0,2);
    glRotatef(-90,1,0,0);
    gluCylinder(gluNewQuadric(),0.2,0.2,5,30,30);
    glPopMatrix();

    glPushMatrix();
    //glColor3f(0.7,0.5,0.0);
    glTranslatef(2,0,2);
    glRotatef(-90,1,0,0);
    gluCylinder(gluNewQuadric(),0.2,0.2,5,30,30);
    glPopMatrix();

    glPushMatrix();
    //glColor3f(0.7,0.5,0.0);
    glTranslatef(-2,0,-2);
    glRotatef(-90,1,0,0);
    gluCylinder(gluNewQuadric(),0.2,0.2,5,30,30);
    glPopMatrix();

    glPushMatrix();
    //glColor3f(0.7,0.5,0.0);
    glTranslatef(2,0,-2);
    glRotatef(-90,1,0,0);
    gluCylinder(gluNewQuadric(),0.2,0.2,5,30,30);
    glPopMatrix();

    glDisable(GL_LIGHTING);

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
