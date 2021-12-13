#include <iostream>
using namespace std;

int main() {
char choice;
char select;
char serpent;
char killer;
char drop;
char paradise;
cout<< "welcome to the jungle" <<endl;
cout << "Directions- Select A or B needs to be capitilized please!"<<endl;
cout << "Try not to die goodluck champ!" <<endl;
cout << " Many moons ago there was a professor named Ravi who lived alone in the jungle. Ravi was getting lonely so he set along searching for a antidote to let animals talk. Little did he know his plan was gonna go south. Trying to find the antidote he awoke an ancient curse in the Jungle. That awoke freegard the serpent king and many other creatures. Will Ravi defeat the serpent king once and for all or will he die and never find the antidote? The choice is yours?"<<endl;
cout << " choose a level" <<endl;
  cout << "level 1 - Jungle Cruise!" <<endl;
  cout << "level 2 - ~Serpent King~" <<endl;
  cout << "level 3 - *Killer Cave*" <<endl;
  cout << "level 4 - ^The Big Drop^"<< endl;
  cout << "level 5 - Paradise:)" << endl;
  cin >> select;
while (true){
 if (select == '1'){
   cout << "our fisrt adventure begins in jungle cruise."<< endl;
 } else if (select == '2'){
   cout << " our first adventure begins in serpent kingdom.\2"<< endl;
 }else if (select == '3'){
   cout << " our first adventure begins in killer cave.\3"<< endl;
 }else if (select== '4'){
   cout<< "our first adventure begings in the big drop.\4"<< endl;
 } else if (select=='5'){
   cout << " our first adventure begins in paradise.\5"<< endl;
 } else if ( select == 1) {
 }
 cout << "Ready to start? \1" <<endl;
 cout << "A - Yes!" <<endl;
 cout << "B - NO!" <<endl;
 cin >> choice;
 if (choice == 'A'){
   cout << " Good luck!" <<endl;
    cout << "You go to help doctor ravi so you set a sail when you go off you see something in the water do you venture off and see what it is?\1" <<endl;
 } else if (choice == 'B'){
   cout << " are you scared of the unknown?"<<endl;
 } else {
   cout << "Pick A or B, please." <<endl;

 }
 cout << "A - Yes!" <<endl;
 cout << "B - NO!" <<endl;
 cin >> choice;
 if (choice == 'A'){
   cout << "\1";
 } else if (choice == 'B'){
   cout << "Too bad it came to see you instead!!\1";
   cout << "A-Noooo Run Away?\1";
   cout << "B-Noooo Stay and Fight\1";
   cin >> choice;
   }if (choice == 'A'){
     cout << "\1";
   } else if (choice == 'B') {
     cout << "Oh Okay!\1";
   } else {
   cout << "Pick A or B, Quick!";
 }
  cout << "You dive in the water! You see killer crocs what is the first thing you do!\1" <<endl;
 cout << "A - Let them eat you!\1" <<endl;
 cout << "B - Bite the Croc back!\1" <<endl;
 cin >> choice;
 if (choice == 'A'){
   cout << " You died a really ugly death.\1" << endl;
   exit(0);
   } else if (choice == 'B'){
   cout << " you bit the croc wich got the rest of them scared so they clear the path for you and go through.\1" <<endl;
 }
 
  cout << " welcome to level 2!!!!! \2" ;
   cout << "You make it back on the boat and you finally arrive at the Serpent kingdom. Do you get off?\2" <<endl;
 cout << "A - Yes ill fight anything!" <<endl;
 cout << "B - No im scaredddd" <<endl;
 cin >> serpent ;
 if (serpent == 'A'){
     cout << "You get off the boat and see Fregar your  arch nemesis He tries to give you a hug! Is it a trick or not?? \2" << endl;
   } else if (serpent== 'B') {
     cout << " To bad you get thrown off the boat and see your arch nemesis Fregar He tries to give you a hug! Is it a trick or not\2 "<<endl;
   }
     cout << "A - Hug Him Back!" <<endl;
      cout << "B - Punch Him!" <<endl; 
   cin >> serpent ;
   if (serpent== 'A'){
     cout << "You hug him and he puts poison in your mouth! You fool you got tricked! You died a poor fool:(\2" << endl; 
     exit (0);
   } else if ( serpent  =='B'){
     cout << "You punch fregar and he tries to bite you with poison you knew he had something up his sleeve!!\2"<<endl;
   }
 cout << " you and fregar start fighting it out when you spot a sword you qucikly grab what will you do with it?" << endl;
 cout << " A- cut fregards tongue of so he wont spit venom anymore " << endl;;
 cout << " B- stab fregard in the stomach and run away" << endl;
  cin >> serpent;
  if (serpent == 'A'){
    cout << " you cut fregards tongue off wich means he cant spit out anymore venom he falls and cries in pain so you run away so fast that you run into a cave! \2"<<endl;
  } else if (serpent == 'B'){
    cout << "You stab Fregar but then he grabs you by the tail and slams you against the wall and you get crushed by a rock and die.\2"<<endl;
     exit(0);
  }
{
  cout << "CONGRATS you made it to level 3!!!!\3" << endl;
{
 }
 cout << "You walk into a cave and see Mono the abomination of a monkey you made trying to figure the antidote! He tries to give you an empanda do you eat it?\4" <<endl;
 cout << "A - YES WE LOVE EMPANADS!" <<endl;
 cout << "B - NO I HATE THEM!" <<endl;
 cin >> killer;
 if (killer == 'A'){
   cout << " you eat the empanda You Imbecile it was poisned!\4";
   cout << "You died would you like to restart?"<<endl;
   exit(0);
 } else if (killer == 'B'){
   cout << "You punch Mono when he tries to give you the  poisend empanda  you knew he had something up his sleeve!!\4"<<endl;
   cout<< "You and Mono start fighting after your find out what he tried to do but then he pulls out empanda machine with very strong poisen on them if they touch you youll die what will you do?!\4"<<endl;}
   cout << "A- Noooo try to escape the cave"<<endl;
   cout << "B- Nooooo jump out of the cave" <<endl;
   cin >> killer;
   }if (killer == 'A'){
     cout << "Oh No you Try to get out of the cave but Mono grabs your ankles!!\4";
   } else if (killer== 'B') {
     cout << "You jumped and got out of the cave! But you look down to see that he still has his hand on your leg!\4";
   } else {
   cout << "Pick A or B, Quick!";
 }
  cout << "Mono has you in his grasp whats gonna happen!" <<endl;
}if (killer == 'A'){
 cout << "A -Kick Mono!" <<endl;
}else if (killer == 'B')
 cout << "B - Bite Mono!" <<endl;
 cin >> killer;
 if (killer == 'A'){
   cout << " Mono Throws you out of the cave because you kicked him!!\4";
 } else if (killer == 'B'){
   cout << " you bit Mono and he throws you out of the cave for taking a piece of his ear!\4" <<endl;
 }
  cout << "You made it to Level 4!!!!!!"<<endl;
  cout << "You Finally make it out of the cave and you look down to see you standing on a BIG DROP!\4"<<endl;
 cout << "A - Jump!" <<endl;
 cout << "B - Look to see how deep it is?"<<endl;
 cin >> choice;
 if (drop == 'A'){
     cout << "You Jumped into the endless amount of water that never seems to end you finally touch ground a die!";
   } else if (drop == 'B') {
     cout << " You look down but the breeze got you! You nitwit! You land in the ocean with no land in sight!";
   }
   cout << " you finally made it to PARADISE\5" <<endl;
 cout << "A - finallly!!!!!" <<endl;
 cout << "B - not this again" <<endl;
 cin >> paradise;
 if (paradise == 'A'){
   cout << "have fun!!!!" <<endl;
 } else if (paradise == 'B'){
   cout << " to bad loser your still going to play."<<endl;
 }
 cout << " after you float around the ocean for 3 days you spot land and start swimming towards it will this be an end for all? will this be paradise? will you find the antidote!\5" <<endl;
 cout << "A - Yes!" <<endl;
 cout << "B - NO!" <<endl;
 cin >> paradise;
 if (paradise == 'A'){
   cout << " i loev your confidence ";
 } else if (paradise == 'B'){
   cout << "hope you die :)";
  cout << " you finally get to land but you cant belive you eyes\5" <<endl;
  cout << " Guess what it is!!!!!"; 
  cout << " A- Is it the antidote?";
  cout << "B- Is it fregar?";
   cin >> paradise;
   }if (paradise == 'A'){
     cout << " You really think i would let you go so easily AHAHAHA";
   } else if (paradise == 'B') {
     cout << " You're not as dumb as i thought";
   } else {
 }
 cout << " How did fregar get here????"<< endl;
  cout << " Fregar spots you and starts walking towards  you he says that he just wants to talk\5 " <<endl;
 cout << "A - Talk with fregar" <<endl;
 cout << "B - Start attacking fregar" <<endl;
 cin >> paradise ;
 if (paradise == 'A'){
   cout << " You and fregar start talking. He apologizes for everything he did to you. He also admitted that he had the anidote this whole time but didnt want to give it to you.  Since another scientist killed his whole family looking for it. after you and fregard start fixing everyhting out he decides to give you the antidote but with one agreement. You have to find a way to bring his whole family back to life.\5 " << endl;
 } else if (paradise == 'B'){
   cout << " You and Fregar start fighting you kill him once and for all. After he dies the antidote rolls out of his pocket so you reach out and grab it with so much enthusiam. Little did you know Mono comes back and kills you for revenge and smashes the antidote.\5" <<endl;
    exit(0);
 }
 
 }

 
 
 
 
 
 




  


    
 
