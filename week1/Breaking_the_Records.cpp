/*
 * Complete the 'breakingRecords' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY scores as parameter.
 */

/* 1. Declare the count  variable separately */

vector<int> breakingRecords(vector<int> scores) {
    
    
    int min_score = scores[0];
    int max_score = scores[0];
    int Min_count = 0;
    int Max_count = 0;

    for(int i=0; i<scores.size(); i++)
    { if(scores[i]> max_score)
        { max_score = scores[i];
          Max_count = Max_count +1;
        }
        
    if(scores[i]< min_score)
    {
        min_score = scores[i];
        Min_count = Min_count+1;
    }
        
    }
    vector<int>answer(2);
    answer[0] = Max_count;
    answer[1] = Min_count;
return(answer);
}
