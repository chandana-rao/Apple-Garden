
#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#include<GL/glut.h>

int h = 300;//distance(hen pos)

int k = 300;//height(hen pos)

int m = 300;//d( net pos)

int n = 100;//h(net pos)

int pos = 0;//flag of netmove

int level = 0;

void drawtree(int, int);

void display();

int score = 0;

int flag = 0;

int res;

float t1 = 0, t2 = 0, t3 = 0;




void scoredisp()

{

        	int i;
	
	char score_s[100];

	glColor3f(0, 0, 0);

	glRasterPos2i(250, 500);

	glLineWidth(3);


	sprintf(score_s, "SCORE: %d", score);

	flag = 0;

	for ( i = 0; score_s[i] != '\0'; i++)

	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, score_s[i]);
	
}



void print_string(char *string)

{

	int len, i;

	len = (int)strlen(string);

	for (i = 0; i < len; i++)

	{

	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string[i]);

	}

}



void startscreen()

{

	glClearColor(0, 0, 0, 1);

	glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);

	glColor3f(1, 0, 0);

	char str1[100];

	char str2[100];

	char str3[100];

	char str4[100];

	char str5[100];

	char str6[100];

	char str7[100];

	char str8[100];


	glPushMatrix();

	glRasterPos2i(220, 150);

	strcpy(str1, "GRAB THE APPLES");

	print_string(str1);

	glRasterPos2i(180, 100);

	strcpy(str2, "Press G to start the game");

	print_string(str2);
glRasterPos2i(100, 500);

	strcpy(str3, "JSS ACADEMY OF TECHNICAL EDUCATION");

	print_string(str3);

	glRasterPos2i(250, 450);

	strcpy(str4, "MINI PROJECT");

	print_string(str4);

	glRasterPos2i(100, 400);

	strcpy(str5, "COMPUTER GRAPHICS AND VISUALIZATION");

	print_string(str5);
glRasterPos2i(252, 350);

	strcpy(str6, "APPLE GARDEN");

	print_string(str6);

	glRasterPos2i(100, 300);

	strcpy(str7, "CHANDANA S RAO							1JS13CS025");

	print_string(str7);


	
glPopMatrix();

	glutSwapBuffers();

}





void drawtree(int x, int y)


{

	//tree1





	glColor3f(.3, 0.0, 0.0);

	glBegin(GL_POLYGON);

	glVertex2f(125, 225);

	glVertex2f(75, 225);

	glVertex2f(100, 250);

	glVertex2f(113, 275);

	glVertex2f(113, 300);

	glVertex2f(100, 325);

	glVertex2f(125, 313);

	glVertex2f(150, 325);

	glVertex2f(138, 300);

	glVertex2f(138, 275);

	glVertex2f(150, 250);

	glVertex2f(175, 225);

	glFlush();

	glEnd();



	glColor4f(0.0, .5, 0.0, 1);

	glBegin(GL_POLYGON);

	glVertex2f(88, 300);

	glVertex2f(63, 325);

	glVertex2f(50, 350);

	glVertex2f(50, 400);

	glVertex2f(63, 425);

	glVertex2f(88, 450);

	glVertex2f(125, 463);

	glVertex2f(163, 450);

	glVertex2f(188, 425);

	glVertex2f(200, 400);

	glVertex2f(200, 350);

	glVertex2f(188, 325);

	glVertex2f(163, 300);

	glFlush();

	glEnd();









	//tree2


	glColor3f(0.3, 0.0, 0.0);

	glBegin(GL_POLYGON);

	glVertex2f(300, 225);

	glVertex2f(250, 225);

	glVertex2f(275, 250);

	glVertex2f(288, 275);

	glVertex2f(288, 300);

	glVertex2f(275, 325);

	glVertex2f(300, 313);

	glVertex2f(325, 325);

	glVertex2f(313, 300);

	glVertex2f(313, 275);

	glVertex2f(325, 250);

	glVertex2f(350, 225);

	glFlush();

	glEnd();


	glColor4f(0.0, .5, 0.0, 1);

	glBegin(GL_POLYGON);

	glVertex2f(263, 300);

	glVertex2f(238, 325);

	glVertex2f(225, 350);

	glVertex2f(225, 400);

	glVertex2f(238, 425);

	glVertex2f(263, 450);

	glVertex2f(300, 463);

	glVertex2f(338, 450);

	glVertex2f(363, 425);

	glVertex2f(375, 400);

	glVertex2f(375, 350);

	glVertex2f(363, 325);

	glVertex2f(338, 300);


	glFlush();

	glEnd();



	//tree3


	glColor3f(0.3, 0.0, 0.0);

	glBegin(GL_POLYGON);

	glVertex2f(475, 225);

	glVertex2f(425, 225);

	glVertex2f(450, 250);

	glVertex2f(463, 275);

	glVertex2f(463, 300);

	glVertex2f(450, 325);

	glVertex2f(475, 313);

	glVertex2f(500, 325);

	glVertex2f(488, 300);

	glVertex2f(488, 275);

	glVertex2f(500, 250);

	glVertex2f(525, 225);

	glVertex2f(525, 225);


	glFlush();

	glEnd();



	glColor4f(0.0, .5, 0.0, 1);

	glBegin(GL_POLYGON);


	glVertex2f(438, 300);

	glVertex2f(413, 325);

	glVertex2f(400, 350);

	glVertex2f(400, 400);

	glVertex2f(413, 425);

	glVertex2f(438, 450);

	glVertex2f(475, 463);

	glVertex2f(513, 450);

	glVertex2f(538, 425);

	glVertex2f(550, 400);

	glVertex2f(550, 350);

	glVertex2f(538, 325);

	glVertex2f(513, 300);



	glFlush();

	glEnd();


}




