#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
    glClearColor(0.196078, 0.6, 0.8, 0.0);	// Set sky color

    glMatrixMode(GL_PROJECTION);		// Set projection parameters
    gluOrtho2D(0.0, 60.0, 0.0, 30.0);
}

void boat(void)
{

    glColor3f(0.52    , 0.37    , 0.26 );
    glBegin(GL_POLYGON);

    glVertex2f(3,8);
    glVertex2f(5,6);
    glVertex2f(8,6);
    glVertex2f(10,8);
    glEnd();

    glColor3f(0.91     , 0.76    , 0.65 );
    glBegin(GL_POLYGON);

    glVertex2f(5,8);
    glVertex2f(6.5,9.5);
    glVertex2f(8,8);

    glEnd();
}

void clouds (void)
{

    //clouds
    float theta;
    int i;

    glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(8+2*cos(theta),20+2*sin(theta));  // here (250,250) is the center and 150 is the radius
    }
    glEnd();

    float thetaa;
    int j;

    glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_POLYGON);
    for(j=0; j<360; j++)
    {
        thetaa=j*3.142/180;
        glVertex2f(11+3*cos(thetaa),20+3*sin(thetaa));  // here (250,250) is the center and 150 is the radius
    }
    glEnd();

    float thetaaa;
    int k;

    glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_POLYGON);
    for(k=0; k<360; k++)
    {
        thetaaa=k*3.142/180;
        glVertex2f(14+2*cos(thetaaa),20+2*sin(thetaaa));  // here (250,250) is the center and 150 is the radius
    }
    glEnd();


    float theta1;
    int l;

    glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_POLYGON);
    for(l=0; l<360; l++)
    {
        theta1=l*3.142/180;
        glVertex2f(46+2*cos(theta1),20+2*sin(theta1));  // here (250,250) is the center and 150 is the radius
    }
    glEnd();

    float thetaa1;
    int m;

    glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_POLYGON);
    for(m=0; m<360; m++)
    {
        thetaa1=m*3.142/180;
        glVertex2f(49+3*cos(thetaa1),20+3*sin(thetaa1));  // here (250,250) is the center and 150 is the radius
    }
    glEnd();

    float thetaaa1;
    int p;

    glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_POLYGON);
    for(p=0; p<360; p++)
    {
        thetaaa1=p*3.142/180;
        glVertex2f(52+2*cos(thetaaa1),20+2*sin(thetaaa1));  // here (250,250) is the center and 150 is the radius
    }
    glEnd();



    float theta2;
    int c;

    glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_POLYGON);
    for(c=0; c<360; c++)
    {
        theta2=c*3.142/180;
        glVertex2f(27+2*cos(theta2),22+2*sin(theta2));  // here (250,250) is the center and 150 is the radius
    }
    glEnd();

    float thetaa2;
    int z;

    glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_POLYGON);
    for(z=0; z<360; z++)
    {
        thetaa2=z*3.142/180;
        glVertex2f(30+3*cos(thetaa2),22+3*sin(thetaa2));  // here (250,250) is the center and 150 is the radius
    }
    glEnd();

    float thetaaa2;
    int e;

    glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_POLYGON);
    for(e=0; e<360; e++)
    {
        thetaaa2=e*3.142/180;
        glVertex2f(33+2*cos(thetaaa2),22+2*sin(thetaaa2));  // here (250,250) is the center and 150 is the radius
    }
    glEnd();
}

float boat_move=0.0, clouds_move=60.0;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);



    //rainbow
    //red
    float thetar;
    int r;
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    for(r=0; r<180; r++)
    {
        thetar=r*3.142/180;
        glVertex2f(30+20*cos(thetar),20+10*sin(thetar));  // here (250,250) is the center and 150 is the radius
    }
    glEnd();

//orrange
    float thetaO;
    int x;
    glColor3f(1.0, 0.5, 0.0);
    glBegin(GL_POLYGON);
    for(x=0; x<180; x++)
    {
        thetaO=x*3.142/180;
        glVertex2f(30+19*cos(thetaO),20+9*sin(thetaO));  // here (250,250) is the center and 150 is the radius
    }
    glEnd();

//yellow
    float thetay;
    int y;
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    for(y=0; y<180; y++)
    {
        thetay=y*3.142/180;
        glVertex2f(30+18*cos(thetay),20+8*sin(thetay));  // here (250,250) is the center and 150 is the radius
    }
    glEnd();

