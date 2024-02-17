

void drawEye()
{

    glPushMatrix();
    // glColor3f(1,1,1);
    glScalef(1,0.5,0.5);
    glutSolidSphere(1,30,30);
    glPopMatrix();

    glPushMatrix();
    // glColor3f(0,0,0);
    glTranslatef(0,0,0.5);
    glutSolidSphere(0.2,30,30);
    glPopMatrix();

}

void drawMouth()
{

    glPushMatrix();
    //glColor3f(0,0,0);
    glScalef(1,1,0.1);
    //glutSolidSphere(0.6,30,30);
    drawTexturedSphere(0.6,glass);
    glPopMatrix();

    glPushMatrix();
    //glColor3f(1,1,1);
    glTranslatef(0,0,0.3);

    glPushMatrix();
    glTranslatef(-0.01,0,0);
    glutSolidCube(0.3);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(+0.01,0,0);
    glutSolidCube(0.3);
    glPopMatrix();

    glPopMatrix();


}

void drawHead()
{

    glPushMatrix();
    // glColor3f(0.9,0.9,0.5);
    glScalef(1,1.3,1);
    //glutSolidSphere(1,30,30);
    drawTexturedSphere(1,brick);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.5,0.5,1);
    glScalef(0.2,0.2,0.2);
    drawEye();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.5,0.5,1);
    glScalef(0.2,0.2,0.2);
    drawEye();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0,1);
    glScalef(0.7,0.5,0.5);
    drawMouth();
    glPopMatrix();

}

void drawHandLeft()
{

    glPushMatrix();
    //glColor3f(0.0,0.5,0.5);
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, lightBlue);
    glTranslatef(0,1,0);
    glRotatef(-45,0,0,1);
    glTranslatef(0,-1,0);

    glRotatef(-90,1,0,0);
    gluCylinder(gluNewQuadric(),0.2,0.2,1,30,30);
    glDisable(GL_LIGHTING);
    glPopMatrix();
}

void drawHandRight()
{

    glPushMatrix();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, lightBlue);
    glTranslatef(0,1,0);
    glRotatef(45,0,0,1);
    glTranslatef(0,-1,0);

    glRotatef(-90,1,0,0);
    gluCylinder(gluNewQuadric(),0.2,0.2,1,30,30);
    glDisable(GL_LIGHTING);
    glPopMatrix();
}

void drawLeg()
{
    glPushMatrix();
    //glColor3f(0.0,0.5,0.5);
    glRotatef(-90,1,0,0);
    gluCylinder(gluNewQuadric(),0.2,0.2,1,30,30);
    glPopMatrix();
}

void drawTorso()
{

    glPushMatrix();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, purple);
    //glColor3f(0.0,0.9,0.5);
    glRotatef(-90,1,0,0);
    gluCylinder(gluNewQuadric(),1,0.6,1,30,30);
    glDisable(GL_LIGHTING);
    glPopMatrix();

    glPushMatrix();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, red1);
    glTranslatef(0,-0.1,0);
    glRotatef(-90,1,0,0);
    gluCylinder(gluNewQuadric(),1,1,0.2,30,30);
    glDisable(GL_LIGHTING);
    glPopMatrix();

    glPushMatrix();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, lightBlue);
    glTranslatef(0,1,0);
    glRotatef(-90,1,0,0);
    gluCylinder(gluNewQuadric(),0.6,0.6,0.2,30,30);
    glDisable(GL_LIGHTING);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.5,0,0);
    drawHandLeft();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.5,0,0);
    drawHandRight();
    glPopMatrix();



}



void drawDoll()
{
    glPushMatrix();
    glTranslatef(0,1.5,0);
    glScalef(0.6,0.6,0.6);
    drawHead();
    glPopMatrix();

    glPushMatrix();
    drawTorso();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.5,-1,0);
    drawLeg();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.5,-1,0);
    drawLeg();
    glPopMatrix();

}
