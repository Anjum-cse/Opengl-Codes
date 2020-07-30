#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
    glClearColor(0.9, 0.9, 0.9, 0.0);	// Set display window colour to white

    glMatrixMode(GL_PROJECTION);		// Set projection parameters
    gluOrtho2D(0.0, 60.0, 0.0, 70.0);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(38,8);
    glVertex2f(45,18);
    glVertex2f(38,16);
    glVertex2f(35,10);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(45,18);
    glVertex2f(38,16);
    glVertex2f(31,18);
    glVertex2f(36,21);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(31,18);
    glVertex2f(36,21);
    glVertex2f(31,21);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(36,21);
    glVertex2f(32,21);
    glVertex2f(30,27);
    glVertex2f(32,28);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(30,27);
    glVertex2f(32,28);
    glVertex2f(32,32);
    glVertex2f(28,32);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(32,32);
    glVertex2f(31,38);
    glVertex2f(25,36);
    glVertex2f(27,31);
    glEnd();



    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(24,32);
    glVertex2f(20,32);
    glVertex2f(20,35);
    glVertex2f(25,36);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(20,32);
    glVertex2f(20,29);
    glVertex2f(22,29);
    glVertex2f(23,32);
    glEnd();


    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);

    glVertex2f(20,29);
    glVertex2f(22,29);
    glVertex2f(22,27);
    glVertex2f(19,27);
    glEnd();



    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(22,27);
    glVertex2f(19,27);
    glVertex2f(19,25);
    glVertex2f(21,25);

    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(19,25);
    glVertex2f(21,25);
    glVertex2f(20,23);
    glVertex2f(16,22);

    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);

    glVertex2f(20,23);
    glVertex2f(16,22);
    glVertex2f(19,21);
    glVertex2f(22,20);
    glVertex2f(23,21);

    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(20,23);
    glVertex2f(16,22);
    glVertex2f(16,20);
    glVertex2f(17.6,20);


    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(16,20);
    glVertex2f(17.6,20);
    glVertex2f(18,17);
    glVertex2f(17,16);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(18,17);
    glVertex2f(17,16);
    glVertex2f(20,13.8);
    glVertex2f(20,15.4);

    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(20,13.8);
    glVertex2f(20,15.4);
    glVertex2f(22,17);
    glVertex2f(23.5,15);

    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(23.5,13);
    glVertex2f(23.5,22);
    glVertex2f(26,22);
    glVertex2f(26,12);

    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);

    glVertex2f(26,15);
    glVertex2f(26,17.5);
    glVertex2f(29,17);
    glVertex2f(30,15);

    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);

    glVertex2f(30,15);
    glVertex2f(26,15);
    glVertex2f(29,11);
    glVertex2f(33,10);

    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);

    glVertex2f(30,15);
    glVertex2f(29,17);
    glVertex2f(30,18);
    glVertex2f(32,17);
    glVertex2f(31,15);

    glEnd();


    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(30,18);
    glVertex2f(32,17);
    glVertex2f(32,19.5);
    glVertex2f(30,21);
    glVertex2f(29,19);

    glEnd();


    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(30,21);
    glVertex2f(29,19);
    glVertex2f(26,20);
    glVertex2f(26,22);

    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(30,21);
    glVertex2f(29,19);
    glVertex2f(26,20);
    glVertex2f(26,22);

    glEnd();


    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(20,35);
    glVertex2f(25,36);
    glVertex2f(31,38);
    glVertex2f(30,40);
    glVertex2f(29,43);
    glVertex2f(29,47);
    glVertex2f(30,48);
    glVertex2f(21,45);
    glVertex2f(22,41);
    glVertex2f(21,38);


    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(30,48);
    glVertex2f(21,45);
    glVertex2f(19,48);
    glVertex2f(23,52);
    glVertex2f(23,54);
    glVertex2f(26,55);
    glVertex2f(26.4,53);
    glVertex2f(31,52);

    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(21,45);
    glVertex2f(19,48);
    glVertex2f(19,42);
    glVertex2f(18,40);
    glVertex2f(18,37);
    glVertex2f(19,36);
    glVertex2f(19.5,37);
    glVertex2f(19,38);
    glVertex2f(20,40);

    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(30,48);
    glVertex2f(31,46);
    glVertex2f(31,44);
    glVertex2f(33,41);
    glVertex2f(33,38.5);
    glVertex2f(34,38);
    glVertex2f(35,39);
    glVertex2f(35,40);

    glVertex2f(34,41);
    glVertex2f(34,44);
    glVertex2f(32,50);
    glVertex2f(31,52);

    glEnd();


    //head
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(26,55);
    glVertex2f(27,57);
    glVertex2f(26,58);
    glVertex2f(25,58);
    glVertex2f(24,58.5);
    glVertex2f(23,57);
    glVertex2f(23,56);
    glVertex2f(22.5,55);
    glVertex2f(23,54);

    glEnd();
    //7

    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(24,48);
    glVertex2f(26,48);

    glVertex2f(26,48 );
    glVertex2f(24,44);
    glEnd();








    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);						// Initalise GLUT
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

    glutInitWindowPosition(100, 100);				// Set window position
    glutInitWindowSize(300, 350);					// Set window size
    glutCreateWindow("An Example OpenGL Program");	// Create display window

    init();							// Execute initialisation procedure
    glutDisplayFunc(display);		// Send graphics to display window
    glutMainLoop();					// Display everything and wait

    return 0;
}
