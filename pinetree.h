
void drawLeaves()
{

    glPushMatrix();
    //glRotatef(-90,1,0,0);
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT, pineGreen);
    glMaterialfv(GL_FRONT, GL_SPECULAR, pineGreen);
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
    drawLeaves();
    glPopMatrix();
    drawTrunk();
    glPopMatrix();
}
