#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> 
#include <ctime>

using namespace std;

class Parrot { //klasa parrot
    private:
        string fraza; //deklaracja zmiennych
        vector<string> frazy;
    public:
        Parrot(string p) : fraza(p) { //dodanie frazy podanej podczas tworzenia insatncji
            frazy.push_back(fraza);
        }
        void say(){ //wyświetlenie frazy podanej przy tworzeniu insatncji lub zmienionej metodą change
            cout<<fraza<<endl;
        }
        void change(string s){ //zmienia fraze podaną przy tworzeniu insancji
            fraza=s;
        }
        void multiSay(int x){ //wielokrotnie (x razy) wyświetla frazę podaną przy tworzeniu insatncji lub zmienionej metodą change
            for(int i=0;i<x;i++) say();
        }
        void addPhrase(string s){ //dodawanie fraz do listy
            frazy.push_back(s);
        }
        void say2(){ //wyświetlenie losowej frazy z listy
            cout<<frazy[rand()%frazy.size()]<<endl;
        }
};
int main() {
    srand(time(NULL)); // prygotowanie generatora liczb pseudolosowych
    Parrot parrot("hello"); //tworzenie insatcji
    parrot.say();//wywołanie metod
    parrot.change("bye");
    parrot.say();
    parrot.multiSay(5);
    parrot.addPhrase("won");
    parrot.addPhrase("bye");
    parrot.say2();
    return 0;
}