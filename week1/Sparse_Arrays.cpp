/*
 * Complete the 'matchingStrings' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. STRING_ARRAY strings
 *  2. STRING_ARRAY queries
 */

/*  Review : for(auto& str : string)

     std::vector<int> numbers = {1, 2, 3, 4, 5};

    for(auto& num : numbers) {
        num *= 2;  // multiply each number by 2
    }

    for(const auto& num : numbers) {
        std::cout << num << ' ';  // print the updated numbers
    }

    1. auto& : reference, auto type
    2. num : just the variable which is declared like this in the loop, because of auto

    it prints {2,4,6,8,10}

*/


/*
unordered_map : 
*/
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    unordered_map<string, int> freq;
    for(auto& str : strings) {
        freq[str]++;
    }
    vector<int> result;
    for(auto& query : queries) {
        result.push_back(freq[query]);
    }
    return result;
}
