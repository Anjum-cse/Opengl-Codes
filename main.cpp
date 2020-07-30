#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.1);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 50.0, 0.0, 50.0);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);


    //outer circle1

    float theta;
    int i;
		// Clear display window
    //Set colour to red
	glColor3f(0.7, 0.7, 0.7);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(25+21*cos(theta),22+21*sin(theta));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();



    float theta2;
    int j;
		// Clear display window
    //Set colour to red
	glColor3f(0.3, 0.3, 1.0);
	glBegin(GL_POLYGON);
	for(j=0;j<360;j++)
	{
	  theta2=j*3.142/180;
	  glVertex2f(25+20*cos(theta2),22+20*sin(theta2));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();


	 float theta3;
    int k;
		// Clear display window
    //Set colour to red
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(k=0;k<360;k++)
	{
	  theta3=k*3.142/180;
	  glVertex2f(25+17*cos(theta3),22+17*sin(theta3));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();



	 float theta4;
    int l;
		// Clear display window
    //Set colour to red
	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_POLYGON);
	for(l=0;l<180;l++)
	{
	  theta4=l*3.142/180;
	  glVertex2f(25+15*cos(theta4),22+15*sin(theta4));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();

	float theta5;
    int m;
		// Clear display window
    //Set colour to red
	glColor3f(0.8, 0.8, 0.8);
	glBegin(GL_POLYGON);
	for(m=180;m<360;m++)
	{
	  theta5=m*3.142/180;
	  glVertex2f(25+15*cos(theta5),22+15*sin(theta5));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();

	float theta6;
    int n;
		// Clear display window
    //Set colour to red
	glColor3f(0.3, 0.3, 1.0);
	glBegin(GL_POLYGON);
	for(n=0;n<360;n++)
	{
	  theta6=n*3.142/180;
	  glVertex2f(25+14*cos(theta6),22+14*sin(theta6));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();


	//w

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(10,28);
	glVertex2f(12,32);
	glVertex2f(19,17);
	glVertex2f(18,9);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(19,17);
	glVertex2f(18,9);
	glVertex2f(21,8);
	glVertex2f(25,18);
	glVertex2f(25,22);
	glVertex2f(21,22);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(25,22);
	glVertex2f(25,18);
	glVertex2f(29,8);
	glVertex2f(32,10);
	glVertex2f(30,16);
	glVertex2f(27,22);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(32,10);
	glVertex2f(30,16);
	glVertex2f(37,32);
	glVertex2f(40,28);
	glEnd();

	//v

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(17,37);
	glVertex2f(21,38);
	glVertex2f(27,24);
	glVertex2f(23,24);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(24,27);
	glVertex2f(27,24);
	glVertex2f(33,36);
    glVertex2f(30,38);
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
