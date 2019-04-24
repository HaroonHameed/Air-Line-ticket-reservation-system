#include <iostream>
#include <stdio.h>
#include <string>
#include "queue.h"
using namespace std;

queue q;
struct TrieNode 
{ 
    struct TrieNode *children[26]; 
    bool isEndOfWord; 
}; 
  

struct TrieNode *getNode(void) 
{ 
    struct TrieNode *pNode =  new TrieNode; 
  
    pNode->isEndOfWord = false; 
  
    for (int i = 0; i < 26; i++) 
        pNode->children[i] = NULL; 
  
    return pNode; 
} 
  
void insert(struct TrieNode *root, string key) 
{ 
    struct TrieNode *pCrawl = root; 
  
    for (int i = 0; i < (key.length()); i++) 
    { 
        int index = key[i] - 'a'; 
        if (pCrawl->children[index]==NULL) 
            pCrawl->children[index] = getNode(); 
  
        pCrawl = pCrawl->children[index]; 
    } 
   
    pCrawl->isEndOfWord = true; 
} 
  

bool search(struct TrieNode *root, string key) 
{ 
    struct TrieNode *pCrawl = root; 
  
    for (int i = 0; i < (key.length()); i++) 
    { 
        int index = key[i] - 'a'; 
        if (!pCrawl->children[index]) 
            return false; 
  
        pCrawl = pCrawl->children[index]; 
    } 
  
    return (pCrawl != NULL && pCrawl->isEndOfWord); 
} 
bool isLastNode(struct TrieNode* root) 
{ 
    for (int i = 0; i < 26; i++) 
        if (root->children[i]) 
            return 0; 
    return 1; 
}
void suggestionsRec(struct TrieNode* root, string curPrefix) 
{ 

    if (root->isEndOfWord) 
    { 
       
		q.Enqueue(curPrefix);
        cout << endl; 
    } 
  
 
    if (isLastNode(root)) 
        return; 
  
    for (int i = 0; i < 26; i++) 
    { 
        if (root->children[i]) 
        { 
             curPrefix+=(97 + i); 
  
             
            suggestionsRec(root->children[i], curPrefix); 
        } 
    } 
}
int prefix(TrieNode* root, const string query) 
{ 
    TrieNode* pCrawl = root; 
  

    int level; 
    int n = query.length(); 
    for (level = 0; level < n; level++) 
    { 
        int index = (query[level])-97; 
  

        if (!pCrawl->children[index]) 
            return 0; 
  
        pCrawl = pCrawl->children[index]; 
    } 
  
 
    bool isWord = (pCrawl->isEndOfWord == true); 
 
    bool isLast = isLastNode(pCrawl); 
  
    if (isWord && isLast) 
    { 
        //cout << query << endl;
		q.Enqueue(query);
        return -1; 
    } 
  

    if (!isLast) 
    { 
        string prefix = query; 
        suggestionsRec(pCrawl, prefix); 
        return 1; 
    } 
} 