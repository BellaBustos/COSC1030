//
// Bella Bustos
// 4/14/25
// Pig Latin Programming Project
// COSC 1030
//
#include <iostream>
#include <sstream> // For std::istringstream
using namespace std;

// Function to convert a single word to Pig Latin
string convertToPigLatin(const string& word) {
    if (word.empty()) {
        return ""; // Return an empty string if the input word is empty
    }
    // Move the first letter to the end and append "ay"
    return word.substr(1) + word[0] + "ay";
}

// Function to convert an entire sentence to Pig Latin
string convertSentenceToPigLatin(const string& sentence) {
    istringstream stream(sentence); // Create a string stream for the input sentence
    string word;
    string pigLatinSentence;

    // Process each word in the sentence
    while (stream >> word) {
        // Convert the current word to Pig Latin and add it to the result
        pigLatinSentence += convertToPigLatin(word) + " ";
    }

    // Remove the trailing space and return the result
    if (!pigLatinSentence.empty()) {
        pigLatinSentence.pop_back();
    }

    return pigLatinSentence;
}

int main() {
    string sentence;

    // Prompt the user for input
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    // Convert the sentence to Pig Latin
    string pigLatinSentence = convertSentenceToPigLatin(sentence);

    // Display the result
    cout << "The sentence in Pig Latin is: " << pigLatinSentence << endl;

    return 0;
}

