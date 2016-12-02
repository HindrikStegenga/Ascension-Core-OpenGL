//
// Created by hindrik on 29-11-16.
//

#ifndef ASCENSION_CORE_OPENGLRENDERER_H
#define ASCENSION_CORE_OPENGLRENDERER_H

#define WINDOW_SIZE_X 1280
#define WINDOW_SIZE_Y 800

#include "../../Common.h"
#include "../../Core classes/Renderer.h"
#include "../RenderModes/RenderModes.h"

class OpenGLRenderMode;

class OpenGLRenderer : public Renderer {
private:
    GLFWwindow* m_window = nullptr;
    OpenGLRenderMode* m_renderMode = nullptr;
public:
    OpenGLRenderer(RenderModes mode);
    ~OpenGLRenderer();
public:
    void render(float deltaTime) override;
    bool processAPI(float deltaTime) override;
    void swapBuffers();
};


#endif //ASCENSION_CORE_OPENGLRENDERER_H