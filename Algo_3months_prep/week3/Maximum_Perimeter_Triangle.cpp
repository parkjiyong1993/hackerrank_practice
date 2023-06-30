/*
 * Complete the 'maximumPerimeterTriangle' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY sticks as parameter.
 */

vector<int> maximumPerimeterTriangle(vector<int> sticks) {

sort(sticks.begin(), sticks.end());

    for (int i = sticks.size() - 1; i >= 2; --i) {
        if (sticks[i] < sticks[i - 1] + sticks[i - 2]) {
            return vector<int> {sticks[i - 2], sticks[i - 1], sticks[i]};
        }
    }

    return vector<int> {-1};
}
