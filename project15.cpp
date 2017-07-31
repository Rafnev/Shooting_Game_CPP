# include "iGraphics.h"
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int page=1;
void welcome();//welcome page.
void level1();//level 1's code was written in this function.
void menu();//game menu code was written here. 
void level2();//level 2's code was written in this function.
void level3();//level 3's code was written in this function.
void level4();//level 4's code was written in this function.
void gameover();//gameover page

void credit(); //games developers names and id have been shown
void instruction();//describe how to play game
void levels();//all levels page was here.
void win();//"you win" cover will be displayed

int x=90,y=100,a=100,b=130,da,db,p,q,score=0,timer=150,mp,mq;//variables' are here.

int xx=0,aa=620,dxx,daa;

int s=193,t=193,ds,dt,m=532,n=532,dm,dn;
char scoreStr[10];//score string array.
char timeStr[10];//time string array
void scoreUpdate();//convert integer score to string type score
void timeupdate();//convert integer time to string type time

/* 
	function iDraw() is called again and again by the system.
	
*/
void iDraw()
{
	
	iClear();
	if(page==1)welcome();
	else if(page==2)menu();
	else if(page==3)level1();
	else if(page==4)level2();
	else if(page==5)level3();
	else if(page==6)level4();
	else if(page==7)levels();
	else if(page==8)instruction();
	else if(page==9)credit();
	else if(page==10)gameover();
	else if(page==11)win();
}
void move()
{
	a=a+da;
	if(a>=200||a<=100)
	{da=-da;}

}
void move1()
{
	b=b+db;
	if(b>=200||b<=110)
	{db=-db;}
}


void move3()
{
	xx=xx+dxx;
	if(xx>=830||xx<=-200)
	{dxx=-dxx;}
}
void move4()
{
	aa=aa+daa;
	if(aa>=620||aa<=-200)
	{daa=-daa;}
}

void move5()
{
	s=s+ds;
	if(s>=313||s<=193)
	{ds=-ds;}
}

void move6()
{
	t=t+dt;
	if(t>=313||t<=193)
	{dt=-dt;}
}

void move7()
{
m=m+dm;
	if(m>=540||m<=315)
	{dm=-dm;}
}

void move8()
{
n=n+dn;
	if(n>=540||n<=315)
	{dn=-dn;}
}