//green

    float thetag;
    int g;
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    for(g=0; g<180; g++)
    {
        thetag=g*3.142/180;
        glVertex2f(30+17*cos(thetag),20+7*sin(thetag));  // here (250,250) is the center and 150 is the radius
    }
    glEnd();

    //blue

    float thetab;
    int b;
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    for(b=0; b<180; b++)
    {
        thetab=b*3.142/180;
        glVertex2f(30+16*cos(thetab),20+6*sin(thetab));  // here (250,250) is the center and 150 is the radius
    }
    glEnd();
//indigo
    float thetain;
    int n;

    glColor3f(0.137255 , 0.137255 , 0.556863);
    glBegin(GL_POLYGON);
    for(n=0; n<180; n++)
    {
        thetain=n*3.142/180;
        glVertex2f(30+15*cos(thetain),20+5*sin(thetain));  // here (250,250) is the center and 150 is the radius
    }
    glEnd();


//violet
    float thetav;
    int v;
    glColor3f(0.309804  ,0.184314  ,0.309804);
    glBegin(GL_POLYGON);
    for(v=0; v<180; v++)
    {
        thetav=v*3.142/180;
        glVertex2f(30+14*cos(thetav),20+4*sin(thetav));  // here (250,250) is the center and 150 is the radius
    }
    glEnd();

//sky pre define
    float thetas;
    int s;
    // Clear display window
    //Set colour to red
    glColor3f(0.196078  ,0.6  ,0.8);
    glBegin(GL_POLYGON);
    for(s=0; s<180; s++)
    {
        thetas=s*3.142/180;
        glVertex2f(30+14*cos(thetas),20+4*sin(thetas));  // here (250,250) is the center and 150 is the radius
    }
    glEnd();




    //hills1

    glColor3f(0.0  , 0.2 , 0.0 );
    glBegin(GL_POLYGON);

    glVertex2f(0,8);
    glVertex2f(6,15);
    glVertex2f(12,9);


    glVertex2f(0,8);
    glVertex2f(0,16);
    glVertex2f(6,10);

    glVertex2f(3,9);
    glVertex2f(14,18);
    glVertex2f(18,10);


    glEnd();


    //hills2

    glColor3f(0.0  , 0.2 , 0.0 );
    glBegin(GL_POLYGON);
    glVertex2f(47,10);
    glVertex2f(51,15);
    glVertex2f(53,9);
    glVertex2f(50,9);
    glVertex2f(55,16.8);
    glVertex2f(58,9);
    glEnd();

    //river
    glColor3f(0.137255   , 0.556863   , 0.556863 );
    glBegin(GL_POLYGON);

    glVertex2f(0,0);
    glVertex2f(0,10);
    glVertex2f(15,12);
    glVertex2f(28,12);
    glVertex2f(60,10);
    glVertex2f(60,0);
    glEnd();


    //land
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


    glPushMatrix();
    glTranslatef(boat_move,0.0,0.0);

    boat();
    glPopMatrix();
    boat_move +=0.1;
    if(boat_move > 60)
    {
        boat_move = 0;


    }

    glPushMatrix();
    glTranslatef(clouds_move,0.0,0.0);

    clouds();
    glPopMatrix();
    clouds_move -=0.1;
    if(clouds_move < 0)
    {
        clouds_move = 60;


    }

//boat

//glColor3f(0.52    , 0.37    , 0.26 );
//	glBegin(GL_POLYGON);
//
//	glVertex2f(3,8);
//	glVertex2f(5,6);
//	glVertex2f(8,6);
//	glVertex2f(10,8);
//	glEnd();
//
//glColor3f(0.91     , 0.76    , 0.65 );
//	glBegin(GL_POLYGON);
//
//	glVertex2f(5,8);
//	glVertex2f(6.5,9.5);
//	glVertex2f(8,8);
//
//	glEnd();

    glFlush();
}

void update(int value)
{
    glutPostRedisplay();
    glutTimerFunc(25, update, 0);
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);						// Initalise GLUT
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

    glutInitWindowPosition(100, 100);				// Set window position
    glutInitWindowSize(600, 300);					// Set window size
    glutCreateWindow("An Example OpenGL Program");	// Create display window

    init();							// Execute initialisation procedure
    glutDisplayFunc(display);   // Send graphics to display window
    glutTimerFunc(25,update,0);
    glutMainLoop();					// Display everything and wait

    return 0;
}
