import java.util.ArrayList;
import java.util.Random;
public class Lab1_zad4_Java {
    public static class Parrot { //klasa parrot
        private
            String fraza; //deklaracja zmiennych
            private ArrayList<String> frazy = new ArrayList<>();
            Random rand = new Random();
        public
            Parrot(String p){//dodanie frazy podanej podczas tworzenia insatncji
                fraza=p;
                frazy.add(p);
            }
            void say(){ //wyświetlenie frazy podanej przy tworzeniu insatncji lub zmienionej metodą change
                System.out.println(fraza);
            }
            void change(String s){ //zmienia fraze podaną przy tworzeniu insancji
                fraza=s;
            }
            void multiSay(int x){ //wielokrotnie (x razy) wyświetla frazę podaną przy tworzeniu insatncji lub zmienionej metodą change
                for(int i=0;i<x;i++) say();
            }
            void addPhrase(String s){ //dodawanie fraz do listy
                frazy.add(s);
            }
            void say2(){ //wyświetlenie losowej frazy z listy
                System.out.println(frazy.get(rand.nextInt(frazy.size())));
            }
    }
    public static void main(String[] args) {
        Parrot parrot = new Parrot("hello"); //tworzenie insatcji
        parrot.say(); //wywołanie metod
        parrot.change("bye");
        parrot.say();
        parrot.multiSay(5);
        parrot.addPhrase("won");
        parrot.addPhrase("bye");
        parrot.say2();
    }
}