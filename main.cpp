#include<windows.h>
#include<GL/glut.h>


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    //triangle

   /* glColor3f(1.0,0.0,1.0);

    glBegin(GL_LINES);
    glVertex2f(6,2);
    glVertex2f(14,2);

    glVertex2f(14,2);
    glVertex2f(10,8);

    glVertex2f(10,8);
    glVertex2f(6,2);
    glEnd();

    glFlush ();*/




///full
    glBegin(GL_POLYGON);
     glColor3f (1.000, 0.412, 0.706);

    glVertex2f(6,2);
    glVertex2f(14,2);
    glVertex2f(10,8);
    glEnd();

    glFlush ();

}

void init(void)
{
    glClearColor(1.0,1.0,1.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,22.0,0.0,11.0,0,50); //graph matrix


}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1000, 600); //display size
    glutInitWindowPosition (10, 10);
    glutCreateWindow ("Triangle");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

