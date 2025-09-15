class Solution {
public:
    bool containsBrokenLetter(string word, string brokenLetters) {
        for (int i = 0; i < word.length(); i++) {
            for (int j = 0; j < brokenLetters.length(); j++) {
                if (word[i] == brokenLetters[j]) {
                    return true;
                }
            }
        }
        return false;
    }

    int canBeTypedWords(string text, string brokenLetters) {
        vector<string> words;
        string temp = "";

        for (int i = 0; i < text.length(); i++) {
            if (text[i] == ' ') {
                words.push_back(temp);
                temp = "";
            } else {
                temp = temp + text[i];
            }
        }
        words.push_back(temp); // last word

        int count = 0;
        for (int i = 0; i < words.size(); i++) {
            if (!containsBrokenLetter(words[i], brokenLetters)) {
                count++;
            }
        }
        return count;
    }
};
