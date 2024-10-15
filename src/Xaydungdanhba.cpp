#include <iostream>
#include <unordered_map>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

class Trie {
private:
    struct TrieNode {
        unordered_map<char, TrieNode*> children;
        bool isEndOfWord;
        int count;

        TrieNode() : isEndOfWord(false), count(0) {}
    };

    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* current = root;
        for (char ch : word) {
            if (current->children.find(ch) == current->children.end()) {
                current->children[ch] = new TrieNode();
            }
            current = current->children[ch];
            current->count++;
        }
        current->isEndOfWord = true;
    }

    int findPrefixCount(string prefix) {
        TrieNode* current = root;
        for (char ch : prefix) {
            if (current->children.find(ch) == current->children.end()) {
                return 0;
            }
            current = current->children[ch];
        }
        return current->count;
    }
};

int main() {
 fastIO
    int n;
    cin >> n;
    Trie trie;

    while (n--) {
        string operation, contact;
        cin >> operation >> contact;
        if (operation == "add") {
            trie.insert(contact);
        } else if (operation == "find") {
            cout << trie.findPrefixCount(contact) << "\n";
        }
    }

    return 0;
}