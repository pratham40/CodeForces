package PCPH;

import java.util.Scanner;

public class Drinks {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        double sum=0;
        int count=0;
        while (t-->0){
            sum+=sc.nextInt();
            count++;
        }
        System.out.println(sum/count);
    }
}
