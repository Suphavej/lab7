#include<iostream>
#include<string>
using namespace std;

int main(){
string name,movie,day,end;
int num;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout <<"?????: ";
    getline(cin,name);

    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";\
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name<<": ";
    cin >> num;

    cout << "Fahsai: I think you may be GEAR " << (num/10000000)-12 << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\nFahsai: What movie do you want to watch?\n";
    cin.ignore();
    cout << name<<": ";
    getline(cin,movie);

    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name<<": ";
    getline(cin,day);

    cout <<"Fahsai: "<<day <<"....that is OK!!! I'm looking forward to watching " << movie <<" with you.\n";
    cout << name<<": ";
    getline(cin,end);

    cout <<"Fahsai: 555+ see you "<<day<<". Bye Bye \\(^ ^)/";
    return 0;
}



//Dialog of the first example is given below.

/*

Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/
