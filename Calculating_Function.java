package PCPH;
import java.util.Scanner;

public class Calculating_Function {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        long n= sc.nextLong();
        long ans=(n%2==0)?n/2:-n/2-1;
        System.out.println(ans);
    }
}
