/*
 * Complete the 'migratoryBirds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

/* max_element() */

int migratoryBirds(vector<int> arr) {
std::vector<int> frequency(6, 0);  // Assuming the bird species are represented by integers 1 through 5.

    for (int i = 0; i < arr.size(); i++) {
        frequency[arr[i]]++;
    }

    return std::max_element(frequency.begin() +1, frequency.end()) - frequency.begin();



}
