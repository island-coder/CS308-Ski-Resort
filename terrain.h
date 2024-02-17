#include "colors.h"




void drawHill(GLfloat height[][10])
{

    int rows = 10, cols = 10;
    //glColor3f(1.0, 0.0, 0.0);
    for (int i = 0; i < rows - 1; i++)
    {
        glEnable(GL_LIGHTING);
        glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, white);
        glMaterialfv(GL_FRONT, GL_SPECULAR, white);
        glMaterialf(GL_FRONT, GL_SHININESS, 30.0);
        glBegin(GL_TRIANGLE_STRIP);
        for (int j = 0; j < cols - 1; j++)
        {
            //glColor3f(1.0 / height[j][i], 1.0 / height[j][i], 1.0 / height[j][i]);
            glVertex3f(j, height[j][i], i);
            //glColor3f(1.0 / height[j][i], 1.0 / height[j][i], 1.0 / height[j][i]);
            glVertex3f(j, height[j][i + 1], i + 1);
            //	glColor3f(1.0 / height[j][i], 1.0 / height[j][i], 1.0 / height[j][i]);
            glVertex3f(j + 1, height[j + 1][i], i);
        }
        glEnd();
        glDisable(GL_LIGHTING);

        glEnable(GL_LIGHTING);
        glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, offWhite);

        glBegin(GL_TRIANGLE_STRIP);
        for (int j = 0; j < cols - 1; j++)
        {
            //glColor3f(1.0 / height[j][i], 1.0 / height[j][i], 1.0 / height[j][i]);
            glVertex3f(j + 1, height[j + 1][i], i);
            //	glColor3f(1.0 / height[j][i], 1.0 / height[j][i], 1.0 / height[j][i]);
            glVertex3f(j + 1, height[j + 1][i + 1], i + 1);
            //	glColor3f(1.0 / height[j][i], 1.0 / height[j][i], 1.0 / height[j][i]);
            glVertex3f(j, height[j][i + 1], i + 1);
        }
        glEnd();
        glDisable(GL_LIGHTING);

    }
}

void drawHill1 (){
      GLfloat height[10][10] =
    {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        { 1, 1.5, 1.8, 2.2, 2.5, 2.5, 2.5, 2.2, 1.5, 1 },
        { 1, 1.5, 2, 2.3, 2.7, 3, 2.7, 2.3, 2, 1 },
        { 1, 1.8, 2.2, 5, 5, 3, 2.8, 2.5, 2.2, 1.8 },
        { 1, 2.2, 2.5, 6, 7, 7, 3, 2.8, 2.5, 1.2 },
        { 1, 2.5, 2.8, 6,8,7, 7, 5, 2.8, 1.5 },
        { 1, 2.7, 3, 6, 8, 5, 6, 3.2, 3, 1.7 },
        { 1, 3, 3.2, 5, 7, 5, 3.8, 3.5, 3.2, 1 },
        { 1, 3.2, 3.5, 3.8, 4, 4.2, 4, 3.8, 3.5, 1 },
        { 1, 1, 1, 1, 1.2, 1.5, 1.2, 1, 1,1 }
    };
    drawHill(height);
}

void drawHill2(){
      GLfloat height[10][10] =
    {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        { 1, 1.5, 1.8, 2.2, 2.5, 2.5, 2.5, 2.2, 1.5, 1 },
        { 1, 1.5, 2, 2.3, 2.7, 2, 2.7, 2.3, 2, 1 },
        { 1, 1.8, 2.2, 3, 5, 3, 2.8, 2.5, 2.2, 1.8 },
        { 1, 2.2, 2.5, 6, 6, 6, 3, 2.8, 2.5, 1.2 },
        { 1, 2.5, 2.8, 6,5,6, 6, 5, 2.8, 1.5 },
        { 1, 2.7, 3, 6, 5, 5, 6, 3.2, 2, 1.7 },
        { 1, 2, 3.2, 5, 5, 5, 3.8, 2.5, 2, 1 },
        { 1, 2.2, 3.5, 3.8, 4, 4.2, 4, 3.8, 2,1 },
        { 1, 1, 1, 1, 1.2, 1.5, 1.2, 1, 1,1 }
    };
    drawHill(height);
}



