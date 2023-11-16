package PCPH;

import java.util.Arrays;

public class MiniSortingRequired {
    public static void main(String[] args) {
        int[] arr = {5,3,4,1,2};
        int[] arrSorted = new int[arr.length];
        for(int x = 0 ; x < arr.length; x++){
            arrSorted[x] = arr[x];
        }
        Arrays.sort(arrSorted);   // 2,3,4,7,7,8,9
        int count = 0;
        for (int y = 0; y < arr.length; y++) {
            if (arr[y] != arrSorted[y]) {
                count++;
            }
        }
        System.out.println(count);
    }
}
