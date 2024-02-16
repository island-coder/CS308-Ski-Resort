GLuint skybox_negx,skybox_negy,skybox_negz,skybox_posx,skybox_posy,skybox_posz,lodge_roof,lodge_wall,stone_fence,brick;

void loadTextures()
{

    skybox_negx=SOIL_load_OGL_texture(
                    "E:/CS/300L/CS308/Project/SkiResort/textures/Maskonaive2/negx.jpg",  // Replace with the path to your texture file
                    SOIL_LOAD_AUTO,
                    SOIL_CREATE_NEW_ID,
                    SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y
                );
    skybox_negy=SOIL_load_OGL_texture(
                    "E:/CS/300L/CS308/Project/SkiResort/textures/Maskonaive2/negy.jpg",  // Replace with the path to your texture file
                    SOIL_LOAD_AUTO,
                    SOIL_CREATE_NEW_ID,
                    SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y
                );
    skybox_negz=SOIL_load_OGL_texture(
                    "E:/CS/300L/CS308/Project/SkiResort/textures/Maskonaive2/negz.jpg",  // Replace with the path to your texture file
                    SOIL_LOAD_AUTO,
                    SOIL_CREATE_NEW_ID,
                    SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y
                );
    skybox_posx=SOIL_load_OGL_texture(
                    "E:/CS/300L/CS308/Project/SkiResort/textures/Maskonaive2/posx.jpg",  // Replace with the path to your texture file
                    SOIL_LOAD_AUTO,
                    SOIL_CREATE_NEW_ID,
                    SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y
                );
    skybox_posy=SOIL_load_OGL_texture(
                    "E:/CS/300L/CS308/Project/SkiResort/textures/Maskonaive2/posy.jpg",  // Replace with the path to your texture file
                    SOIL_LOAD_AUTO,
                    SOIL_CREATE_NEW_ID,
                    SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y
                );
    skybox_posz=SOIL_load_OGL_texture(
                    "E:/CS/300L/CS308/Project/SkiResort/textures/Maskonaive2/posz.jpg",  // Replace with the path to your texture file
                    SOIL_LOAD_AUTO,
                    SOIL_CREATE_NEW_ID,
                    SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y
                );

    lodge_roof=SOIL_load_OGL_texture(
                   "E:/CS/300L/CS308/Project/SkiResort/textures/snow_roof.jpg",  // Replace with the path to your texture file
                   SOIL_LOAD_AUTO,
                   SOIL_CREATE_NEW_ID,
                   SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y
               );
    lodge_wall=SOIL_load_OGL_texture(
                   "E:/CS/300L/CS308/Project/SkiResort/textures/wood_wall.jpg",  // Replace with the path to your texture file
                   SOIL_LOAD_AUTO,
                   SOIL_CREATE_NEW_ID,
                   SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y
               );
    stone_fence=SOIL_load_OGL_texture(
                    "E:/CS/300L/CS308/Project/SkiResort/textures/stone_wall.jpg",  // Replace with the path to your texture file
                    SOIL_LOAD_AUTO,
                    SOIL_CREATE_NEW_ID,
                    SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y
                );

    brick=SOIL_load_OGL_texture(
                    "E:/CS/300L/CS308/Project/SkiResort/textures/brick.jpg",  // Replace with the path to your texture file
                    SOIL_LOAD_AUTO,
                    SOIL_CREATE_NEW_ID,
                    SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y
                );




    if (!brick)
    {
        printf("Texture loading failed: %s\n", SOIL_last_result());
    }

}
