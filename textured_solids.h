void drawTexturedCube(float h,float w,float d,GLuint texture)
{
    glPushMatrix ();
    glTranslatef(-w/2,-h/2,-d/2);
    glEnable(GL_TEXTURE_2D);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glBindTexture(GL_TEXTURE_2D,texture);

    glBegin(GL_QUADS);
    glTexCoord2f(0,0);
    glVertex3f(0,h,d);
    glTexCoord2f(0,1);
    glVertex3f(w,h,d);
    glTexCoord2f(1,1);
    glVertex3f(w,0,d);
    glTexCoord2f(1,0);
    glVertex3f(0,0,d);
    glEnd();

    glBegin(GL_QUADS);
    glTexCoord2f(0,0);
    glVertex3f(0,h,0);
    glTexCoord2f(0,1);
    glVertex3f(w,h,0);
    glTexCoord2f(1,1);
    glVertex3f(w,0,0);
    glTexCoord2f(1,0);
    glVertex3f(0,0,0);
    glEnd();

    glBegin(GL_QUADS);
    glTexCoord2f(0,0);
    glVertex3f(0,h,d);
    glTexCoord2f(0,1);
    glVertex3f(0,h,0);
    glTexCoord2f(1,1);
    glVertex3f(0,0,0);
    glTexCoord2f(1,0);
    glVertex3f(0,0,d);
    glEnd();

    glBegin(GL_QUADS);
    glTexCoord2f(0,0);
    glVertex3f(w,h,d);
    glTexCoord2f(0,1);
    glVertex3f(w,h,0);
    glTexCoord2f(1,1);
    glVertex3f(w,0,0);
    glTexCoord2f(1,0);
    glVertex3f(w,0,d);
    glEnd();

    glBegin(GL_QUADS);
    glTexCoord2f(0,0);
    glVertex3f(0,h,0);
    glTexCoord2f(0,1);
    glVertex3f(w,h,0);
    glTexCoord2f(1,1);
    glVertex3f(w,h,d);
    glTexCoord2f(1,0);
    glVertex3f(0,h,d);
    glEnd();

    glDisable(GL_TEXTURE_2D);
    glPopMatrix();
}