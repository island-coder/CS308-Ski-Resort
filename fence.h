void drawStoneFenceSegment()
{

    glPushMatrix();
    glScalef(1,2,0.3);
    drawTexturedCube(2,2,2,snow_brick);
    glPopMatrix();

}
void drawStoneFence(int k)
{

    glPushMatrix();
    float gap=2;
    for(int i=0; i<k; i++)
    {
        drawStoneFenceSegment();
        glTranslatef(gap,0,0);
    }
    glPopMatrix();

}

void drawStoneFencePillar()
{

    glPushMatrix();
    glRotatef(-90,1,0,0);
    glScalef(2,2,2);
    drawTexturedCylinder(0.3,1.8,snow_brick);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,4,0);
    glScalef(2,2,2);
    drawTexturedSphere(0.3,snow_brick);
    glPopMatrix();

}
