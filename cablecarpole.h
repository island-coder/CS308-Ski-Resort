#include "colors.h"

GLuint texture_brick;

void loadTextureCableCarPole()
{

    texture_brick=SOIL_load_OGL_texture(
                      "E:/CS/300L/CS308/Project/SkiResort/textures/brick2.jpg",  // Replace with the path to your texture file
                      SOIL_LOAD_AUTO,
                      SOIL_CREATE_NEW_ID,
                      SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y
                  );

    if (!texture_brick)
    {
        printf("Texture loading failed: %s\n", SOIL_last_result());
    }

}


void drawBase()
{

    //glEnable(GL_TEXTURE_2D);
    glPushMatrix();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, red1);
    glMaterialfv(GL_FRONT, GL_SPECULAR, white);
    glMaterialf(GL_FRONT, GL_SHININESS, 70.0);

    // glEnable(GL_TEXTURE_GEN_S);
    //glEnable(GL_TEXTURE_GEN_T);
    // glBindTexture(GL_TEXTURE_2D, texture_brick);
    //glColor3f(0.3,0.30,.3);
    glScalef(8,3,3);
    glutSolidCube(1);
    // glDisable(GL_TEXTURE_GEN_S);
    //glDisable(GL_TEXTURE_GEN_T);

    glDisable(GL_LIGHTING);
    glPopMatrix();
    // glDisable(GL_TEXTURE_2D);


}
void drawVerticalPole(float height)
{
    glPushMatrix();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, grey);
   // glMaterialfv(GL_FRONT, GL_SPECULAR, white);
   // glMaterialf(GL_FRONT, GL_SHININESS, 30.0);
    //glColor3f(0.8,0.8,0.7);
    glRotatef(-90,1,0,0);
    gluCylinder(gluNewQuadric(),1,0.5,height,30,30);
    glDisable(GL_LIGHTING);

    glPopMatrix();

}
void drawHorizontalPole(float height)
{
    float k =0.25;
    glPushMatrix();
    //glColor3f(0.7,0.7,0.7);
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, red1);
    glMaterialfv(GL_FRONT, GL_SPECULAR, white);
    glMaterialf(GL_FRONT, GL_SHININESS, 70.0);
    glRotatef(90,0,1,0);
    gluCylinder(gluNewQuadric(),0.5 * k,1 * k,height/2,30,30);
    glPopMatrix();
    glPushMatrix();
    glRotatef(-90,0,1,0);
    gluCylinder(gluNewQuadric(),0.5* k,1* k,height/2,30,30);
    glDisable(GL_LIGHTING);

    glPopMatrix();

}
void drawTPole(float height)
{
    //loadTextureCableCarPole();
    drawBase();
    glPushMatrix();
    glTranslatef(0,1.5,0);
    drawVerticalPole(height);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,height+1,0);
    drawHorizontalPole(10);
    glPopMatrix();

}
