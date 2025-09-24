#include<iostream>

using namespace std;

int main(){
    string s = "Hii my name is Aman"; //advNC VERSION OF CHARACTER ARRAYS AS STRINGS
    char str[20] = {'a','m','a','n'}; // character array

    s.find("ab"); //function to find a substring in a string;
    s.erase(1,2); //erases a part of string within the strt and end values given 
}