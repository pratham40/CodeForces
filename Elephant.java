package PCPH;

import java.util.Scanner;

public class Elephant {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n= sc.nextInt();
        int var=(n%5==0)?n/5:n/5+1;
        System.out.println(var);
    }
}
