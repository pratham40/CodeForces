package PCPH;

import java.util.Scanner;

public class Vasya_the_Hipster {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        int a= sc.nextInt();
        int b= sc.nextInt();
        System.out.println(Math.min(a,b)+" "+Math.abs(a-b)/2);
    }
}
