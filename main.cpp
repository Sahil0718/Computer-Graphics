#include <GL/glut.h>



void drawshapes(){

    glLineWidth(3);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,1,1);
    glBegin(GL_LINES);
    glVertex2f(-0.25,0.25);
    glVertex2f(.75,.69);
    glEnd();

    glColor3d(1,0,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.2, 0.2);
    glVertex2f(0.8, 0.2);
    glVertex2f(0.6, 0.4);
glEnd();


glColor3d(0,0,1);
    glBegin(GL_POLYGON);
    glVertex2f(-0.5, -0.5);
    glVertex2f(-0.5, 0.5);
    glVertex2f(0.5, 0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(-0.5,0.5);
glEnd();

glFlush();
}

int main(int argc, char *argv[]){
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("DRAWING SHPAES!");
    glutDisplayFunc(drawshapes);
    glutMainLoop();
    return 0;

}
