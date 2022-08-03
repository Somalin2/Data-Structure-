#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char string[100];
    int i, word;
    int flag = 0;
    
    cout << "Please enter a word: ";
    cin >> string;
    word = strlen(string);
   
    for(i=0; i< word ;i++){
        if(string[i] != string[word-i-1]){
            flag = 1;
            break;
           }
        }
    
    if (flag) {
        cout <<"The "<< string << " is not a palindrome" << endl;
    }
    else {
        cout << "The "<< string << " is a palindrome" << endl;
    }
    
    
   cout <<"\nEnter another word, or 'x' to quit:"<< endl;
   cin >> string;
    return 0;
}
