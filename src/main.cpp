#include <iostream>

#include <GLFW/glfw3.h>
#include <AHDENGINE.h>

using namespace std;

int main(int argc , char** argv) {

    cout << "Hello , GLFW" << endl;

    cout<< argv[0]<<" version "<< AHDENGINE_VERSION_MAJOR<<" ."<<AHDENGINE_VERSION_MINOR;
    GLFWwindow * window;
    
    if(!glfwInit() ) {
        cout<< "error while loading glfw" << endl;
        return -1;
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    window = glfwCreateWindow(640, 480, "OpenGL Triangle", 0, 0);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }
    
    

    while (!glfwWindowShouldClose(window))
    {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);

    glfwTerminate();

    return 0;
}