#include <iostream>
#include <string>
using namespace std;

class Person
{	
     public:
        string job;
        int umur ;

        Person(): job("GAMERS"), umur(19) { }
        void display()
        {
        	cout << "==========================================="<<endl;
             cout << "Profesi saya adalah: " << job << endl;
             cout << "==========================================="<<endl;
             cout << "Umur saya adalah: " << umur << endl;
             walk();
             talk();
        }
        void walk() { cout << "Saya Bisa Berjalan." << endl; }
        void talk() { cout << "Saya Bisa Berbicara" << endl; }
};

class GameTeacher : public Person
{
    public:
       void teachMaths() { cout << "Saya Bisa Mengajari Cara Bermain Game." << endl; }
};

class Footballer : public Person
{
    public:
       void playFootball() { cout << "Saya Sangat Jago Bermain Bola" << endl; }
};

int main()
{
	
     GameTeacher teacher;
     teacher.job = "Profesional Game";
     teacher.umur = 25;
     teacher.display();
     teacher.teachMaths();

     Footballer footballer;
     footballer.job = "Pemain Bola";
     footballer.umur = 17;
     footballer.display();
     footballer.playFootball();

     return 0;
}
