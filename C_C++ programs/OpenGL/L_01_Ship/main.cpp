#include <stdio.h>
#include <GL/gl.h>
#include <Gl/glut.h>

void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0,0,0);
    glPointSize(4);

    glBegin(GL_QUADS);
    glVertex2i(170, 160);
    glVertex2i(210, 100);       // boat base
    glVertex2i(410, 100);
    glVertex2i(450, 160);


    glBegin(GL_QUADS);
    glVertex2i(220, 220);
    glVertex2i(220, 160);       // 1st chimney
    glVertex2i(250, 160);
    glVertex2i(250, 220);


    glBegin(GL_QUADS);
    glVertex2i(290, 230);
    glVertex2i(290, 160);       // 2nd chimney
    glVertex2i(320, 160);
    glVertex2i(320, 230);

    glBegin(GL_QUADS);
    glVertex2i(360, 220);
    glVertex2i(360, 160);       // 3rd chimney
    glVertex2i(390, 160);
    glVertex2i(390, 220);

    glBegin(GL_QUADS);
    glVertex2i(240, 250);
    glVertex2i(240, 240);       // smoke
    glVertex2i(260, 240);
    glVertex2i(260, 250);

    glBegin(GL_QUADS);
    glVertex2i(260, 280);
    glVertex2i(260, 270);       // smoke
    glVertex2i(280, 270);
    glVertex2i(280, 280);

    glBegin(GL_QUADS);
    glVertex2i(280, 310);
    glVertex2i(280, 320);       // smoke
    glVertex2i(300, 320);
    glVertex2i(300, 310);

    glBegin(GL_QUADS);
    glVertex2i(300, 250);
    glVertex2i(300, 260);       // smoke
    glVertex2i(320, 260);
    glVertex2i(320, 250);

    glBegin(GL_QUADS);
    glVertex2i(330, 260);
    glVertex2i(330, 270);       // smoke
    glVertex2i(350, 270);
    glVertex2i(350, 260);

    glBegin(GL_QUADS);
    glVertex2i(360, 290);
    glVertex2i(380, 290);       // smoke
    glVertex2i(380, 300);
    glVertex2i(360, 300);

    glEnd();
    glFlush();
}

void myInit(void)
{
    glClearColor(0,0,1,0);
    glColor3f(0,0,0);
    glPointSize(4);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,640,0,480);
}

main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Lecture 00 - Ship");
    glutDisplayFunc(myDisplay);
    myInit();
    glutMainLoop();
}
