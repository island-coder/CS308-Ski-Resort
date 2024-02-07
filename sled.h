

void drawSled() {
    // Sled Base
    glColor3f(0.8, 0.5, 0.2); // Sled color
    glPushMatrix();
    glTranslatef(0, -0.5, 0);
    glScalef(2, 0.5, 1);
    glutSolidCube(1);
    glPopMatrix();

    // Front Curve
    glPushMatrix();
    glTranslatef(0, 0, -0.5);
    glutSolidSphere(0.5, 20, 20);
    glPopMatrix();

    glColor3f(0.5, 0.3, 0.1); // Handlebars color
    glPushMatrix();
    glTranslatef(-1, 0.25, 0);
    glRotatef(30, 0, 1, 0);
    GLUquadric* quad = gluNewQuadric();
    gluCylinder(quad, 0.05, 0.05, 0.5, 10, 10); // Left handlebar
    gluDeleteQuadric(quad);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1, 0.25, 0);
    glRotatef(-30, 0, 1, 0);
    GLUquadric* quad2 = gluNewQuadric();
    gluCylinder(quad2, 0.05, 0.05, 0.5, 10, 10); // Right handlebar
    gluDeleteQuadric(quad2);
    glPopMatrix();
}
