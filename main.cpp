#include <iostream>
#include <string>
using namespace std;

/*
LEGAL WORDS:
1.ALL WORDS UPPERCASE LIKE THIS
2.all words lowercase like this
3.First Letter Of Word Captalized

input: a string of letters
output: true if it fits
        false if not
Tip/Hint:
wrapping logic with functions?
Bool functions will be easier? cause it returns true and false.
no need for stacks or queues.
*/

bool tru(string str){
  for(int i = 0; i<str.length()-1; i++){
    if(str[i]>='a'){
      if(str[i+1]<='Z'){
        return false;
      }
      continue;
    }
    if(str[i]<='Z'){
      if(str[i+1]<='Z' and str[i+2]>='a'){
        return false;
      }
      continue;
    }
    continue;
  }
  return true;
}

int main() {
  string str;
  cin>>str;
  if(tru(str)){
    cout<<"True";
  }
  else{
    cout<<"False";
  }
  return 0;
}