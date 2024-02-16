
void snowFlake()
{
    glPushMatrix();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT, white);
    //glMaterialfv(GL_FRONT, GL_SPECULAR, white);
    // glMaterialf(GL_FRONT, GL_SHININESS, 70.0);

    glBegin(GL_POLYGON);
    glVertex2f(-0.05,0.05);
    glVertex2f(0.05,0.05);
    glVertex2f(0.05,-0.05);
    glVertex2f(-0.05,-0.05);
    glEnd();

    glPopMatrix();


}
void drawSnowFallLayer()
{
    glPushMatrix();
    int flakes=100;
    float x=0,z=0;
    srand(1);
    for(int i =0; i<flakes; i++)
    {
        x = rand() % 10;
        z = rand() % 10;
        printf("%.2f %.2f \n",x,z);
        glPushMatrix();
        glTranslatef(x,2,z);
        snowFlake();
        glPopMatrix();

    }
    glPopMatrix();


}
