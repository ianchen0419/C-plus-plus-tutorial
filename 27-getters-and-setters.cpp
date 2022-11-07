#include <iostream>

using namespace std;

class Movie {
private:
    string rating;
    
public:
    string title;
    string director;
    
    Movie(string aTitle, string aDirector, string aRating) {
        title = aTitle;
        director = aDirector;
//        rating = aRating;
        setRating(aRating);
    }
    
    // movie ratings: G, PG, PG-13, R, NR
    
    void setRating(string aRating) {
        if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR") {
            rating = aRating;
        } else {
            rating = "NR"; // invalid rating
        }
    }
    
    string getRating() {
        return rating;
    }
    
    
};

int main() {
    
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    
//    avengers.rating = "Dog" // not allowed
    avengers.setRating("Dog");
    
//    cout << avengers.rating << endl; // can't access
    cout << avengers.getRating() << endl; // "NR"
    
    return 0;
}
