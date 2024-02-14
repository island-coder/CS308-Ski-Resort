void drawBezierFlag()
{

    float P0[] = {0,0};
    float P1[] = {1,1};
    float P2[] = {2,-1};
    float P3[] = {3,0};

    glPushMatrix();
    glColor3f(1,127/255,80/255);
    glBegin(GL_QUAD_STRIP);
    for(float t=0; t<=1; t+=0.01)
    {
        GLfloat x= pow((1-t),3)*P0[0]+3*pow((1-t),2)*t*P1[0]+3*(1-t)*pow(t,2)*P2[0]+pow(t,3)*P3[0];
        GLfloat y= pow((1-t),3)*P0[1]+3*pow((1-t),2)*t*P1[1]+3*(1-t)*pow(t,2)*P2[1]+pow(t,3)*P3[1];
        glVertex3f(x,y+2,0);
        glVertex3f(x,y,0);
    }
    glEnd();
    glPopMatrix();

}


void drawFlagPole()
{

    glPushMatrix();
    glColor3f(0.5,0.1,0.2);

    glRotatef(-90,1,0,0);
    glScalef(0.5,0.5,0.5);
    gluCylinder(gluNewQuadric(),0.5,0.5,12,30,30);

    glPopMatrix();


}
