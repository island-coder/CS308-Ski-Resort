
void renderScene()
{

    skybox();

    glPushMatrix();
    glTranslatef(15,-5,-50);
    glScalef(5.5,
             3,5.5);
    drawHill1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,-5,-50);
    glRotatef(30,0,1,0);
    glScalef(5,4.8,5);
    drawHill1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,-5,-50);
    glRotatef(30,0,1,0);
    glScalef(5,4.8,5);
    drawHill1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5,-5,15);
    glRotatef(30,0,1,0);
    glScalef(5,3.5,5);
    drawHill2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(30,10,-20);
    glRotatef(-90,0,1,0);
    glScalef(0.5,0.5,0.5);
    drawTPole(10);
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
    glTranslatef(-10,0,-14);
    glRotatef(-90,0,1,0);
    drawStation();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-10,0,-2);
    glRotatef(-120,0,1,0);
    drawBuilding1();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-20,0,10);
    glRotatef(-190,0,1,0);
    drawBuilding2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.5,0,0);
    drawStoneFence(20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0,7.5);
    glRotatef(90,0,1,0);
    drawStoneFence(4.5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1,0,10);
    glRotatef(-150,0,1,0);
    drawStoneFence(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-46,0,19.5);
    drawStoneFence(15);
    glPopMatrix();

    glPushMatrix();
    drawStoneFencePillar();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(18,0,0);
    drawStoneFencePillar();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(9,0,0);
    drawStoneFencePillar();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0,9);
    drawStoneFencePillar();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-17,0,19);
    drawStoneFencePillar();
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
