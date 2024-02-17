
void drawLeaves(GLfloat * color)
{

    glPushMatrix();
    //glRotatef(-90,1,0,0);
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT, color);
    glMaterialfv(GL_FRONT, GL_SPECULAR, color);
    glMaterialf(GL_FRONT, GL_SHININESS, 10.0);

    // First cone
    glTranslatef(0, 0, 0);
    glPushMatrix();
    glRotatef(-90,1,0,0);
    glutSolidCone(3, 4, 20, 20);
    glPopMatrix();

    // Second cone
    glTranslatef(0, 1.5, 0);
    glPushMatrix();
    glRotatef(-90,1,0,0);
    glutSolidCone(2.5, 4, 20, 20);
    glPopMatrix();

    // Third cone
    glTranslatef(0, 1.5, 0);
    glPushMatrix();
    glRotatef(-90,1,0,0);
    glutSolidCone(2, 4, 20, 20);
    glPopMatrix();

    glDisable(GL_LIGHTING);

    glPopMatrix();

}

void drawTrunk()
{
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT, darkBrown);
    glMaterialfv(GL_FRONT, GL_SPECULAR, darkBrown);
    glPushMatrix();
    //glColor3f(0.5f, 0.35f, 0.05f);
    glRotatef(-90,1,0,0);
    GLUquadric* quad = gluNewQuadric();
    gluCylinder(quad, 1, 1, 5, 20, 20);
    gluDeleteQuadric(quad);
    glDisable(GL_LIGHTING);
    glPopMatrix();

}

void drawPineTree()
{
    glPushMatrix();
    glScalef(0.5,0.5,0.5);
    glPushMatrix();
    glTranslatef(0,3,0);
    drawLeaves(pineGreen);
    glPopMatrix();
    drawTrunk();
    glPopMatrix();
}

void drawStar()
{
    glPushMatrix();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT, gold);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, gold);
    glMaterialfv(GL_FRONT, GL_SPECULAR, white);

    glPushMatrix();
    glRotatef(50,1,0,0);
    glutSolidTetrahedron();
    glPopMatrix();

    glPushMatrix();
    glutSolidTetrahedron();
    glPopMatrix();

    glDisable(GL_LIGHTING);
    glPopMatrix();

}

void drawChristmasTree()
{

    glPushMatrix();

    glScalef(0.5,0.5,0.5);

    glPushMatrix();
    glTranslatef(0,3,0);
    drawLeaves(green);
    glPopMatrix();

    drawTrunk();

    glPushMatrix();
    glTranslatef(0,10.5,0);
    glScalef(0.1,0.6,0.6);
    drawStar();
    glPopMatrix();

    glPushMatrix();
     glTranslatef(0,0,0);
    glRotatef(-90,1,0,0);
    drawTexturedCylinder(2,1,brick);
    glPopMatrix();

    glPopMatrix();

}