//net draw


void net(int x, int y)

{

	glLineWidth(2.0);

	glColor3f(0, 0, 0);

	glBegin(GL_LINE_LOOP);

	glVertex2f(x - 25, y - 40);

	glVertex2f(x - 15, y - 60);

	glVertex2f(x + 15, y - 60);

	glVertex2f(x + 25, y - 40);


	glVertex2f(x - 25, y - 40);

	glVertex2f(x + 70, y - 40);

	glColor3f(1, 0, 0);

	glEnd();



	//draw mesh

	glLineWidth(2.0);

	glColor3f(1, 1, 1);

	glBegin(GL_LINES);

	glVertex2f(x - 24, y - 40);

	glVertex2f(x + 24, y - 40);

	glVertex2f(x + 15, y - 60);

	glVertex2f(x + 15, y - 40);

	glVertex2f(x + 10, y - 60);

	glVertex2f(x + 10, y - 40);

	glVertex2f(x + 5, y - 60);

	glVertex2f(x + 5, y - 40);

	glVertex2f(x, y - 60);

	glVertex2f(x, y - 40);

	glVertex2f(x - 5, y - 60);

	glVertex2f(x - 5, y - 40);

	glVertex2f(x - 15, y - 60);

	glVertex2f(x - 15, y - 40);

	glVertex2f(x - 10, y - 60);

	glVertex2f(x - 10, y - 40);

	glVertex2f(x - 20, y - 50);

	glVertex2f(x + 20, y - 50);

	glEnd();


}

void key_to_start(unsigned char key, int x, int y)

{

	if (key == 'g' || key == 'G')

		glutDisplayFunc(display);

		
	glutPostRedisplay();

	
}







	//keys for net movement


	void keys(int key, int x, int y)

	{

		if (key == GLUT_KEY_RIGHT)

		{

			if (m < 475)

			m += 170;

		}

		else if (key == GLUT_KEY_LEFT)

		{

			if (m > 125)

			m -= 170;

		}



		else if (key == GLUT_KEY_F5)

		{

			t1 = t2 = t3 = 0;

			pos = -1;

		}

	


	if (m > 100 && m < 150)

		{

			pos = 0;

			flag = 1;

		}

	
	if (m > 275 && m < 325)

		{

			pos = 1;

			flag = 1;

		}


		if (m > 450 && m < 500)

		{

			pos = 2;

			flag = 1;


		}

		
	}




	//APPLE FALLING

	void apple1()

	{

		glPushMatrix();

		glTranslatef(125, 250, 0);

		glColor3f(0.0, 1.0, 0.0);

		glBegin(GL_LINE_LOOP);

		glVertex2f(12, 12);

		glVertex2f(13, 13);

		glColor3f(1.0, 0.0, 0.0);

		glutSolidSphere(8, 8, 8);
//to make the Apple fall at the specified dist

		glPopMatrix();

	}


	void apple2()

	{

		glPushMatrix();

		glTranslatef(300, 250, 0);

		glColor3f(0.0, 1.0, 0.0);

		glBegin(GL_LINE_LOOP);

		glVertex2f(12, 12);

		glVertex2f(13, 13);

		glColor3f(1.0, 0.0, 0.0);

		glutSolidSphere(8, 8, 8);
//to make the Apple fall at the specified dist

		glPopMatrix();

	}


	void apple3()

	{

		glPushMatrix();

		glTranslatef(475, 250, 0);

		glColor3f(0.0, 1.0, 0.0);

		glBegin(GL_LINE_LOOP);

		glVertex2f(12, 12);

		glVertex2f(13, 13);

		glColor3f(1.0, 0.0, 0.0);

		glutSolidSphere(8, 8, 8);
//to make the Apple fall at the specified dist

		glPopMatrix();

	}




