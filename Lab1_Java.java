public class Lab1_Java{
    public static class Car { //klasa Car
        String make;
        String model;
        int year;
        int currentYear=2024;;
        void displayInfo(){ //funkcja wyświetlająca  atrybuty
            System.out.println(make);
            System.out.println(model);
            System.out.println(year);
        }
        int getCarAge(){ //funkcja obliczająca wiek samochdu
            return currentYear-year;
        }
        boolean isSameCar(Car otherCar){ //funkcja porównująca samochody
            if(make==otherCar.make && model==otherCar.model && year==otherCar.year) return true;
            return false;
        }
    }
    public static void main(String[] args) {
        Car sam = new Car(); //tworzenie instancji
        sam.make="Reno"; //nadawanie atrybutów instancji
        sam.model="Megan";
        sam.year=2004;
        sam.displayInfo(); //wywolywanie funkcji
        System.out.println(sam.getCarAge());
        Car aut = new Car(); //tworzenie drugiej instancji
        aut.make="Skoda"; //nadawanie atrybutów drugiej instancji
        aut.model="Superb";
        aut.year=2018;
        aut.displayInfo();//wywolywanie funkcji
        System.out.println(aut.getCarAge());

        System.out.println(sam.isSameCar(aut)); //porównanie instancji
    }
}