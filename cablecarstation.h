void drawStationRoof()
{

    glPushMatrix ();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT, darkBrown);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, darkBrown);

    glTranslatef(0,0.8,0);
    glRotatef(20,0,0,1);
    glScalef(1.3,0.1,1.3);
    glutSolidCube(1);
    glDisable(GL_LIGHTING);
    glPopMatrix();

    glPushMatrix ();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT, darkYellow);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, darkYellow);

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

void drawPillar()
{

    glPushMatrix ();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT, orange);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, orange);
    glRotatef(-90,1,0,0);
    gluCylinder(gluNewQuadric(),0.03,0.05,0.6,30,30);
    glDisable(GL_LIGHTING);
    glPopMatrix();
}
void drawStationWalls()
{

    glPushMatrix ();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT, brown1);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, brown1);
    glutSolidCube(1);
    glDisable(GL_LIGHTING);
    glPopMatrix();

}

void stationDoor()
{
    glPushMatrix ();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT, lightBrown2);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, lightBrown2);
    glScalef(0.1,0.3,0.2);
    glutSolidCube(1);
    glDisable(GL_LIGHTING);
    glPopMatrix();
}

void stationBase()
{
    glPushMatrix ();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT, lightBrown2);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, lightBrown2);
    glScalef(1.2,0.1,1.2);
    glutSolidCube(1);
    glDisable(GL_LIGHTING);
    glPopMatrix();
}

void drawStation()
{
    glPushMatrix ();

    glScalef(5,5,5);
    drawStationRoof();
    drawStationWalls();

    glPushMatrix ();
    glTranslatef(-0.4,0,0.4);
    drawPillar();
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(-0.4,0,-0.4);
    drawPillar();
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(0.4,0.35,-0.4);
    drawPillar();
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(0.4,0.35,0.4);
    drawPillar();
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
    stationDoor();
    glPopMatrix();

    glPushMatrix ();
    glTranslatef(0,0,0);
    // glScalef(0.2,0.2,0.2);
    //glRotatef(90,0,1,0);
    stationBase();
    glPopMatrix();

    glPopMatrix();

}
