/*
 * Complete the 'countingSort' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */


/* The algorithm is always simpler than I thought 
   1. I don't need to make an array and compare it, 
   2. double loop is not wanted here.
   3. Index doesn't need to be called always when we use index */

vector<int> countingSort(vector<int> arr) {
    // Create a frequency array of size 100, values 0
    vector<int> freq(100, 0);

    // Increment the count at the index that matches each value in the array
    // array[0] -> value1 -> freq[value1] -> freq[value1]+1
    for(int i = 0; i < arr.size(); i++) {
        freq[arr[i]]++;
    }

    return freq;
}  
