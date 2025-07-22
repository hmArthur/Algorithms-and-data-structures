/*
    #### AUTHOR: Arthur Pienegonda Terres Kohler ####

    ##### insertion sort algorithm #####
    -use cases:
        - sorting a small amount of numbers
    
    it kinda works like you normally would sort a deck of cards,
    in your right hand you keep the unsorted elements. In the left hand,
    wich is empty by now, you will be putting cards of the right hand 
    (from left to right) in the expected order, so if you find a smaller
    card than what you're holding: you put after that card, else
    you put before that card, but you dont stop right there, you check the other cards
    (previously ordered) to see if the current card is smaller.

    space time complexity: O(n²).

    #### some burocracy ####
    key: it represents the current element that its being looked at the original array,
    which has index I;

    loop invariant: its a condition that should be true in the beginning, during
    the script and in the end. Its used as "proof of truth and efficiency".
    
    considering the unsorted array as A[0 : n] 
    in this case we take the loop invariant as the sub domain A[0 : n-1], wich
    HAS to be in order to the algorithm work.
*/
void insertionSort(int* vec, int vecSize) {
    int i, j;
    int key;

    for(i = 1; i < vecSize; i++) {
        key = vec[i];

        j = i - 1;
        //sub-domain a[0, j]
        while(j >= 0 && vec[j] > key) {
            /*
                exchange elements if the element before the current  key
                is smaller, and goes to the beginning of the array to confirm
                that every element in the subdomain a[i, j] is in the expected order.
            */
            vec[j + 1] = vec[j];
            vec[j] = key;
            j--;
        }
    }
}
