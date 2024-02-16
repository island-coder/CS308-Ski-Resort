void buildingRoof(GLfloat * roof,GLfloat * roofStripe)
{

    glPushMatrix ();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT, roof);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, roof);

    glTranslatef(0,0.8,0);
    glRotatef(20,0,0,1);
    glScalef(1.3,0.1,1.3);
    glutSolidCube(1);
    glDisable(GL_LIGHTING);
    glPopMatrix();

    glPushMatrix ();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT, roofStripe);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, roofStripe);

    glPushMatrix();
    glTranslatef(-0.4,0.7,0);
    glRotatef(20,0,0,1);
    glScalef(0.1,0.1,1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0.85,0);
    glRotatef(20,0,0,1);
    glScalef(0.1,0.1,1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.4,1,0);
    glRotatef(20,0,0,1);
    glScalef(0.1,0.1,1);
    glutSolidCube(1);
    glPopMatrix();

    glDisable(GL_LIGHTING);
    glPopMatrix();

}

void buildingPillar(GLfloat * color)
{

    glPushMatrix ();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT, color);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, color);
    glRotatef(-90,1,0,0);
    gluCylinder(gluNewQuadric(),0.03,0.05,0.6,30,30);
    glDisable(GL_LIGHTING);
    glPopMatrix();
}
void builidngWall(GLfloat * color,GLuint texture)
{

    glPushMatrix ();
   // glEnable(GL_LIGHTING);
    //glMaterialfv(GL_FRONT, GL_AMBIENT, color);
    //glMaterialfv(GL_FRONT, GL_DIFFUSE, color);
    drawTexturedCube(1,1,1,texture);
   // glDisable(GL_LIGHTING);
    glPopMatrix();

}

void buildingDoor(GLfloat * color)
{
    glPushMatrix ();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT, color);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, color);
    glScalef(0.1,0.3,0.2);
    glutSolidCube(1);
    glDisable(GL_LIGHTING);
    glPopMatrix();
}

void buildingBase(GLfloat * color)
{
    glPushMatrix ();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT, color);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, color);
    glScalef(1.2,0.1,1.2);
    glutSolidCube(1);
    glDisable(GL_LIGHTING);
    glPopMatrix();
}

void drawBuilding1()
{
    glPushMatrix ();

    glScalef(5,5,5);

    glPushMatrix ();
    glScalef(2,1,1);
    builidngWall(yellowGreen,lodge_wall);
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(-0.55,0,0);
    buildingRoof(brown1,darkBrown);
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(0.55,0,0);
    glRotatef(-180,0,1,0);
    buildingRoof(brown1,darkBrown);
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(-0.8,0.15,0.4);
    buildingPillar(wood);
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(-0.8,0.15,-0.4);
    buildingPillar(wood);
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(-0.4,0.25,0.4);
    buildingPillar(wood);
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(-0.4,0.25,-0.4);
    buildingPillar(wood);
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(0.4,0.25,-0.4);
    buildingPillar(wood);
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(0.4,0.25,0.4);
    buildingPillar(wood);
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(0.8,0.15,0.4);
    buildingPillar(wood);
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(0.8,0.15,-0.4);
    buildingPillar(wood);
    glPopMatrix();


    glPushMatrix ();
    glTranslatef(0.6,0.3,0.5);
    glScalef(0.2,0.2,0.5);
    drawLodgeWindow();
    glPopMatrix();


    glPushMatrix ();
    glTranslatef(0.3,0.3,0.5);
    glScalef(0.2,0.2,0.5);
    drawLodgeWindow();
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(-0.3,0.3,0.5);
    glScalef(0.2,0.2,0.2);
    drawLodgeWindow();
    glPopMatrix();

        glPushMatrix ();
    glTranslatef(-0.6,0.3,0.5);
    glScalef(0.2,0.2,0.2);
    drawLodgeWindow();
    glPopMatrix();

        glPushMatrix ();
    glTranslatef(0.5,0.3,0.2);
    glScalef(0.2,0.2,0.2);
    glRotatef(90,0,1,0);
    drawLodgeWindow();
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(0.5,0.3,0.2);
    glScalef(0.2,0.2,0.2);
    glRotatef(90,0,1,0);
    drawLodgeWindow();
    glPopMatrix();


    glPushMatrix ();
    glTranslatef(0.5,0.3,-0.2);
    glScalef(0.5,0.2,0.2);
    glRotatef(90,0,1,0);
    drawLodgeWindow();
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(0,0.2,0.42);
    // glScalef(0.2,0.2,0.2);
    //glRotatef(90,0,1,0);
    buildingDoor(darkBrown);
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(0,0,0);
    // glScalef(0.2,0.2,0.2);
    //glRotatef(90,0,1,0);
    buildingBase(orange);
    glPopMatrix();

    glPopMatrix();

}

void drawBuilding2()
{
    glPushMatrix ();

    glScalef(5,5,5);

    glPushMatrix ();
    glScalef(2.5,1,1.3);
    builidngWall(pink,stone_fence);
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(-0.7,0,0);
    glScalef(1.2,1,1);
    buildingRoof(brown1,wood);
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(0.7,0,0);
    glRotatef(-180,0,1,0);
     glScalef(1.2,1,1);
    buildingRoof(brown1,wood);
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(-0.8,0.15,0.4);
    buildingPillar(wood);
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(-0.8,0.15,-0.4);
    buildingPillar(wood);
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(-0.4,0.25,0.4);
    buildingPillar(wood);
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(-0.4,0.25,-0.4);
    buildingPillar(wood);
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(0.4,0.25,-0.4);
    buildingPillar(wood);
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(0.4,0.25,0.4);
    buildingPillar(wood);
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(0.8,0.15,0.4);
    buildingPillar(wood);
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(0.8,0.15,-0.4);
    buildingPillar(wood);
    glPopMatrix();


    glPushMatrix ();
    glTranslatef(0.9,0.3,0.65);
    glScalef(0.2,0.2,0.5);
    drawLodgeWindow();
    glPopMatrix();


    glPushMatrix ();
    glTranslatef(0.3,0.3,0.65);
    glScalef(0.2,0.2,0.5);
    drawLodgeWindow();
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(-0.3,0.3,0.65);
    glScalef(0.2,0.2,0.2);
    drawLodgeWindow();
    glPopMatrix();

        glPushMatrix ();
    glTranslatef(-0.9,0.3,0.65);
    glScalef(0.2,0.2,0.2);
    drawLodgeWindow();
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(1.25,0.3,0.4);
    glScalef(0.2,0.2,0.2);
    glRotatef(90,0,1,0);
    drawLodgeWindow();
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(1.25,0.3,0);
    glScalef(0.2,0.2,0.2);
    glRotatef(90,0,1,0);
    drawLodgeWindow();
    glPopMatrix();


    glPushMatrix ();
    glTranslatef(1.25,0.3,-0.4);
    glScalef(0.5,0.2,0.2);
    glRotatef(90,0,1,0);
    drawLodgeWindow();
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(0,0.2,0.58);
    glScalef(1.2,1,1);
    //glRotatef(90,0,1,0);
    buildingDoor(darkBrown);
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(0,0,0);
    glScalef(2.5,1,1.3);
    //glRotatef(90,0,1,0);
    buildingBase(lightGrey);
    glPopMatrix();

    glPopMatrix();

}
