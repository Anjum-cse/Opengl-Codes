#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
	glClearColor(0.184314  , 0.184314  , 0.309804, 0.0);	// Set sky color

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 60.0, 0.0, 50.0);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    //river

	glColor3f(0.258824 , 0.435294 , 0.258824);
	glBegin(GL_POLYGON);
	glVertex2f(0,35);
	glVertex2f(0,0);
	glVertex2f(60,0);
	glVertex2f(60,35);
	glVertex2f(30,38);

	glEnd();
	//land

	glColor3f(0.329412  , 0.329412  , 0.329412);
	glBegin(GL_POLYGON);
	glVertex2f(0,5);
	glVertex2f(10,10);
	glVertex2f(20,11);
	glVertex2f(30,12);
	glVertex2f(30,17);
	glVertex2f(32,21);
	glVertex2f(33,25);
	glVertex2f(30,30);
	glVertex2f(22,33);
	glVertex2f(7,33);
	glVertex2f(0,31);
	glEnd();

//moon


	float theta;
    int i;
		// Clear display window
    //Set colour to red
	glColor3f(1.0, 1.0, 0.5);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(55+5*cos(theta),45+5*sin(theta));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();


//moon reflection

float theta2;
    int j;
		// Clear display window
    //Set colour to red
	glColor3f(1.0, 1.0, 0.7);
	glBegin(GL_POLYGON);
	for(j=0;j<360;j++)
	{
	  theta2=j*3.142/180;
	  glVertex2f(55+5*cos(theta2),25+5*sin(theta2));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();

	//boat

	float theta3;
    int k;
		// Clear display window
    //Set colour to red
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for(k=180;k<360;k++)
	{
	  theta3=k*3.142/180;
	  glVertex2f(45+5*cos(theta3),15+5*sin(theta3));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();

	glColor3f(0.258824 , 0.435294 , 0.258824);
	glBegin(GL_POLYGON);
	glVertex2f(40.2,15);
	glVertex2f(49,15);
	glVertex2f(49,13);
	glVertex2f(41,13);
    glEnd();

    //ome



glColor3f(0.0 , 0.0 , 0.258824);
	glBegin(GL_POLYGON);
	glVertex2f(8,30);
	glVertex2f(8,35);
	glVertex2f(22,35);
	glVertex2f(22,30);
    glEnd();


glColor3f(0.0 , 0.435294 , 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(5,35);
	glVertex2f(10,40);
	glVertex2f(20,40);
	glVertex2f(25,35);
    glEnd();



glColor3f(0.258824 , 0.435294 , 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(14,33);
	glVertex2f(16,33);
	glVertex2f(16,30);
	glVertex2f(14,30);
    glEnd();


    //tree

    glColor3f(0.52 , 0.37 , 0.28);
	glBegin(GL_POLYGON);
	glVertex2f(16,40);
	glVertex2f(16,48);
	glVertex2f(18,48);
	glVertex2f(18,40);
    glEnd();

    glColor3f(0.52 , 0.37 , 0.28);
	glBegin(GL_POLYGON);
	glVertex2f(18,42);
	glVertex2f(18,43);
	glVertex2f(24,47);
	glVertex2f(23,45);
    glEnd();


    //leaf

    float theta4;
    int l;
		// Clear display window
    //Set colour to red
	glColor3f(0.0, 0.8, 0.0);
	glBegin(GL_POLYGON);
	for(l=0;l<190;l++)
	{
	  theta4=l*3.142/180;
	  glVertex2f(17+5*cos(theta4),47+5*sin(theta4));  // here (250,250) is the center and 150 is the radius
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
