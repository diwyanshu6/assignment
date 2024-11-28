package FreuencyAlphabet;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a String: ");
        String s=sc.next();
        System.out.print("Enter a Number: ");
        int n=sc.nextInt();
        FrequencyChar f=new FrequencyChar(s);
        Integer[] charArray=f.characterArray();
       for(int i=0;i<charArray.length;i++)
       {
           if(charArray[i]>n)
               System.out.println((char)(i + 'a')+ ": " + charArray[i]);
       }
    }
}
