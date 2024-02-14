#include "colors.h"

float PI = 3.141;

GLuint texture_glass,texture_cable_car_body,texture_cable_car_roof;

void loadTextureCableCar()
{
    texture_glass = SOIL_load_OGL_texture(
                        "E:/CS/300L/CS308/Project/SkiResort/textures/glass.jpg",  // Replace with the path to your texture file
                        SOIL_LOAD_AUTO,
                        SOIL_CREATE_NEW_ID,
                        SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y
                    );

    texture_cable_car_body=SOIL_load_OGL_texture(
                               "E:/CS/300L/CS308/Project/SkiResort/textures/metallic.jpg",  // Replace with the path to your texture file
                               SOIL_LOAD_AUTO,
                               SOIL_CREATE_NEW_ID,
                               SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y
                           );
//    texture_cable_car_roof=SOIL_load_OGL_texture(
//                               "E:/CS/300L/CS308/Project/SkiResort/textures/cable_car_roof.jpg",  // Replace with the path to your texture file
//                               SOIL_LOAD_AUTO,
//                               SOIL_CREATE_NEW_ID,
//                               SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y
//                           );


    if (!texture_glass)
    {
        printf("Texture loading failed: %s\n", SOIL_last_result());
    }
    if (!texture_cable_car_body)
    {
        printf("Texture loading failed: %s\n", SOIL_last_result());
    }
}

void drawWindow()
{

    //  glEnable(GL_TEXTURE_2D);
    // glBindTexture(GL_TEXTURE_2D,  texture_glass);

    glPushMatrix();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, lightBlue);
    glMaterialfv(GL_FRONT, GL_SPECULAR, white);
    glMaterialf(GL_FRONT, GL_SHININESS, 70.0);

    glNormal3f(0.0, 5.0, 0.0);

    //glColor3f(0.0,0.0,0.4);
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(0,1,1);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(0,1,0);
    glTexCoord2f(1.0f,0.0f);
    glVertex3f(0,0,0);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(0,0,1);
    glEnd();

    glDisable(GL_LIGHTING);
    glPopMatrix();

    // glDisable(GL_TEXTURE_2D);

}

void drawBody()
{

    // glEnable(GL_TEXTURE_2D);
    glPushMatrix();
    //  glEnable(GL_TEXTURE_GEN_S);
    // glEnable(GL_TEXTURE_GEN_T);
    //  glBindTexture(GL_TEXTURE_2D, texture_cable_car_body);
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, orange);
    //glColor3f(0.8, 0.8, 0.8);
    glutSolidCube(1);
//   glDisable(GL_TEXTURE_GEN_S);
    // glDisable(GL_TEXTURE_GEN_T);


    glPopMatrix();
    //glDisable(GL_TEXTURE_2D);


//    glEnable(GL_TEXTURE_GEN_S); //enable texture coordinate generation
//    glEnable(GL_TEXTURE_GEN_T);
//    glBindTexture(GL_TEXTURE_2D, theTexture[2]);
//    glutSolidCube(2);
//    glDisable(GL_TEXTURE_GEN_S); //enable texture coordinate generation
//    glDisable(GL_TEXTURE_GEN_T);



    //glEnable(GL_TEXTURE_2D);
    glPushMatrix();
    GLUquadric* quad = gluNewQuadric();
   // gluQuadricTexture(quad, GL_TRUE);
   // glBindTexture(GL_TEXTURE_2D, texture_cable_car_body);
    // //glColor3f(0.6, 0.3, 0.4);
    glTranslatef(0, 0.5, -0.5);
    gluCylinder(quad, 0.5, 0.5, 1, 30, 30);
    gluDeleteQuadric(quad);
    glPopMatrix();
    //glDisable(GL_TEXTURE_2D);

  //  glEnable(GL_TEXTURE_2D);
    glPushMatrix();
    quad = gluNewQuadric();
   // gluQuadricTexture(quad, GL_TRUE);
   // glBindTexture(GL_TEXTURE_2D, texture_cable_car_body);
    // //glColor3f(0.6, 0.3, 0.4);
    glTranslatef(0, -0.5, -0.5);
    gluCylinder(quad, 0.5, 0.5, 1, 30, 30);
    gluDeleteQuadric(quad);
    glPopMatrix();
   // glDisable(GL_TEXTURE_2D);


}

void drawBodyWithWindows()
{
    drawBody();

    glPushMatrix();
    glTranslatef(0.52,-0.2,0.1);
    glScalef(0.5,0.6,0.4);
    drawWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.52,-0.2,-0.5);
    glScalef(0.5,0.6,0.4);
    drawWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.52,-0.2,0.1);
    glScalef(0.5,0.6,0.4);
    drawWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.52,-0.2,-0.5);
    glScalef(0.5,0.6,0.4);
    drawWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.35, -0.2, 0.53);
    glRotatef(90,0,1,0);
    glScalef(1, 0.6, 0.7);
    drawWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.35, -0.2, -0.53);
    glRotatef(90, 0, 1, 0);
    glScalef(1, 0.6, 0.7);
    drawWindow();
    glPopMatrix();

}


