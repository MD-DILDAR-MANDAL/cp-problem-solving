#include <bits/stdc++.h>
#include<windows.h>
#include<time.h>
 using namespace std;
 
 void negativevalue(int &a,int &b){
     if(a<0)a=0;
     if(b<0)b=0;
 }
 int main(){
     int choice1;
     system("Color A5");
     cout << "------Welcome------" << '\n';
     cout << "1.Fight" << "\n";
     cout << "2.Exit" << "\n";
     cin >> choice1;
     if(choice1 == 1){
        system("cls");
        srand(time(0));
        system("Color E1");
        int playerhit,enemyhit,choice2,playerheal;
        int playerhp = 50;
        int enemyhp = 50;
        while(playerhp > 0 && enemyhp > 0){
            playerhit = (rand() % (10 - 7 + 1)) + 7;
            enemyhit = (rand() % (8 - 5 + 1)) + 5;
            playerheal = (rand()%(15-5+1))+5;
            system("cls");
            cout << "\n";
            cout << "Player Hp- " << playerhp << " ";
            cout << "Enemy Hp- " << enemyhp << "\n";
            cout << "\n";
            cout << "     1.Punch" << "\n";
            cout << "     2.Heal" << "\n";
            cout << "     3.Exit" << "\n";
            cin >> choice2;
            if(choice2 == 1){
                system("color E5");
                Sleep(800);
                system("color A5");
                Sleep(800);
                system("color E5");
                Sleep(800);
                system("color A5");
                Sleep(800);
                system("Color E5");
                cout << "Player deal " << playerhit << " damage" << "\n";
                Sleep(1000);
                cout << "Enemy deal " << enemyhit << " damage" << "\n";
                Sleep(1500);
                playerhp -= enemyhit;
                enemyhp -= playerhit;
            }
            else 
            if(choice2 == 2){
                if(playerhp == 50){
                system("color E5");
                Sleep(800);
                system("color A5");
                Sleep(800);
                system("color E5");
                Sleep(800);
                system("color A5");
                Sleep(800);
                system("Color E5");
                    cout << "You are already in full Health : ) " << "\n";
                    Sleep(1500);
                    cout << "Enemy deal " << enemyhit << " damage" << "\n";
                    Sleep(1500);
                    playerhp -= enemyhit;
                }
                else{
                system("color E5");
                Sleep(800);
                system("color A5");
                Sleep(800);
                system("color E5");
                Sleep(800);
                system("color A5");
                Sleep(800);
                system("Color E5");
                    playerhp = playerhp +(playerheal - enemyhit);
                    cout << "Player heal " << playerheal << " health" << "\n";
                    Sleep(1500);
                    cout << "Enemy deal " << enemyhit << " damage" << "\n";
                    Sleep(1500);
                    if(playerhp > 50){
                        playerhp = 50;
                    }
                 }
             }
             else if(choice2 == 3){
                char ans = 'y';
                cout << "Are you sure about that(y/n) : ) " << "\n";
                cin >> ans;
                if(ans == 'y' || ans == 'Y'){
                    break;
                }

             }
             else{
                cout << "Oops! Please choose only 1,2 and 3  : )" << "\n";
                system("pause>0");
             }
           }
            negativevalue(playerhp,enemyhp);
            if(playerhp && enemyhp <= 0){
              system("cls");
              cout << "Player Hp-" << playerhp << " " << "Enemey Hp-" << enemyhp << "\n";
              cout << "Player's win" << "\n";
              system("pause>0");
            }
            else{
              system("cls");
              cout << "Player Hp-" << playerhp << " " << "Enemey Hp-" << enemyhp << "\n";
              cout << "Enemy's win" << "\n";
              system("pause>0");
            }
     }
     else if(choice1 == 2){
        system("cls");
        cout << "Thanks for coming :)" << "\n";
        system("pause>0");
      }
      else{
        cout << "Oops! Please choose only 1 and 2 : ) " << "\n";
        system("pause>0");
      }
 }
