package PCPH;

import java.util.Scanner;

public class Domino_piling {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        int var=(m*n%2==0)?(m*n)/2:(m*n-1)/2;
        System.out.println(var);
    }
}
