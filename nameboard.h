

void drawNameBoard(GLuint texture)
{
    glPushMatrix();
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,texture);
    glBegin(GL_POLYGON);
    glTexCoord2f(0,1);
    glVertex2f(-2.3,1);
    glTexCoord2f(0.7,1);
    glVertex2f(1,1);
    glTexCoord2f(1,0.5);
    glVertex2f(2.3,0);
    glTexCoord2f(0.7,0);
    glVertex2f(1,-1);
    glTexCoord2f(0,0);
    glVertex2f(-2.3,-1);
    glEnd();

    glDisable(GL_TEXTURE_2D);
    glPopMatrix();
}

void drawNameBoardWithHandle()
{


    glPushMatrix();
    glTranslatef(2,6,0.3);
    drawNameBoard(ski_town_text);
    glPopMatrix();

    glPushMatrix();
    glRotatef(-90,1,0,0);
    drawTexturedCylinder(0.2,7,metallic_stripe);
    glPopMatrix();


}
