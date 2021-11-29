#include <iostream>
using namespace std;

int main() {
char choice;
cout<< "welcome to the jungle" << endl;
cout << " Many moons ago there was a professor named Ravi who lived alone in the jungle. Ravi was getting lonely so he set along searching for a antidote to let animals talk. Little did he know his plan was gonna go south. Trying to find the antidote he awoke an ancient curse in the Jungle. That awoke freegard the serpent king and many other creatures. Will Ravi defeat the serpent king once and for all or will he die and never find the antidote? The choice is yours?"<<endl;
cout << " choose a level" <<endl;
  cout << "level 1 - Jungle Cruise!" <<endl;
  cout << "level 2 - ~Serpent King~" <<endl;
  cout << "level 3 - *Killer Cave*" <<endl;
  cout << "level 4 - ^The Big Drop^"<< endl;
  cout << "level 5 - Paradise:)" << endl;
  cin >> choice;
 while (true){
  if (choice == '1'){
    cout << "our fisrt adventure begins in jungle cruise."<< endl;
  } else if (choice == '2'){
    cout << " our first adventure begins in serpent kingdom.\2"<< endl;
  }else if (choice == '3'){
    cout << " our first adventure begins in killer cave.\3"<< endl;
  }else if (choice == '4'){
    cout<< "our first adventure begings in the big drop.\4"<< endl;
  } else if (choice=='5'){
    cout << " our first adventure begins in paradise.\5"<< endl;
  } else if ( choice == 1) {
    cout << "Pick A or B, please." << endl;
  } 
  cout << "Ready to start?" <<endl;
  cout << "A - Yes!" <<endl;
  cout << "B - NO!" <<endl;
  cin >> choice;
  if (choice == 'A'){ 
    cout << " Good luck!" <<endl;
  } else if (choice == 'B'){
    cout << " are you scared of the unknown?"<<endl;
  } else {
    cout << "Pick A or B, please." <<endl;
  } 
  cout << "You go to help doctor fregard so you set a sail when you go off you see something in the water do you venture off and see what it is?" <<endl;
  cout << "A - Yes!" <<endl;
  cout << "B - NO!" <<endl;
  cin >> choice;
  if (choice == 'A'){ 
    cout << "\n";
  } else if (choice == 'B'){
    cout << "Too bad it came to see you instead!!\n";
    cout << "A-Noooo Run Away?\n";
    cout << "B-Noooo Stay and Fight\n";
    cin >> choice;
    }if (choice == 'A'){
      cout << "\n";
    } else if (choice == 'B') {
      cout << "Oh Okay!\n";
    } else {
    cout << "Pick A or B, Quick!";
  }
   cout << "You dive in the water! You see killer crocs what is the first thing you do!" <<endl;
  cout << "A - Let them eat you!" <<endl;
  cout << "B - Bite the Croc back!" <<endl;
  cin >> choice; 
  if (choice == 'A'){ 
    cout << " You died a really ugly death.";
  } else if (choice == 'B'){
    cout << " you bit the croc wich got the rest of them scared so they clear the path for you and go through.\n" <<endl;
  } 
  
   cout << "You make it back on the boat and you finally arrive at the Serpent kingdom. Do you get off?" <<endl;
  cout << "A - Yes ill fight anything!" <<endl;
  cout << "B - No im scaredddd" <<endl;
  cin >> choice;
  if (choice == 'A'){ 
    cout << "Great you get off the ship and see...!\n";
  } else if (choice == 'B'){
    cout << "Scaredy cat too bad you hit land too hard and flew off onto land!\n";
  }
}





















}
