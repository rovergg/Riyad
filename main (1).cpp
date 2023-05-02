#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#define PI 3.141516
#include<math.h>

int sunStatus=0;
int nightStatus=0;

GLfloat position = 0.1f;
GLfloat speed = 0.01f;
GLfloat speed1 = 0.005f;


GLfloat position1 = 0.1f;

int r = 0;
GLfloat position_rain = 0.0f; // for rain
GLfloat speed_rain = 0.05f;
GLfloat position_rain2 = 2.0f; // for rain
GLfloat speed_rain2 = 0.05f;

void update(int value) {

    if(position <-2.0)
       position =+2.0f;
       position -= speed;

glutPostRedisplay();
glutTimerFunc(100, update, 0);
}
void update1(int value) {

    if(position1 <-0.40)
       position1 =+0.0f;
       position1 -= speed1;

glutPostRedisplay();
glutTimerFunc(100, update1, 0);
}




void moon(){
{


    int j;

    GLfloat p2=0.6f; GLfloat q2= 0.8f; GLfloat r2 = 0.08f;
    int tringle3=30;




    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 1.0f,1.0f,1.0f);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );



    }
    glEnd ();
    }

}



void bird(){
    // 1st Bird
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 0.0f); //color
glVertex2f(-0.8f, 0.8f);
glVertex2f(-0.75f, 0.8f);
glVertex2f(-0.8f, 0.81f);
glVertex2f(-0.85f, 0.85f);
glEnd();



glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-0.7f, 0.7f);
glVertex2f(-0.65f, 0.7f);
glVertex2f(-0.7f, 0.71f);
glVertex2f(-0.75f, 0.75f);



glEnd();
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-0.9f, 0.7f);
glVertex2f(-0.85f, 0.7f);
glVertex2f(-0.9f, 0.71f);
glVertex2f(-0.95f, 0.75f);



glEnd();


}
void cloud(){
     {
	//1st cloud left part
    int i;
    GLfloat p1=0.09f; GLfloat q1= 0.9f; GLfloat r1 = 0.07f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    //1st cloud Middle part
    {


    int i;

    GLfloat p1=0.2f; GLfloat q1= 0.9f; GLfloat r1 = 0.1f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );
     }
    glEnd ();
    }

    //1st cloud right part
    {

    int i;

    GLfloat p1=0.3f; GLfloat q1= 0.9f; GLfloat r1 = 0.07f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();
    }

   }

    {
	//2nd cloud left part
    int j;

    GLfloat p2=-0.05f; GLfloat q2= 0.7f; GLfloat r2 = 0.07f;
    int tringle3=40;

    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );


    }
    glEnd ();

    //2nd cloud Middle part
    {

    int j;

    GLfloat p2=0.05f; GLfloat q2= 0.7f; GLfloat r2 = 0.1f;
    int tringle3=40;




    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );

    }
    glEnd ();
    }

    //2nd cloud right part
    {


    int j;

    GLfloat p2=0.15f; GLfloat q2= 0.7f; GLfloat r2 = 0.07f;
    int tringle3=40;




    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );



    }
    glEnd ();
    }
    }
}
void cloudNight(){
     {
	//1st cloud left part
    int i;

    GLfloat p1=0.09f; GLfloat q1= 0.9f; GLfloat r1 = 0.07f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    //1st cloud Middle part
    {


    int i;

    GLfloat p1=0.2f; GLfloat q1= 0.9f; GLfloat r1 = 0.1f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );
     }
    glEnd ();
    }

    //1st cloud right part
    {


    int i;

    GLfloat p1=0.3f; GLfloat q1= 0.9f; GLfloat r1 = 0.07f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();
    }

   }




    {
	//2nd cloud left part
    int j;

    GLfloat p2=-0.05f; GLfloat q2= 0.7f; GLfloat r2 = 0.07f;
    int tringle3=40;

    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );


    }
    glEnd ();

    //2nd cloud Middle part
    {

    int j;

    GLfloat p2=0.05f; GLfloat q2= 0.7f; GLfloat r2 = 0.1f;
    int tringle3=40;




    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );

    }
    glEnd ();
    }

    //2nd cloud right part
    {


    int j;

    GLfloat p2=0.15f; GLfloat q2= 0.7f; GLfloat r2 = 0.07f;
    int tringle3=40;




    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );



    }
    glEnd ();
    }
    }
}
void sun(){

{


    int j;

    GLfloat p2=0.6f; GLfloat q2= 0.8f; GLfloat r2 = 0.08f;
    int tringle3=30;

    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,0);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );



    }
    glEnd ();
    }
}
void sky(){

    glBegin(GL_QUADS);
	glColor3ub( 130, 202, 255);
	glVertex2f(-1.0f, 0.4f);
	glVertex2f(1.0f, 0.4f);
	glColor3ub(255, 251, 189);
	glVertex2f(1.0f, 1.0f);
	glColor3ub(255, 251, 189);
	glVertex2f(-1.0f, 1.0f);
	glEnd();
}
void skyNight(){

    glBegin(GL_QUADS);
	glColor3ub ( 36, 129, 209);
	glVertex2f(-1.0f, 0.4f);
	glVertex2f(1.0f, 0.4f);
	glColor3ub(38, 37, 37);
	glColor3ub(38, 37, 37);
	glVertex2f(1.0f, 1.0f);
    glColor3ub(38, 37, 37);
	glVertex2f(-1.0f, 1.0f);
	glEnd();
}










void display() {

           if(nightStatus==0){
                    //day
     glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
     glClear(GL_COLOR_BUFFER_BIT);



   sky();
   glPushMatrix();
   if(sunStatus==0){
   sun();
   }
   else if (sunStatus==1){
        glTranslatef(0.0f,position1,0.0f);
         sun();
   }
   glPopMatrix();

   glPushMatrix();
   glTranslatef(position,0.0f,0.0f);
   cloud();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(-position,0.0f,0.0f);
   bird();
   glPopMatrix();




glFlush();

}

    else {
           //night

            glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
     glClear(GL_COLOR_BUFFER_BIT);






   skyNight();

   glPushMatrix();
   moon();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(position,0.0f,0.0f);
   cloudNight();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(-position,0.0f,0.0f);
   bird();
   glPopMatrix();


glFlush();

         }

}


void keyboard(unsigned char key, int x, int y){


	if (key == 'n' || key == 'N'){		//Night
		nightStatus=1;
	}
	if (key == 'd' || key == 'D'){		//Day
		nightStatus=0;
	}
}

void myInit(void)
{
glClearColor(1.0, 1.0, 1.0, 1.0);
glColor3f(0.0f, 0.0f, 0.0f);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();

}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(700,700);
   glutInitWindowPosition(0, 0);
   glutCreateWindow("sky with day night");


   glutDisplayFunc(display);
   glutKeyboardFunc(keyboard);
   glutTimerFunc(100,update,0);
   glutTimerFunc(100,update1,0);
   myInit();
   glutMainLoop();
   return 0;
}