/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/* 
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mp, int mq)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
		p=mp;
		q=mq;
	
			
			    if(page==1)
				{
					if(p>=278&&p<=532&&q>=55&&q<=112)
						page=2;
					
				}


				else if(page==2)
				{
					if(p>=330&&p<=488&&q>=263&&q<=300)
					{
						page=3;
						score=0;
					timer=150;
					}
					else if(p>=710&&p<=788&&q>=10&&q<=50)
						exit(0);

					else if(p>=360&&p<=450&&q>=198&&q<=234)
						page=7;

					else if(p>=328&&p<=486&&q>=130&&q<=165)
						page=8;
					
					else if(p>=358&&p<=450&&q>=67&&q<=98)
					page=9;

				}


				else if(page==3)
					{
					
				if((p>=110&&p<190)&&(q>=200&&q<=a+70))
				{
				printf("score:%d\a",score);
				score=score+5;
                
				//for getting in next level
				if(score>199)
				{
					page=4;
					score=0;
					timer=180;
				}
				

				}
				else if((p>=510&&p<=590)&&(q>=200&&q<=b+70))
				{
					printf("score:%d\a",score);
					score=score+10;

                //for getting in next level
			     	if(score>199)
					{
						page=4;
						score=0;
						timer=180;
					}
					

				}
				else if(mp>=25&&mp<=95&&mq>=25&&mq<=65)
				{
					page=2;
					score=0;
				
				}
				
				}


				else if(page==4)
				{
					
				if((p>=xx+50&&p<=xx+130)&&(q>=130&&q<=200))
				{
				printf("score:%d\a",score);
				score=score+5;

					if(score>199)
					{
						page=5;
						score=0;
						timer=200;
					}

				}
				else if((p>=aa+50&&p<=aa+130)&&(q>=330&&q<=400))
				{
				printf("score:%d\a",score);
				score=score+5;

					if(score>199)
					{
						page=5;
						score=0;
						timer=200;
					}
                
				}
				else if(mp>=25&&mp<=95&&mq>=0&&mq<=40)
				{
					page=3;
					score=0;
					timer=150;
				}

				}

				else if(page==5)
				{
					if((p>=s&&p<=285)&&(q>=290&&q<=360))
				{
				printf("score:%d\a",score);
				score=score-5;
				

					

				}
				

					else if((p>=t&&p<=285)&&(q>=120&&q<=190))
				{
				printf("score:%d\a",score);
				score=score+5;

					if(score>149)
					{
						page=6;
						score=0;
						timer=200;
						
					}

				}

					else if((p>=532&&p<=m+80)&&(q>=290&&q<=360))
				{
				printf("score:%d\a",score);
				score=score+5;

					if(score>149)
					{
						page=6;
						score=0;
						timer=200;
						
					}

				}

						else if((p>=532&&p<=n+80)&&(q>=120&&q<=190))
				{
				printf("score:%d\a",score);
				score=score-5;

				

				}

						else if((p>=25&&p<=95)&&(q>=0&&q<=40))
						{
						page=4;
						score=0;
						timer=180;
						}

				}


				else if(page==6)
				{
					if((timer>190&&timer<200)||(timer>150&&timer<160)||(timer>110&&timer<120)||(timer>70&&timer<80)||(timer>30&&timer<40))
					{
						if(p>=100&&p<180&&q>=100&&q<=170)
						{
							printf("score:%d\a",score);
				            score=score+5;


								if(score>120)
				
								
								{
					     	     page=11;
					        	 
								}


						}
					}

					else if((timer>180&&timer<190)||(timer>140&&timer<150)||(timer>100&&timer<110)||(timer>60&&timer<70)||(timer>20&&timer<30))

					{

						if(p>=500&&p<580&&q>=100&&q<=170)
						{
							printf("score:%d\a",score);
				            score=score+5;

							if(score>120)
				
								
								{
					     	     page=11;
					        	 
								}
						}
					}

					else if((timer>170&&timer<180)||(timer>130&&timer<140)||(timer>90&&timer<100)||(timer>50&&timer<60)||(timer>10&&timer<20))

					{

						if(p>=100&&p<180&&q>=400&&q<=470)
						{
							printf("score:%d\a",score);
				            score=score+5;

							if(score>120)
				
								
								{
					     	     page=11;
					        	 
								}
						}
					}


					else if((timer>160&&timer<170)||(timer>120&&timer<130)||(timer>80&&timer<90)||(timer>40&&timer<50)||(timer>0&&timer<10))

					{

						if(p>=500&&p<580&&q>=400&&q<=470)
						{
							printf("score:%d\a",score);
				            score=score+5;

							if(score>120)
				
								
								{
					     	     page=11;
					        	 
								}
						}
					}



				}


				else if(page==7)
				{
					if(p>=710&&p<=788&&q>=10&&q<=50)
					 page=2;
					else if(p>=330&&p<=488&&q>=263&&q<=300)
					{
					 page=3;
					 score=0;
					 timer=150;
					}
					

				}


				else if(page==8)
				{
					if(p>=710&&p<=788&&q>=10&&q<=50)
					 page=2;

				}

					else if(page==9)
				{
                 if(p>=710&&p<=788&&q>=10&&q<=50)
					 page=2;

				}


				else if(page==10)
				{

                  if(p>=625&&p<=786&&q>=6&&q<=50)
				{
					page=1;
					
				}

				}

				else if(page==11)
				{
					 if(p>=625&&p<=786&&q>=6&&q<=50)
				{
					page=1;
					score=0;
					
				}

				}


			


		scoreUpdate();
		timeupdate();
									
								
								
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	if(key == 'q')
	{
		//do something with 'q'
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use 
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, 
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, 
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, 
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT 
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0)	;
	}
	//place your codes for other keys here
}



int main()
{
	//place your own initialization codes here. 
	iSetTimer(124,move);
	da=10;
	iSetTimer(124,move1);
	db=10;
	
	
   
	iSetTimer(124,move3);
	dxx=10;
	iSetTimer(124,move4);
	daa=-10;

	iSetTimer(124,move5);
	ds=10;

	iSetTimer(124,move6);
	dt=15;

	iSetTimer(124,move7);
	dm=-15;

    iSetTimer(124,move8);
	dn=-10;

	iSetTimer(124,timeupdate);
	iInitialize(800, 600, "demooo");
	
	return 0;
}


void scoreUpdate(){

	sprintf(scoreStr ,"%d", score);
}


void welcome()
{
iClear();
iShowBMP(0,0,"Title_Page.bmp");

}


void menu()
{
	//place your drawing codes here	
iClear();
iShowBMP(0,0,"Menu_Page.bmp");
}



void level1()
{
iClear();
	iShowBMP(110,a,"cow.bmp");
	iShowBMP(510,b,"head4.bmp");
	iSetColor(255,0,0);
	iFilledRectangle(x,y,120,100);
	iFilledRectangle(x+400,y,120,100);
	iSetColor(0,0,0);
	iFilledCircle(p,q,5);
	
	iSetColor(255,0,0);
	iText(650, 500, "SCORE :", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(750, 500, scoreStr,GLUT_BITMAP_TIMES_ROMAN_24 );
	iText(50, 500, "TIME : ",GLUT_BITMAP_TIMES_ROMAN_24 );
	iText(150, 500, timeStr,GLUT_BITMAP_TIMES_ROMAN_24 );
	iSetColor(0, 255, 0);
	iRectangle(25,25,70,40);
	iText(25, 25, "BACK", GLUT_BITMAP_TIMES_ROMAN_24);

}




void level2()
{
	iClear();
	iSetColor(255,255,0);
	iFilledCircle(xx+45,50,15);
	iFilledCircle(xx+125,50,15);
	iSetColor(176,23,31);
	iFilledRectangle(xx,50,180,80);
	iShowBMP(xx+50,130,"head4.bmp");
	iFilledRectangle(xx+30,130,10,90);
	iFilledRectangle(xx+30,210,120,10);
	iFilledRectangle(xx+140,130,10,90);

    
	iSetColor(255,255,0);
	iFilledCircle(aa+45,250,15);
	iFilledCircle(aa+125,250,15);
    iSetColor(176,23,31);
	iFilledRectangle(aa,250,180,80);
	iFilledRectangle(aa+30,250+80,10,90);
	iFilledRectangle(aa+30,250+80+80,120,10);
	iFilledRectangle(aa+140,250+80,10,90);
	iShowBMP(aa+50,330,"man.bmp");
	iSetColor(0,0,0);
	iFilledCircle(p,q,5);
	iSetColor(255,0,0);
	iText(650, 500, "SCORE :",GLUT_BITMAP_TIMES_ROMAN_24 );
	iText(750, 500, scoreStr,GLUT_BITMAP_TIMES_ROMAN_24 );
	iText(50, 500, "TIME : ",GLUT_BITMAP_TIMES_ROMAN_24 );
	iText(150, 500, timeStr,GLUT_BITMAP_TIMES_ROMAN_24 );
	iSetColor(0, 255, 0);
	iRectangle(25,0,70,40);
	iText(25, 0, "BACK", GLUT_BITMAP_TIMES_ROMAN_24);

}

void level3()
{
	iClear();
	iShowBMP(0,0,"Game_Page_Level_3.bmp");
	
	
	iSetColor(109,110,113);

    iShowBMP(s,292,"head3.bmp");
	
    iShowBMP(t,122,"cow.bmp");
	iShowBMP(m,292,"head4.bmp");
	iShowBMP(n,122,"boy.bmp");
	iFilledRectangle(285,292,247,72);
	iFilledRectangle(285,122,247,72);
	iSetColor(255,0,0);
	iText(650, 575, "SCORE :",GLUT_BITMAP_TIMES_ROMAN_24 );
	iText(750, 575, scoreStr ,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(50, 575, "TIME : " ,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(150, 575, timeStr,GLUT_BITMAP_TIMES_ROMAN_24 );
	iSetColor(255,0,0);
	iRectangle(25,0,70,40);
	iSetColor(255,0,0);
	iText(25, 0, "BACK", GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(0,0,0);
	iFilledCircle(p,q,5);
}


void level4()
{
	iClear();
	iSetColor(255,0,0);
	iText(650, 500, "SCORE :",GLUT_BITMAP_TIMES_ROMAN_24 );
	iText(750, 500, scoreStr,GLUT_BITMAP_TIMES_ROMAN_24 );
	
	iText(50, 500, "TIME :",GLUT_BITMAP_TIMES_ROMAN_24 );
	iText(150, 500, timeStr,GLUT_BITMAP_TIMES_ROMAN_24 );
	if((timer>190&&timer<200)||(timer>150&&timer<160)||(timer>110&&timer<120)||(timer>70&&timer<80)||(timer>30&&timer<40))
	iShowBMP(100,100,"boy.bmp");
	if((timer>180&&timer<190)||(timer>140&&timer<150)||(timer>100&&timer<110)||(timer>60&&timer<70)||(timer>20&&timer<30))
	iShowBMP(500,100,"man.bmp");
	if((timer>170&&timer<180)||(timer>130&&timer<140)||(timer>90&&timer<100)||(timer>50&&timer<60)||(timer>10&&timer<20))
	iShowBMP(100,400,"man.bmp");
	if((timer>160&&timer<170)||(timer>120&&timer<130)||(timer>80&&timer<90)||(timer>40&&timer<50)||(timer>0&&timer<10))
	iShowBMP(500,400,"man.bmp");
	iSetColor(0,0,0);
	iFilledCircle(p,q,5);

}


void timeupdate()
{
    sprintf(timeStr ,"%d", timer);
	if((page==3||page==4||page==5||page==6)&&timer==0)
		page=10;
	timer=timer--;
}

void gameover()
{
  iShowBMP(0,0,"Game_Over_Page.bmp");
  
}

void credit()
{
	//place your drawing codes here	
iClear();
iShowBMP(0,0,"Credit_Page.bmp");
}


void instruction()
{
	//place your drawing codes here	
iClear();
iShowBMP(0,0,"Instruction_Page.bmp");
}

void levels()
{
	//place your drawing codes here	
iClear();
iShowBMP(0,0,"Levels_Page.bmp");
}

void win()
{
	//place your drawing codes here	
iClear();
iShowBMP(0,0,"You_Win_Page.bmp");
}