void drawHandleCurvedBottom(float radius)
{

    float angle = 0,height=0.5;
    int n = 30;

    glPushMatrix();
    //glColor3f(0.40,0.4,0.5);

    glBegin(GL_QUAD_STRIP);
    for (int c = 0; c <= n/4; c++)
    {
        double x = radius * cos(angle);
        double z = radius * sin(angle);
        glVertex3f(x, 0, z);
        glVertex3f(x, height, z);

        angle = angle + ((2 * PI) / n);
    }
    glEnd();

    angle = 0;

    glBegin(GL_QUAD_STRIP);
    for (int c = 0; c <= n / 4; c++)
    {
        double x = radius * cos(angle);
        double z = radius * sin(angle);
        glVertex3f(x * 0.8, 0, z * 0.8);
        glVertex3f(x * 0.8, height, z * 0.8);

        angle = angle + ((2 * PI) / n);
    }
    glEnd();

    angle = 0;

    glBegin(GL_QUAD_STRIP);
    for (int c = 0; c <= n / 4; c++)
    {
        double x = radius * cos(angle);
        double z = radius * sin(angle);
        glVertex3f(x, height, z);
        glVertex3f(x * 0.8, height, z * 0.8);

        angle = angle + ((2 * PI) / n);
    }
    glEnd();

    angle = 0;

    glBegin(GL_QUAD_STRIP);
    for (int c = 0; c <= n / 4; c++)
    {
        double x = radius * cos(angle);
        double z = radius * sin(angle);
        glVertex3f(x, 0, z);
        glVertex3f(x * 0.8, 0, z * 0.8);

        angle = angle + ((2 * PI) / n);
    }
    glEnd();

    glPopMatrix();
}


void arch(float radius)
{

    float angle = 0, height = 0.5;
    int n = 30;

    glPushMatrix();
    //glColor3f(0.40, 0.4, 0.5);

    glBegin(GL_QUAD_STRIP);
    for (int c = 0; c <= n / 4; c++)
    {
        double x = radius * cos(angle);
        double z = radius * sin(angle);
        glVertex3f(x, 0, z);
        glVertex3f(x, height, z);

        angle = angle + ((2 * PI) / n);
    }
    glEnd();

    angle = 0;

    glBegin(GL_QUAD_STRIP);
    for (int c = 0; c <= n / 4; c++)
    {
        double x = radius * cos(angle);
        double z = radius * sin(angle);
        glVertex3f(x * 0.8, 0, z * 0.8);
        glVertex3f(x * 0.8, height, z * 0.8);

        angle = angle + ((2 * PI) / n);
    }
    glEnd();

    angle = 0;

    glBegin(GL_QUAD_STRIP);
    for (int c = 0; c <= n / 4; c++)
    {
        double x = radius * cos(angle);
        double z = radius * sin(angle);
        glVertex3f(x, height, z);
        glVertex3f(x * 0.8, height, z * 0.8);

        angle = angle + ((2 * PI) / n);
    }
    glEnd();

    angle = 0;

    glBegin(GL_QUAD_STRIP);
    for (int c = 0; c <= n / 4; c++)
    {
        double x = radius * cos(angle);
        double z = radius * sin(angle);
        glVertex3f(x, 0, z);
        glVertex3f(x * 0.8, 0, z * 0.8);

        angle = angle + ((2 * PI) / n);
    }
    glEnd();

    glPopMatrix();
}


void drawHandeTop()
{
    glPushMatrix();
    glEnable(GL_LIGHTING);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, purple);
    glMaterialfv(GL_FRONT, GL_SPECULAR, white);
    glMaterialf(GL_FRONT, GL_SHININESS, 30.0);
    //glColor3f(0.40, 0.1, 0.5);
    glScalef(0.5,0.5,1);
    glTranslatef(0,0.5,0);
    glutSolidCube(1);
    glDisable(GL_LIGHTING);

    glPopMatrix();
}

void drawHandeBottom()
{
    glPushMatrix();

    //glColor3f(0.40, 0.1, 0.2);
    glScalef(0.1, 0.5, 1);

    glutSolidCube(1);


    glPopMatrix();
}


void drawHandle()
{

    glPushMatrix();
    glTranslatef(0, 1, 0);
    glRotatef(90,1,0,0);


    drawHandeTop();

    glPushMatrix();
    glTranslatef(-1, 0.25, 1.4);
    glRotatef(90, 0, 1, 0);
    drawHandeBottom();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.8, 0, 0.5);
    drawHandleCurvedBottom(1);
    glPopMatrix();

    glPopMatrix();


}
void drawWire()
{
    glPushMatrix();
    //glColor3f(0.3, 0.3, 0.3);
    glTranslatef(1, 2,0);
    glRotatef(-90,1,0,0);
    gluCylinder(gluNewQuadric(),0.05,0.05,2.5,30,30);
    glPopMatrix();
}

void drawCableCar()
{

    //loadTextureCableCar();

    glPushMatrix();
    glScalef(3,3,5);
    drawBodyWithWindows();

    //glPushMatrix();
    //glRotatef(90,1,0,0);
    //drawBody();
    //glPopMatrix();

    glPushMatrix();
    glScalef(1, 1, 0.5);
    glTranslatef(1, 1.4,-0.1);
    drawHandle();
    glPopMatrix();


    glPushMatrix();
    drawWire();
    glPopMatrix();



    glPopMatrix();


}
