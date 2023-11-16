package PCPH;
import java.util.Arrays;
import java.util.OptionalInt;
import java.util.Scanner;

public class Restoring_Three_Numbers {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        int[] arr=new int[4];
        for (int i = 0; i <4 ; i++) {
            arr[i]= sc.nextInt();
        }
        OptionalInt a= Arrays.stream(arr).max();
        for (int i = 0; i < 4; i++) {
            if (a.getAsInt()-arr[i]!=0){
                System.out.print(a.getAsInt()-arr[i]+" ");
            }
        }
    }
}
