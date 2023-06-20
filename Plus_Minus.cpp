/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(vector<int> arr) {
    int array_size = arr.size(); // Get size of array
    
    vector<int> answer_arr(3, 0); 
    
    for(int i = 0; i < array_size; i++)
    {
        if(arr[i] > 0)
        {
            answer_arr[0]++;
        }
        else if(arr[i] < 0)
        {
            answer_arr[1]++;
        }
        else
        {
            answer_arr[2]++;
        }
    }

    cout << fixed << setprecision(6); 
    cout << static_cast<float>(answer_arr[0]) / array_size << endl; 
    cout << static_cast<float>(answer_arr[1]) / array_size << endl; 
    cout << static_cast<float>(answer_arr[2]) / array_size << endl; 
}