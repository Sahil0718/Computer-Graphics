#include <GL/glut.h>
#include <math.h>
#include <cstdlib>
#include <ctime>
#include <random>
using namespace std;
int width = 512, height = 512,i, pointfreq = 50;


void Point(){
glClearColor(0,0,0,0);
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(7);
glColor3d(1,1,1);
glBegin(GL_POINTS);


for(i = 0; i<pointfreq; i++){
    int pointx = rand() % width;
    int pointy = rand() % height;
    glVertex2i(pointx, pointy);
}
glEnd();
glFlush();

}

void myInit(){

glutInitWindowSize(width,height);
glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
glutCreateWindow("POINTS!");
glutDisplayFunc(Point);
glutMainLoop();
}

int main(int argc, char **argv){
glutInit(&argc, argv);
myInit();
return 0;
}
