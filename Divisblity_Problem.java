package PCPH;

import java.util.Scanner;

public class Divisblity_Problem {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t= sc.nextInt();
        while (t-->0){
            int a= sc.nextInt();
            int b= sc.nextInt();
            int moves=a%b==0?0:b-a%b;
            System.out.println(moves);
        }
    }
}