void menu(int val)
{
	switch (val)
	case 4:exit(0);

}

void submenu1(int val)
{
	switch (val)
	case 1:break;
}

void submenu2(int val)
{
	switch (val)
	{
		case 1:level=0;
		break;
		case 2:level=1;
		break;
	}
}

void callmenu()
{
	int submenu, submenu3, menu1;

	submenu = glutCreateMenu(submenu1);
	glutAddMenuEntry("press the arrow keys - left, right, down", 10);
	glutAddMenuEntry("to control or to Apple fall press f1", 10);

	submenu3 = glutCreateMenu(submenu2);
	glutAddMenuEntry("level1", 1);
	glutAddMenuEntry("level2", 2);

	menu1 = glutCreateMenu(menu);
	glutAddMenuEntry("start", 1);
	glutAddSubMenu("insruction", submenu);
	glutAddSubMenu("level", submenu3);
	glutAddMenuEntry("exit", 4);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
}

void display()
{

	//draw background
	//green field
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(0.0, 0.0);
	glVertex2f(0.0, 225.0);
	glVertex2f(600.0, 225.0);
	glVertex2f(600, 0);
	glEnd();

	//sky
	glColor4f(0.7, 0.9, 1.0, .7);
	glBegin(GL_POLYGON);
	glVertex2f(0.0, 226.0);
	glVertex2f(0.0, 600.0);
	glVertex2f(600, 600);
	glVertex2f(600.0, 226.0);
	glEnd();

	drawtree(h, k);
	net(m, n);

	//if first apple is caught

	glPushMatrix();
	if (pos == 0)
	{
		if (t1 == -200)
		{
			t1 = 0;
			score += 1;
		}
	}

	if (t1 < -300)
		t1 = 0;
	if (level == 0)
		glTranslatef(0, t1 -= 1, 0);
	else if (level == 1)
		glTranslatef(0, t1 -= 1.5, 0);

	apple1();
	glPopMatrix();

	//if second apple is caught

	glPushMatrix();
	if (pos == 1)
	{
		if (t2 == -200)
		{
			t2 = 0;
		    score += 1;
		}
	}

	if (t2 < -300)
		t2 = 0;

	if (level == 0)
		glTranslatef(0, t2 -= 0.5, 0);
	
	else if (level == 1)
		glTranslatef(0, t2 -= 1, 0);

	apple2();
	glPopMatrix();

	//if third apple is caught


	glPushMatrix();
	if (pos == 2 )
	{
		if (t3 == -200)
		{
			t3 = 0;
			score += 1;
		}
	}

	if (t3 < -300)
		t3 = 0;
	if (level == 0)
		glTranslatef(0, t3 -= 0.5, 0);
	else if (level == 1)
		glTranslatef(0, t3 -= 1, 0);

	apple3();
	glPopMatrix();
	scoredisp();
	glutPostRedisplay();
	glutSwapBuffers();
	glFlush();
}
void myinit()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glEnable(GL_BLEND); //enable the blending
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA); //set the blend function
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 600.0, 0.0, 600.0, -600, 600);//describes a transformation that produces a parallel projection.
	glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("GRAB THE APPLES");
	glutDisplayFunc(startscreen);
	glutSpecialFunc(keys);
	glutKeyboardFunc(key_to_start);
	callmenu();
	myinit();
	glutMainLoop();
	return 0;
}
