


void mountainFoliage()
{

    glPushMatrix();
    glTranslatef(20,3.5,18);
    drawPineTree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(26,5.5,18);
    drawPineTree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(26,6.5,23);
    drawPineTree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(23,3,10);
    drawPineTree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(30,7,10);
    drawPineTree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(35,6,8);
    drawPineTree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(38,4,3);
    drawPineTree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(10,4,-40);
    drawPineTree();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(15,4,-30);
    drawPineTree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(20,1,-10);
    drawPineTree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(25,4.5,-15);
    drawPineTree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(25,7.5,-30);
    drawPineTree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(15,6.5,-35);
    drawPineTree();
    glPopMatrix();
}

void foliage()
{

    glPushMatrix();
    glTranslatef(0,0,-28);
    drawPineTree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-4,0,-32);
    drawPineTree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-8,0,-30);
    drawPineTree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-5,0,-35);
    drawPineTree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-3,0,-40);
    drawPineTree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-6,0,-45);
    drawPineTree();
    glPopMatrix();
}

void placeFlags()
{
    glPushMatrix();
    glTranslatef(28,10,15);
    glScalef(0.5,0.5,0.5);
    glRotatef(30,0,1,0);
    drawFlag(red1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(15,5,20);
    glScalef(0.5,0.5,0.5);
    glRotatef(30,0,1,0);
    drawFlag(red1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(10,3,-37);
    glScalef(0.5,0.5,0.5);
    glRotatef(-50,0,1,0);
    drawFlag(red1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(19.5,12,-35);
    glScalef(0.5,0.5,0.5);
    glRotatef(-50,0,1,0);
    drawFlag(lightBlue);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(20,7,-25);
    glScalef(0.5,0.5,0.5);
    glRotatef(-50,0,1,0);
    drawFlag(purple);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(30,10,-25);
    glScalef(0.5,0.5,0.5);
    glRotatef(-50,0,1,0);
    drawFlag(orange);
    glPopMatrix();
}

void placeFence()
{
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

    glPushMatrix();
    glTranslatef(-25,0,19);
    drawStoneFencePillar();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-33,0,19);
    drawStoneFencePillar();
    glPopMatrix();
}

void placeBuildings()
{

    glPushMatrix();
    glTranslatef(-10,0,-13);
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
}

void placeTownSquare()
{

    glPushMatrix();
    glTranslatef(-30,0,10);
    for(int i=0; i<20; i++)
    {
        for(int j=0; j<30; j++)
        {
            glPushMatrix();
            glTranslatef(i,0,-j);
            drawTexturedCube(0.1,3,3,cobblestone);
            glPopMatrix();
        }
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-18,0,-18);
    glScalef(0.3,0.3,0.3);
    glRotatef(0,0,1,0);
    drawBench();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-21,0,-18);
    glScalef(0.3,0.3,0.3);
    glRotatef(0,0,1,0);
    drawBench();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-24,0,-18);
    glScalef(0.3,0.3,0.3);
    glRotatef(0,0,1,0);
    drawBench();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-30,0,-10);
    glScalef(0.3,0.3,0.3);
    glRotatef(90,0,1,0);
    drawBench();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-30,0,-5);
    glScalef(0.3,0.3,0.3);
    glRotatef(90,0,1,0);


    drawBench();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-30,0,0);
    glScalef(0.3,0.3,0.3);
    glRotatef(90,0,1,0);
    drawBench();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-20,0,-6);
    //glScalef(0.3,0.3,0.3);
    drawChristmasTree();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-28,1,-17);
    glScalef(0.4,0.4,0.4);
    glRotatef(30,0,1,0);
    drawSnowMan();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-30,1,-25);
    glScalef(0.4,0.4,0.4);
    glRotatef(-30,0,1,0);
    drawNameBoardWithHandle();
    glPopMatrix();



}


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
    glTranslatef(-10,5.3,-22.5);
    drawCable();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-17,0.35,-33);
    glRotatef(60,0,1,0);
    // glScalef(0.5,0.5,0.5);
    drawBezierLake();
    glPopMatrix();

    placeBuildings();

    placeTownSquare();

    placeFence();

    mountainFoliage();

    foliage();

    placeSleds();

    placeFlags();

}
