/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

/* 1. Transmformation string to lower case.
   2. std::isalpha, check first if it is alphabet or not.
   3. loop with character in string s 
   4. c - 'a' calculates the relative position of the character in the alphabet.
      For example, if c is the character 'd', then c - 'a' would be 3 because 'd' is the 4th letter in the alphabet (indexing from 0).
      4.1.  a -> treated 1, we use it because of the 0 base string.
   5. Then, check if every frequency array is not 0.
   6. Return the result.

*/

string pangrams(string s) {
// Convert the string to lowercase
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);

    // Create a frequency array to track the occurrence of each character
    int frequency[26] = {0};

    // Iterate over each character in the string
    for (char c : s) {
        if (std::isalpha(c)) {
            // Increment the frequency for the corresponding character
            frequency[c - 'a']++;
        }
    }

    // Check if all alphabets are present
    for (int i = 0; i < 26; i++) {
        if (frequency[i] == 0) {
            // If any alphabet is missing, return "not pangram"
            return "not pangram";
        }
    }

    // All alphabets are present, return "pangram"
    return "pangram";
}
