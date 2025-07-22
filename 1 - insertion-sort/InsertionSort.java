/*
 #### Author: Arthur Pienegonda Terres Kohler ####

 -explanation in the C code...
 */

public class InsertionSort {
    public void InsertionSortMethod(int array[]) {
        int i, j;
        int key;

        for(i = 1; i < array.length; i++) {
            key = array[i];

            j = i - 1;

            while(j >= 0 && array[j] < key) {
                array[j + 1] = array[j];
                array[j] = key;
                j--;
            }
        }
    }

    public static void main(String args[]) {

    } 
}