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
                    
char Map2[30][30] = {"############################",
                    "#O           #############  #",
                    "############               ##",
                    "########################## ##",
                    "#######  ################# ##",
                    "######    ####             ##",
                    "############## ##############",
                    "###                      ####",
                    "### #########################",
                    "##   ########         #######",
                    "##  ######### ###############",
                    "##             ######      ##",
                    "##### ################    ###",
                    "##### #################  ####",
                    "##### #######################",
                    "#####            ############",
                    "################ ############",
                    "################           H#",
                    "#############################"};
                    

                    
int Gamespeed = 100;
int Level = 0;
bool stopgame = false;

void gotoxy(int kolom, int baris){
	COORD posisi = {kolom,baris};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),posisi);
}
 
int main () 
{
     
    while (stopgame == false && Level==0) //looping
    {
          system("cls");
          for (int y= 0;y<20;y++) //looping pagar
          {
              cout << Map[y] << endl;
          }
          for (int y= 0;y<20;y++) {
              for (int x = 0; x<20; x++) 
              {
            switch (Map[y][x]) { 
                case '#':
                    {
                    Map[y][x] = 219; //karakter kode ascii Û
                    } break;
                case 'H':
                    {
                           
          if (GetAsyncKeyState(VK_UP) !=0)
              {
              int y2 = (y-1); 
            
            switch(Map[y2][x]) { //posisi setelah pindah ke spasi 
                case ' ' : 
                {
                        Map[y][x] = ' '; //menghapus karakter H jika stelah dijalankan
                        y-=1;
                        Map[y2][x]='H'; 
                        } break;
                case 'O' : //jika posisi setelah H O maka lanjut level 1
                {
                        Level = 1;
                        } break;
                case 'Û': //jika setelah H karakter Û maka game over
               		 {
                	  Level=10;
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
                case 'Û':
               		 {
                	  Level=10;
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
                case 'Û':
               		 {
                	  Level=10;
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
                case 'Û':
               		 {
                	  Level=10;
                   	 } break;
                        }
              }
                           
              }break;
                  }
              }
          }
          Sleep(Gamespeed); //untuk kasih delay
    }
   
while (stopgame == false && Level==1) //lanjut level 2
    {
          system("cls");
          for (int y= 0;y<30;y++)
          {
              cout << Map2[y] << endl;
          }
          for (int y= 0;y<30;y++) {
              for (int x = 0; x<30; x++) 
              {
            switch (Map2[y][x]) { 
                case '#':
                    {
                    Map2[y][x] = 219;
                    } break;
                case 'H':
                    {
                           
          if (GetAsyncKeyState(VK_UP) !=0)
              {
              int y2 = (y-1);
            
            switch(Map2[y2][x]) {
                case ' ' :
                {
                        Map2[y][x] = ' ';
                        y-=1;
                        Map2[y2][x]='H';
                        } break;
                case 'O' :
                {
                        Level = 1;
                        } break;
                case 'Û':
               		 {
                	  Level=10;
                   	 } break;
                        }
          }
          if (GetAsyncKeyState(VK_DOWN) !=0)
              {
              int y2 = (y+1);
              
            switch(Map2[y2][x]) {
                case ' ' :
                {
                        Map2[y][x] = ' ';
                        y+=1;
                        Map2[y2][x]='H';
                        } break; 
                case 'O' :
                {
                        Level = 1;
                        } break;
                case 'Û':
               		 {
                	  Level=10;
                   	 } break;
                        }
          }
          if (GetAsyncKeyState(VK_RIGHT) !=0)
              {
              int x2 = (x+1);
              
            switch(Map2[y][x2]) {
                case ' ' :
                {
                        Map2[y][x] = ' ';
                        x+=1;
                        Map2[y][x2]='H';
                        } break; 
                case 'O' :
                {
                        Level = 1;
                        } break;
                case 'Û':
               		 {
                	  Level=10;
                   	 } break;
                        }
          }
          if (GetAsyncKeyState(VK_LEFT) !=0)
                {
                int x2 = (x-1);
                                  
		    switch(Map2[y][x2]) {
                case ' ' :
                {
                        Map2[y][x] = ' ';
                        x-=1;
                        Map2[y][x2]='H';
                        } break; 
                case 'O' :
                {
                        Level = 2;
                        } break;
                case 'Û':
               		 {
                	  Level=10;
                   	 } break;
                        }
              }
                           
              }break;
                  }
              }
          }
          Sleep(Gamespeed); 
    }
      
      system("cls");
    while  (stopgame == false && Level==2 || Level==10)
    {
    	if(Level==10){
    		cout<<"oooooooo     oo     ooo  ooo  oooooooo       oooooooo  oo    oo  oooooooo  oooooooo\n";
    		cout<<"oo          o  o    oo oo oo  oo             oo    oo  oo    oo  oo        oo    oo\n ";   
    		cout<<"oo  oooo   oo  oo   oo    oo  oooooo         oo    oo  oo    oo  oooooo    oooooooo\n";
    		cout<<"oo    oo  oooooooo  oo    oo  oo             oo    oo   oo  oo   oo        oo  oo";
    		cout<<"oooooooo  oo    oo  oo    oo  oooooooo       oooooooo    oooo    oooooooo  oo   ooo";
    		
		}else if(Level==3){
      system ("cls");
      cout << "oooooooo  oooo  ooo    oo  oooo  oooooooo  oo    oo" << endl;
      cout << "oo  		 oooo  oo o   oo  oooo  oo        oo    oo" << endl;
      cout << "oooooooo  oooo  oo  o  oo  oooo  oooooooo  oooooooo" << endl;
      cout << "oo 		 oooo  oo   o oo  oooo        oo  oo    oo" << endl;
      cout << "oo        oooo  oo    ooo  oooo  oooooooo  oo    oo" << endl;
		}
		
	for (int i=0; i<100; i++){
		gotoxy(i,10);
		cout<<"SELAMAT GAME ANDA TELAH BERAKHIR"; 
		Sleep(100);                               
		gotoxy(i,10);                             
		cout<<"                                ";   
		if(i==99){                                
			i=0;
		}
	}	
		
      system("pause");  
      return EXIT_SUCCESS;        
    }
    exit (1);
    getch ();
}
