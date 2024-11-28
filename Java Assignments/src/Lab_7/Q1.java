//Create an application that calculate your daily driving cost , so that you can estimate how much
//money could be saved by car pooling which also has other advantages such as reducing carbon
//emission and traffic congestion . The application should input the following information and display
//the user's cost per day of driving to work.
//         total miles driven per day
// b)cost per gallon of gasoline
// c)average fees per day s
// d)tolls per day
// 7miles per gallon
package Lab_7;

import java.util.Scanner;

class Driver {
    private float distance_Driven;
    private float cost_Gasoline;
    private float avg_Fees;
    private int tolls_price;
    private int no_of_people;

    void get_input() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter no of Miles Driven: ");
        distance_Driven = sc.nextFloat();
        System.out.print("Enter cost per gallon of gasoline: ");
        cost_Gasoline = sc.nextFloat();
        System.out.print("Enter Average Cost Per Day: ");
        avg_Fees = sc.nextFloat();
        System.out.print("Enter Toll Required: ");
        tolls_price = sc.nextInt();
        System.out.print("Enter Number of people carpooling: ");
        no_of_people = sc.nextInt();
        sc.close();
    }

    float calculate() {
        float total_cost = ((distance_Driven) / 7.0f * cost_Gasoline) + avg_Fees + tolls_price;
        return total_cost - total_cost / no_of_people;
    }

}

public class Q1 {
    public static void main(String[] args) {
        Driver d = new Driver();
        d.get_input();
        System.out.println("Savings: " + d.calculate());
    }
}
