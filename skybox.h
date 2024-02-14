void square()
{
    glEnable(GL_TEXTURE_2D);

//    glBindTexture(GL_TEXTURE_2D, skybox0);
    glBegin(GL_QUADS);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(10,0,0);   // Bottom Right Of The Texture and Quad
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(10,10,0);   // Top Right Of The Texture and Quad
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(0,10,0);   // Top Left Of The Texture and Quad
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(0,0,0);   // Bottom Left Of The Texture and Quad
    glEnd();

    glDisable(GL_TEXTURE_2D);
}

void skybox(void)
{
    glPushMatrix();
    glTranslatef(0,10,0);
    glEnable(GL_TEXTURE_2D);

    float m_SkyBoxSize = 50; // 200.0f
    float ymin, ymax;

    ymin = -m_SkyBoxSize / 2.0f;
    ymax = 1.0f + m_SkyBoxSize / 2.0f;

    // Set winding to clock-wise
    glFrontFace(GL_CW);

    // Front Face
    glBindTexture(GL_TEXTURE_2D, skybox_posz);
    glBegin(GL_QUADS);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(m_SkyBoxSize, ymin, m_SkyBoxSize);   // Bottom Right Of The Texture and Quad
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(m_SkyBoxSize, ymax, m_SkyBoxSize);   // Top Right Of The Texture and Quad
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-m_SkyBoxSize, ymax, m_SkyBoxSize);   // Top Left Of The Texture and Quad
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-m_SkyBoxSize, ymin, m_SkyBoxSize);   // Bottom Left Of The Texture and Quad
    glEnd();

    // Right face
    glBindTexture(GL_TEXTURE_2D, skybox_posx);
    glBegin(GL_QUADS);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(m_SkyBoxSize, ymin, -m_SkyBoxSize);   // Bottom Right Of The Texture and Quad
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(m_SkyBoxSize, ymax, -m_SkyBoxSize);   // Top Right Of The Texture and Quad
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(m_SkyBoxSize, ymax, m_SkyBoxSize);   // Top Left Of The Texture and Quad
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(m_SkyBoxSize, ymin, m_SkyBoxSize);   // Bottom Left Of The Texture and Quad
    glEnd();


    // Back Face
    glBindTexture(GL_TEXTURE_2D, skybox_negz);
    glBegin(GL_QUADS);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-m_SkyBoxSize, ymin, -m_SkyBoxSize);   // Bottom Right Of The Texture and Quad
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-m_SkyBoxSize, ymax, -m_SkyBoxSize);   // Top Right Of The Texture and Quad
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(m_SkyBoxSize, ymax, -m_SkyBoxSize);   // Top Left Of The Texture and Quad
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(m_SkyBoxSize, ymin, -m_SkyBoxSize);   // Bottom Left Of The Texture and Quad
    glEnd();

    // Left Face
    glBindTexture(GL_TEXTURE_2D, skybox_negx);
    glBegin(GL_QUADS);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-m_SkyBoxSize, ymin, m_SkyBoxSize);   // Bottom Right Of The Texture and Quad
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-m_SkyBoxSize, ymax, m_SkyBoxSize);   // Top Right Of The Texture and Quad
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-m_SkyBoxSize, ymax, -m_SkyBoxSize);   // Top Left Of The Texture and Quad
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-m_SkyBoxSize, ymin, -m_SkyBoxSize);   // Bottom Left Of The Texture and Quad
    glEnd();

    // Top Face
    glBindTexture(GL_TEXTURE_2D, skybox_posy);
    glBegin(GL_QUADS);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(m_SkyBoxSize, ymax, m_SkyBoxSize);   // Bottom Right Of The Texture and Quad
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(m_SkyBoxSize, ymax, -m_SkyBoxSize);   // Top Right Of The Texture and Quad
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-m_SkyBoxSize, ymax, -m_SkyBoxSize);   // Top Left Of The Texture and Quad
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-m_SkyBoxSize, ymax, m_SkyBoxSize);   // Bottom Left Of The Texture and Quad
    glEnd();


    // Bottom Face
    glBindTexture(GL_TEXTURE_2D, skybox_negy);
    glPushMatrix();
    glTranslatef(0,15,0);
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-m_SkyBoxSize, ymin, m_SkyBoxSize);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-m_SkyBoxSize, ymin, -m_SkyBoxSize);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(m_SkyBoxSize, ymin, -m_SkyBoxSize);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(m_SkyBoxSize, ymin, m_SkyBoxSize);
    glEnd();
    glPopMatrix();
    // Set winding to counter clock-wise
    glFrontFace(GL_CCW);

    glDisable(GL_TEXTURE_2D);
    glPopMatrix();

}


