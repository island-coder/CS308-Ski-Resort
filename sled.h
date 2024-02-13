


void drawSledFront()
{
    glPushMatrix();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, wood);
    float PI = 3.141;
    float radius=2,angle = 0,height=4;
    int n = 30;
    glTranslatef(1,2,-2);
    glRotatef(90,1,0,0);
    glBegin(GL_QUAD_STRIP);
    for (int c = 0; c <= n/3; c++)
    {
        double x = radius * cos(angle);
        double z = radius * sin(angle);
        glVertex3f(x, 0, z);
        glVertex3f(x, height, z);

        angle = angle + ((2 * PI) / n);
    }
    glEnd();

    glDisable(GL_LIGHTING);
    glPopMatrix();
}

void drawSledSupport()
{
    glPushMatrix();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, brown1);
    glScalef(0.3,0.2,4);
    glutSolidCube(1);
    glDisable(GL_LIGHTING);
    glPopMatrix();
}

void drawSledBase()
{
    glPushMatrix();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, wood);
    glScalef(6,0.2,4);
    glutSolidCube(1);
    glDisable(GL_LIGHTING);
    glPopMatrix();
}
void drawSled()
{

    glPushMatrix();
    drawSledFront();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-2.8,0,0);
    drawSledBase();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0.2,0);
    drawSledSupport();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1,0.2,0);
    drawSledSupport();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-2,0.2,0);
    drawSledSupport();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-3,0.2,0);
    drawSledSupport();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-4,0.2,0);
    drawSledSupport();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-5,0.2,0);
    drawSledSupport();
    glPopMatrix();

}
