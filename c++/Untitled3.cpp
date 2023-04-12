#include <iostream>
#include <windows.h>
#include <conio.h>
 
using namespace std;
 
char Map[20][20] = {"################",
                    "##########    O#",
                    "########## #####",
                    "########## #####",
                    "#########      #",
                    "#############  #",
                    "###########   ##",
                    "###         ####",
                    "### ############",
                    "##   ###########",
                    "##  ############",
                    "##           H##",
                    "################"};
int Gamespeed = 100;
int Level = 0;
bool stopgame = false;


 
int main () 
{
     
    while (stopgame == false && Level==0) 
    {
          system("cls");
          for (int y= 0;y<20;y++)
          {
              cout << Map[y] << endl;
          }
          for (int y= 0;y<20;y++) {
              for (int x = 0; x<20; x++) 
              {
            switch (Map[y][x]) { 
                case '#':
                    {
                    Map[y][x] = 219;
                    } break;
                case 'H':
                    {
                           
          if (GetAsyncKeyState(VK_UP) !=0)
              {
              int y2 = (y-1);
            
            switch(Map[y2][x]) {
                case ' ' :
                {
                        Map[y][x] = ' ';
                        y-=1;
                        Map[y2][x]='H';
                        } break;
                case 'O' :
                {
                        Level = 1;
                        } break;
                        }
          }
          if (GetAsyncKeyState(VK_DOWN) !=0)
              {
              int y2 = (y+1);
              
            switch(Map[y2][x]) {
                case ' ' :
                {
                        Map[y][x] = ' ';
                        y+=1;
                        Map[y2][x]='H';
                        } break; 
                case 'O' :
                {
                        Level = 1;
                        } break;
                        }
          }
          if (GetAsyncKeyState(VK_RIGHT) !=0)
              {
              int x2 = (x+1);
              
            switch(Map[y][x2]) {
                case ' ' :
                {
                        Map[y][x] = ' ';
                        x+=1;
                        Map[y][x2]='H';
                        } break; 
                case 'O' :
                {
                        Level = 1;
                        } break;
                        }
          }
          if (GetAsyncKeyState(VK_LEFT) !=0)
                {
                int x2 = (x-1);
                                  
		    switch(Map[y][x2]) {
                case ' ' :
                {
                        Map[y][x] = ' ';
                        x-=1;
                        Map[y][x2]='H';
                        } break; 
                case 'O' :
                {
                        Level = 1;
                        } break;
                case '#':
                    {
                    cout<<"ghjgj";
                    } break;
                        }
              }
                           
              }break;
                  }
              }
          }
          Sleep(Gamespeed); 
    }
    while  (stopgame == false && Level==1)
    {
      system ("cls");
      cout << "Level 2 Goes Here" << endl;
      system("pause");  
      return EXIT_SUCCESS;        
    }
    exit (1);
    getch ();
}
