float flag_animate_y=0;
int flag_animate_dir=1;

void drawBezierFlag(GLfloat * color)
{

    float P0[] = {0,0};
    float P1[] = {1,1*flag_animate_y};
    float P2[] = {2,-1*flag_animate_y};
    float P3[] = {3,0};

    glPushMatrix();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, color);
    // glColor3f(1,127/255,80/255);
    glBegin(GL_QUAD_STRIP);
    for(float t=0; t<=1; t+=0.01)
    {
        GLfloat x= pow((1-t),3)*P0[0]+3*pow((1-t),2)*t*P1[0]+3*(1-t)*pow(t,2)*P2[0]+pow(t,3)*P3[0];
        GLfloat y= pow((1-t),3)*P0[1]+3*pow((1-t),2)*t*P1[1]+3*(1-t)*pow(t,2)*P2[1]+pow(t,3)*P3[1];
        glVertex3f(x,y+2,0);
        glVertex3f(x,y,0);
    }
    glEnd();

    glDisable(GL_LIGHTING);
    glPopMatrix();

}


void drawFlagPole()
{

    glPushMatrix();
    glTranslatef(0,2,0);
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, brown1);
    glRotatef(90,1,0,0);
    glScalef(0.5,0.5,0.5);
    gluCylinder(gluNewQuadric(),0.5,0.5,12,30,30);
    glDisable(GL_LIGHTING);
    glPopMatrix();
}

void drawFlag(GLfloat * color)
{
    glPushMatrix();
    drawBezierFlag(color);
    drawFlagPole();
    glPopMatrix();
}

void animateFlags()
{
    //printf("%.2f \n",flag_animate_y);
    if(flag_animate_y >0.6 && flag_animate_y <=0.7 || flag_animate_y<0 && flag_animate_y >= -0.1)
    {
        flag_animate_dir=-1*flag_animate_dir;
       // printf("flag dir changed\n");
    }
    flag_animate_y=flag_animate_y + flag_animate_dir * 0.1;

}
