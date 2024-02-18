void drawSnowManBody()
{
    glPushMatrix();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, white);
    // glColor3f(1.0, 1.0, 1.0);
    glMaterialf(GL_FRONT, GL_SHININESS, 120.0);
    glutSolidSphere(3, 25, 10);
    glDisable(GL_LIGHTING);
    glPopMatrix();
}

void drawSnowManHands()
{

    glPushMatrix();

    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, darkBrown);

    glPushMatrix();
    glTranslatef(-2,2,0);
    glRotatef(-30,0,0,1);
    glRotatef(-90,0,1,0);
    gluCylinder(gluNewQuadric(),0.2,0.2,2,30,30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(2,2,0);
    glRotatef(30,0,0,1);
    glRotatef(90,0,1,0);
    gluCylinder(gluNewQuadric(),0.2,0.2,2,30,30);
    glPopMatrix();

    glDisable(GL_LIGHTING);
    glPopMatrix();
}

void drawSnowManEyes()
{
    glPushMatrix();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT, black);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, black);
    glMaterialfv(GL_FRONT, GL_SPECULAR, white);
    glMaterialf(GL_FRONT, GL_SHININESS, 120.0);
    glPushMatrix();
    glTranslatef(-0.7, 0.0, 0.0);
    glutSolidSphere(0.3, 8, 8);
    glPopMatrix();
    glTranslatef(0.7, 0.0, 0.0);
    glutSolidSphere(0.3, 8, 8);
    glPopMatrix();
    glDisable(GL_LIGHTING);
    glPopMatrix();
}
void drawSnowManNose()
{
    glPushMatrix();
    glEnable(GL_LIGHTING);

    glMaterialfv(GL_FRONT, GL_AMBIENT, orange);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, orange);

    glutSolidCone(1,3,15,15);
    glDisable(GL_LIGHTING);
    glPopMatrix();
}

void drawSnowManHat()
{
    glPushMatrix();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, white);
    GLUquadricObj* quadratic;
    quadratic = gluNewQuadric();
    glPushMatrix();
    glRotatef(-90, 1, 0, 0 );
    gluCylinder(quadratic, 1.0f, 1.0f, 3.0f, 32, 32);
    glPopMatrix();
    glRotatef(-90, 1, 0, 0);
    gluCylinder(quadratic, 2.0f, 2.0f, 0.5f, 32, 32);
    glDisable(GL_LIGHTING);
    glPopMatrix();

}

void drawSnowManHead()
{
    glPushMatrix();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT, white);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, white);
    glMaterialfv(GL_FRONT, GL_SPECULAR, white);
    glMaterialf(GL_FRONT, GL_SHININESS, 120.0);
    glutSolidSphere(2, 15, 15);

    glPushMatrix();
    glTranslatef(0, 0.5, 2);
    drawSnowManEyes();
    glScalef(0.3, 0.3, 0.7);
    glTranslatef(0, 0.2, 3);
    drawSnowManNose();
    glPopMatrix();

    glDisable(GL_LIGHTING);

    glPopMatrix();

}

void drawSnowMan()
{
    glPushMatrix();
    glTranslatef(0, 4, 0);
    glScalef(0.6, 0.6, 0.6);
    drawSnowManHead();
    drawSnowManBody();
    drawSnowManHands();
    glPopMatrix();

}
