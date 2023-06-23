/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

/* 1. It only counts how many rounds.
   2. Comparison can be done after a bit of math.*/


vector<int> gradingStudents(vector<int> grades) {
    for(int i = 0; i < grades.size(); i++) {
      
        // Check if grade is less than 38
        // If grade is less than 38, it's failing, don't round it      
        if(grades[i] < 38) continue; 

        // Find next multiple of 5
        int nextMultiple = grades[i];
        while(nextMultiple % 5 != 0) nextMultiple++;

        // If the difference between the grade and next multiple of 5 is less than 3, round it off
        if(nextMultiple - grades[i] < 3) 
        {grades[i] = nextMultiple;}
    }
    return grades;
}
