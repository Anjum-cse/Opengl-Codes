#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.1);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 80.0, 0.0, 80.0);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);


//apple

    float theta;
    int i;
		// Clear display window
    //Set colour to red
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(20+14*cos(theta),40+20*sin(theta));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();

    float theta2;
    int j;
		// Clear display window
    //Set colour to red
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for(j=0;j<360;j++)
	{
	  theta2=j*3.142/180;
	  glVertex2f(33+14*cos(theta2),40+20*sin(theta2));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();

	float theta4;
    int l;
		// Clear display window
    //Set colour to red
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(l=0;l<360;l++)
	{
	  theta4=l*3.142/180;
	  glVertex2f(50+7*cos(theta4),42+7*sin(theta4));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();

//leaf

float theta3;
    int k;
		// Clear display window
    //Set colour to red
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for(k=45;k<225;k++)
	{
	  theta3=k*3.142/180;
	  glVertex2f(33+3*cos(theta3),70+5*sin(theta3));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();

glFlush();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(100, 100);				// Set window position
	glutInitWindowSize(400, 400);					// Set window size
	glutCreateWindow("An Example OpenGL Program");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(display);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}
