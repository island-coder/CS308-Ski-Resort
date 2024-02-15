float cable_car_mov_x=0,cable_car_mov_y=0,cable_car_mov_z=0;

void drawCableCarWithTower()
{

    drawTPole(10);

    glPushMatrix();
    glTranslatef(cable_car_mov_x,cable_car_mov_y,cable_car_mov_z);
    glScalef(0.6,0.6,0.6);
    glTranslatef(11,5,0);
    glRotatef(180,0,1,0);
    drawCableCar();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(cable_car_mov_x,cable_car_mov_y,cable_car_mov_z);
    glScalef(0.6,0.6,0.6);
    glTranslatef(-11,5,0);
    drawCableCar();
    glPopMatrix();


}

void drawCable()
{

    glPushMatrix();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, grey);
    glMaterialfv(GL_FRONT, GL_SPECULAR, white);
    glMaterialf(GL_FRONT, GL_SHININESS, 30.0);

    glRotatef(14,0,0,1);
    glRotatef(90,0,1,0);
    GLUquadric* quad = gluNewQuadric();
    gluCylinder(quad, 0.1, 0.1, 50, 30, 30);
    gluDeleteQuadric(quad);
    glDisable(GL_LIGHTING);
    glPopMatrix();

}
