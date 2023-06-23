/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

/* 1. variable.substr(from_index, to_index), 
   2. operation for the number inside the string ?
      string -> integer -> string.  (stoi command)
   3. variable replace(from_index, to_index, "string_wanted"    
  */

string timeConversion(string s) {
  
if(s[8] == 'P' && s.substr(0,2) != "12") {
        int hours = stoi(s.substr(0, 2)); // convert the first two characters to int
        hours = hours + 12; // add 12 to hours
        s.replace(0, 2, to_string(hours)); // replace the first two characters with hours
    } 
else if(s[8] == 'A' && s.substr(0,2) == "12") {
        s.replace(0, 2, "00"); // replace "12" with "00"
    }

return s.substr(0, s.length() - 2);


}
