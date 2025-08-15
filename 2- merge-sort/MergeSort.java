public class MergeSort {
  public MergeSort() {}

  public void mergeSort(int[] array) {
    if(array.length == 1) return;
    
    int size = array.length / 2;
    int[] leftArray = new int[size];
    int[] rightArray = new int[array.length - size];

    for(int i = 0; i < size; i++)
        leftArray[i] = array[i];

    for(int i = 0; i < rightArray.length; i++)
        rightArray[i] = array[size + i];

    mergeSort(leftArray);
    mergeSort(rightArray);
    merge(leftArray, rightArray, array);

  }

  public void merge(int[] leftArray, int[] rightArray, int[] array) {
      int i = 0,
          j = 0,
          k = 0;

      while(j < leftArray.length && k < rightArray.length) {
        if(leftArray[j] < rightArray[k]) {
          array[i] = leftArray[j];
          j++;
        } else {
          array[i] = rightArray[k];
          k++;
        }
        i++;
      }

      while(j < leftArray.length) {
        array[i] = leftArray[j];
        j++;
        i++;
      }

      while(k < rightArray.length) {
        array[i] = rightArray[k];
        k++;
        i++;
      }
  }
}

