class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> words(wordList.begin(), wordList.end());
        if ( words.empty() || words.find(endWord) == words.end() ) return 0;
        words.erase(beginWord);
        queue<string> que;
        que.push(beginWord);
        unordered_set<string> visited;
        visited.insert(beginWord);
        int step = 1;
        while ( !que.empty() ) {
            int n = que.size();
            while ( n-- ) {
                string curWord = que.front();
                que.pop();
                for ( int i = 0; i < curWord.size(); ++i ) {
                    char originalChar = curWord[i];
                    for ( int j = 0; j < 26; ++j ) {
                        if ( char('a' + j) == originalChar ) continue;
                        curWord[i] = (char)('a' + j);
                        if ( words.find(curWord) != words.end() && visited.find(curWord) == visited.end() ) {
                            if ( curWord == endWord ) return step + 1;
                            else {
                                que.push(curWord);
                                visited.insert(curWord);
                            }
                        }
                    }
                    curWord[i] = originalChar;
                }
            }
            ++step;
        }
        return 0;
    }
};
