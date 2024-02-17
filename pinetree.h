int treeLights=0;

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
    glMaterialfv(GL_FRONT, GL_AMBIENT, yellow);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, yellow);
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

void drawBauble(GLfloat * color)
{
    glPushMatrix();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT, color);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, color);
    glMaterialfv(GL_FRONT, GL_SPECULAR, white);
    glutSolidSphere(0.2,30,30);
    glDisable(GL_LIGHTING);
    glPopMatrix();

}

void placeBaubles(float height,float radius)
{
    float y=0,angle=0,gap=0.2,PI=3.141;
    int n=10;
    GLfloat * colors[]= {red1,lightBlue,purple,orange,yellowGreen,gold};
    if(!treeLights){
            srand(1);
    }
    while(y<=height)
    {
        double x = radius * cos(angle);
        double z = radius * sin(angle);
        y = y + gap;

        glPushMatrix();
        glTranslatef(x,y,z);
        drawBauble(colors[rand()%6]);
        glPopMatrix();

        angle = angle + ((2 * PI) / n);
    }

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

    glPushMatrix();
    glTranslatef(0,3,0);
    placeBaubles(2,2.6);
    glTranslatef(0,1.8,0);
    placeBaubles(1,2.2);
    glTranslatef(0,1.8,0);
    placeBaubles(1.2,1.5);
    glPopMatrix();

    glPopMatrix();

}
