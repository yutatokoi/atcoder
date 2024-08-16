#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  map<string, int> votes;
  set<string> people;
  
  for (int i = 0; i<N; i++) {
    string person;
    cin >> person;
    votes[person] += 1;
    people.insert(person);
  }
  
  int max_votes = 0;
  string winner;
  int size = people.size();
  while (size) {
    string person = *begin(people);
    if (votes[person] > max_votes) {
      max_votes = votes[person];
      winner = person;
    }
    
    people.erase(person);
    
    size--;
  }
  
  cout << winner << endl;
  
  return 0;
}