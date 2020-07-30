#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
    glClearColor(0.184314  , 0.184314  , 0.309804, 0.0);	// Set sky color

    glMatrixMode(GL_PROJECTION);		// Set projection parameters
    gluOrtho2D(0.0, 60.0, 0.0, 30.0);
}

void display1()
{
    glClear(GL_COLOR_BUFFER_BIT);

    //hills

    glColor3f(0.329412  , 0.329412  , 0.329412);
    glBegin(GL_POLYGON);

    glVertex2f(0,0);
    glVertex2f(0,2);
    glVertex2f(5,3);
    glVertex2f(10,03);
    glVertex2f(20,04);
    glVertex2f(30,05);
    glVertex2f(40,05);
    glVertex2f(50,04);
    glVertex2f(53,3);
    glVertex2f(56,3);
    glVertex2f(60,1);
    glVertex2f(60,0);
    glEnd();


    //palace

    glColor3f(0.5 ,0.5 ,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(30,5);
    glVertex2f(30,6);
    glVertex2f(40,6);
    glVertex2f(40,5);
    glEnd();

    glColor3f(0.5 ,0.5 ,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(31,6);
    glVertex2f(31,9);
    glVertex2f(39,9);
    glVertex2f(39,6);
    glEnd();


    glColor3f(0.5 ,0.5 ,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(31,9);
    glVertex2f(30,9);
    glVertex2f(31,10);
    glVertex2f(39,10);
    glVertex2f(40,9);
    glVertex2f(39,9);
    glEnd();

    glColor3f(0.5 ,0.5 ,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(31,10);
    glVertex2f(31,11);
    glVertex2f(39,11);
    glVertex2f(39,10);
    glEnd();

    glColor3f(0.5 ,0.5 ,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(33,11);
    glVertex2f(33.5,20);
    glVertex2f(35,22.5);
    glVertex2f(36.5,20);
    glVertex2f(37,11);
    glEnd();



    glColor3f(0.1 ,0.1 ,0.1);
    glBegin(GL_LINES);
    glVertex2f(31,6);
    glVertex2f(39,6);

    glVertex2f(31,9);
    glVertex2f(39,9);

    glVertex2f(31,10);
    glVertex2f(39,10);

    glVertex2f(33.5,20);
    glVertex2f(36.5,20);



    glEnd();


    //clock
    float theta;
    int i;
    // Clear display window
    //Set colour to red
    glColor3f(0.8, 0.8, 0.8);
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(35+.9*cos(theta),18+.9*sin(theta));  // here (250,250) is the center and 150 is the radius
    }
    glEnd();




    glColor3f(0.0 ,0.0 ,0.0);
    glBegin(GL_LINES);
    glVertex2f(35,18);
    glVertex2f(35,18.5);

    glVertex2f(35,18);
    glVertex2f(35.3,18);


    glEnd();




//moon


    float thetaa;
    int j;
    // Clear display window
    //Set colour to red
    glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_POLYGON);
    for(j=0; j<360; j++)
    {
        thetaa=j*3.142/180;
        glVertex2f(15+5*cos(thetaa),15+5*sin(thetaa));  // here (250,250) is the center and 150 is the radius
    }
    glEnd();


//eclipse

    float thetaaa;
    int k;
    // Clear display window
    //Set colour to red
    glColor3f(0.2, 0.2, 0.2);
    glBegin(GL_POLYGON);
    for(k=0; k<180; k++)
    {
        thetaaa=k*3.142/180;
        glVertex2f(15+5*cos(thetaaa),15+5*sin(thetaaa));  // here (250,250) is the center and 150 is the radius
    }
    glEnd();



    float thet;
    int m;
    // Clear display window
    //Set colour to red
    glColor3f(0.2, 0.2, 0.2);
    glBegin(GL_POLYGON);
    for(m=0; m<360; m++)
    {
        thet=m*3.142/180;
        glVertex2f(15+5*cos(thet),15+1.7*sin(thet));  // here (250,250) is the center and 150 is the radius
    }
    glEnd();


    //star left

    glColor3f(1  , 1  , 1);
    glBegin(GL_LINES);

    glVertex2f(9,25);
    glVertex2f(10,25);

    glVertex2f(9,24);
    glVertex2f(10,26);

    glVertex2f(10,24);
    glVertex2f(9,26);
    glEnd();

    //star right


    glColor3f(1  , 1  , 1);
    glBegin(GL_LINES);

    glVertex2f(50,25);
    glVertex2f(51,25);

    glVertex2f(50,24);
    glVertex2f(51,26);

    glVertex2f(51,24);
    glVertex2f(50,26);
    glEnd();

    glColor3f(1  , 1  , 1);
    glBegin(GL_LINES);

    glVertex2f(52,27);
    glVertex2f(53,27);

    glVertex2f(52,28);
    glVertex2f(53,26);

    glVertex2f(52,26);
    glVertex2f(53,28);
    glEnd();



    glFlush();
}

void display2()
{
    glClear(GL_COLOR_BUFFER_BIT);

    //hills

    glColor3f(0.329412  , 0.329412  , 0.329412);
    glBegin(GL_POLYGON);

    glVertex2f(0,0);
    glVertex2f(0,2);
    glVertex2f(5,3);
    glVertex2f(10,03);
    glVertex2f(20,04);
    glVertex2f(30,05);
    glVertex2f(40,05);
    glVertex2f(50,04);
    glVertex2f(53,3);
    glVertex2f(56,3);
    glVertex2f(60,1);
    glVertex2f(60,0);
    glEnd();


    //palace

    glColor3f(0.5 ,0.5 ,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(30,5);
    glVertex2f(30,6);
    glVertex2f(40,6);
    glVertex2f(40,5);
    glEnd();

    glColor3f(0.5 ,0.5 ,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(31,6);
    glVertex2f(31,9);
    glVertex2f(39,9);
    glVertex2f(39,6);
    glEnd();


    glColor3f(0.5 ,0.5 ,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(31,9);
    glVertex2f(30,9);
    glVertex2f(31,10);
    glVertex2f(39,10);
    glVertex2f(40,9);
    glVertex2f(39,9);
    glEnd();

    glColor3f(0.5 ,0.5 ,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(31,10);
    glVertex2f(31,11);
    glVertex2f(39,11);
    glVertex2f(39,10);
    glEnd();

    glColor3f(0.5 ,0.5 ,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(33,11);
    glVertex2f(33.5,20);
    glVertex2f(35,22.5);
    glVertex2f(36.5,20);
    glVertex2f(37,11);
    glEnd();



    glColor3f(0.1 ,0.1 ,0.1);
    glBegin(GL_LINES);
    glVertex2f(31,6);
    glVertex2f(39,6);

    glVertex2f(31,9);
    glVertex2f(39,9);

    glVertex2f(31,10);
    glVertex2f(39,10);

    glVertex2f(33.5,20);
    glVertex2f(36.5,20);



    glEnd();


    //clock
    float theta;
    int i;
    // Clear display window
    //Set colour to red
    glColor3f(0.8, 0.8, 0.8);
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(35+.9*cos(theta),18+.9*sin(theta));  // here (250,250) is the center and 150 is the radius
    }
    glEnd();




    glColor3f(0.0 ,0.0 ,0.0);
    glBegin(GL_LINES);
    glVertex2f(35,18);
    glVertex2f(35,18.5);

    glVertex2f(35,18);
    glVertex2f(35.3,18);


    glEnd();




//moon


    float thetaa;
    int j;
    // Clear display window
    //Set colour to red
    glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_POLYGON);
    for(j=0; j<360; j++)
    {
        thetaa=j*3.142/180;
        glVertex2f(15+5*cos(thetaa),15+5*sin(thetaa));  // here (250,250) is the center and 150 is the radius
    }
    glEnd();


//eclipse

    float thetaaa;
    int k;
    // Clear display window
    //Set colour to red
    glColor3f(0.2, 0.2, 0.2);
    glBegin(GL_POLYGON);
    for(k=0; k<180; k++)
    {
        thetaaa=k*3.142/180;
        glVertex2f(15+5*cos(thetaaa),15+5*sin(thetaaa));  // here (250,250) is the center and 150 is the radius
    }
    glEnd();



    float thet;
    int m;
    // Clear display window
    //Set colour to red
    glColor3f(0.2, 0.2, 0.2);
    glBegin(GL_POLYGON);
    for(m=0; m<360; m++)
    {
        thet=m*3.142/180;
        glVertex2f(15+5*cos(thet),15+1.7*sin(thet));  // here (250,250) is the center and 150 is the radius
    }
    glEnd();


    //star left
    glColor3f(1  , 1  , 1);
    glBegin(GL_LINES);

    glVertex2f(5,25);
    glVertex2f(6,25);

    glVertex2f(5,24);
    glVertex2f(6,26);

    glVertex2f(6,24);
    glVertex2f(5,26);
    glEnd();

    glColor3f(1  , 1  , 1);
    glBegin(GL_LINES);

    glVertex2f(7,27);
    glVertex2f(8,27);

    glVertex2f(7,28);
    glVertex2f(8,26);

    glVertex2f(7,26);
    glVertex2f(8,28);
    glEnd();

    //star right
    glColor3f(1  , 1  , 1);
    glBegin(GL_LINES);

    glVertex2f(54,25);
    glVertex2f(55,25);

    glVertex2f(54,24);
    glVertex2f(55,26);

    glVertex2f(55,24);
    glVertex2f(54,26);
    glEnd();






    glFlush();
}
void update(int value)
{
    glutPostRedisplay();
    glutTimerFunc(25,update,0);
}
void display(void)
{
    int state =1,i=0;
    for(i=0; i>=0; i++)
    {
        if(state==0)
        {
            display1();
            state=1;
            Sleep(2000);
        }
        else
        {
            display2();
            state=0;
            Sleep(2000);
        }
    }
}
int main(int argc, char* argv[])
{
    glutInit(&argc, argv);						// Initalise GLUT
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

    glutInitWindowPosition(100, 100);				// Set window position
    glutInitWindowSize(600, 300);					// Set window size
    glutCreateWindow("An Example OpenGL Program");	// Create display window

    init();
    // Execute initialisation procedure
    // Send graphics to display window
    glutDisplayFunc(display);

    glutTimerFunc(25,update,0);
    glutMainLoop();					// Display everything and wait

    return 0;
}
