void drawCableCarWithTower()
{

    drawTPole(10);

    glPushMatrix();
    glScalef(0.6,0.6,0.6);
    glTranslatef(11,5,0);
    glRotatef(180,0,1,0);
    drawCableCar();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.6,0.6,0.6);
    glTranslatef(-11,5,0);
    drawCableCar();
    glPopMatrix();


}
