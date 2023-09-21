#include <iostream>
#include <string>
using namespsace std;

// p.246 4
class Movie {
private:
  string title;
  string director;
  double rating;

public:
  Movie();
  Movie(string t, string d, double r);
  string getTitle();
  string getDirector();
  double getRating();
};

Movie::Movie() {
  title = "?";
  director = "?";
  rating = 0;
}

Movie::Movie(string t, string d, double r) {
  title = t;
  director = d;
  rating = r;
}
string Movie::getTitle() { return title; }
string Movie::getDirector() { return director; }
double Movie::getRating() { return rating; }

int main() {
  Movie MOVIE1("타이타닉", "제임스 카메론", 9.5);
  Movie MOVIE2("지오스톰", "딘 데블린", 8.34);

  cout << "영화 #1" << endl;
  cout << "영화제목 : " << MOVIE1.getTitle() << endl;
  cout << "영화감독 : " << MOVIE1.getDirector() << endl;
  cout << "영화평점 : " << MOVIE1.getRating() << endl << endl;
  cout << "영화 #2" << endl;
  cout << "영화제목 : " << MOVIE2.getTitle() << endl;
  cout << "영화감독 : " << MOVIE2.getDirector() << endl;
  cout << "영화평점 : " << MOVIE2.getRating() << endl;

  return 0;
}