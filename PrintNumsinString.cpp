#include<iostream>
#include<sstream>
using namespace std;
void getNumberFromString(string s) {
   stringstream str_strm;
   str_strm << s; //convert the string s into stringstream
   string temp_str;
   int temp_int;
   while(!str_strm.eof()) {
      str_strm >> temp_str; //take words into temp_str one by one
      if(stringstream(temp_str) >> temp_int) { //try to convert string to int
         cout << temp_int << " ";
      }
      temp_str = ""; //clear temp string
   }
}
main() {
   string my_str = "var 1 b32af";
   getNumberFromString(my_str);
}