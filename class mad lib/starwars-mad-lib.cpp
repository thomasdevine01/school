#include <iostream>
#include <string>
using namespace std;

int main() {

  
  //welcome to star wars madlibs
  
  string pluralNoun1,
         pluralNoun2,
         funnyName,
         funnyAdjective,
         descriptiveAdjective,
         goofyAdjective,
         descriptiveAdjective2,
         noun;


  cout << "Welcome to Star Wars MadLIBS!" << endl;
  
  cout << "To begin, Provide a Plural Noun and press enter" << endl;
  cin >> pluralNoun1;

  cout << "Next, provide another Plural Noun" << endl;
  cin >> pluralNoun2;

  cout << "Provide a funny name" << endl;
  cin >> funnyName;

  cout << "Provide a descriptive adjective" << endl;
  cin >> descriptiveAdjective;

  cout << "Provide a goofy adjective" << endl;
  cin >> goofyAdjective;

  cout << "Provide another descriptive adjective" << endl;
  cin >> descriptiveAdjective2;

  cout << "Finally, provide a noun" << endl;
  cin >> noun;

  cout << "Star Wars is a story of good " << pluralNoun1 << " and evil " << pluralNoun2 << " in this story, the hero ";
  cout << funnyName << " fights with his band of rebels. The " << funnyAdjective << " Han Solo, The " << descriptiveAdjective;
  cout << endl << "Pricess Leah, and the " << goofyAdjective << " Chewbacca they fight against the " << descriptiveAdjective2;
  cout << " Darth Vader. In the end the heroes triumph using " << noun << endl; 
  
         
  

  
  /* star wars is a story of good //plural noun// and evil //plural noun// in this story, 
  the hero //funny name// fights with his band of rebels. The //funny adjective// Han Solo, The //descriptive adjective// Pricess Leah, and the //goofy adjective// chewbacca
  they fight against the //descriptive adjective// Darth Vader. In the end the heroes triumph using //noun// 
  */


  // 2. Prompt user for information and get their input:




  // 3. Display the story with the variables that stored
  //    the user's input in the "blanks":




  
  
  return 0;
}
