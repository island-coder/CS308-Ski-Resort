
void renderScene()
{

    skybox();

    glPushMatrix();
    glTranslatef(15,-5,-50);
    glScalef(5.5,
             3,5.5);
    drawHill();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,-5,-50);
    glRotatef(30,0,1,0);
    glScalef(5,4.8,5);
    drawHill();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(20,0,-20);
    glRotatef(-90,0,1,0);
    glScalef(0.5,0.5,0.5);
    drawTPole(25);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(10,0,-20);
    glRotatef(-90,0,1,0);
    glScalef(0.5,0.5,0.5);
    drawTPole(20);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0,0,-20);
    glRotatef(-90,0,1,0);
    glScalef(0.5,0.5,0.5);
    drawTPole(15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-10,0,-20);
    glRotatef(-90,0,1,0);
    glScalef(0.5,0.5,0.5);
    drawCableCarWithTower();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-10,5.3,-17.5);
    drawCable();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-10,5.3,-22);
    drawCable();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-16,0.8,-33);
    glRotatef(60,0,1,0);
    // glScalef(0.5,0.5,0.5);
    drawBezierLake();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-10,0,-15);
    glRotatef(-90,0,1,0);
    drawStation();
    glPopMatrix();



    //drawRoof();
    // drawLodgeWithBase();
    // drawCableCarWithTower();
    //drawLake();
    //drawBezierLake();
    // drawBezierFlag();
    //drawBench();
    //drawSled();
}
