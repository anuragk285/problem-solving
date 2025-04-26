# Find common response

```c++
class node{
public:
    string response;
    int votes =0;
    node *next = NULL;
};

class Solution {
public:
    void delete_duplicates(vector<vector<string>> &responses){
        
        for(int i=0; i<responses.size(); i++){
            
            for(int j=0; j<responses[i].size(); j++){
                
                for(int k = j+1; k<responses[i].size(); k++){
                    
                    if(responses[i][j] == responses[i][k]) responses[i].erase(responses[i].begin() + k), k--;
                }
            }
        }
    }

    bool is_present(node *first, string s){

        node *p = first;

        while(p!=NULL){

            if(p->response == s) return true;

            p = p->next;
        }

        return false;
    }

    void addVote(node *first, string s){

        node *p = first;

        while(p ? p->response != s : false) p = p->next;

        if(!p) return;

        p->votes++;
    }

    string lexico_sml(string s, string t){

        return s < t ? s : t;
    }
    
    string findCommonResponse(vector<vector<string>>& responses) {

        delete_duplicates(responses);
        
        node *first, *last, *p;

        first = NULL;
        last = first;

        for(int i=0; i<responses.size(); i++){

            for(int j=0; j<responses[i].size(); j++){

                if(is_present(first, responses[i][j])) addVote(first, responses[i][j]);

                else{

                    if(first == NULL){

                        first = new node;
                        first->votes = 1;
                        first->response = responses[i][j];
                        last = first;
                    }
                    else{
                        node *t = new node;
                        t->response = responses[i][j];
                        t->votes = 1;
                        t->next = NULL;
                        last->next = t;
                        last = t;
                    }
                }
            }        
        }
        if(first == NULL) return "";
        string ans = first->response;
        int max = first->votes;
            
        p = first;

        while(p){

            if(p->votes > max) max = p->votes, ans = p->response;

            else if(p->votes == max) ans = lexico_sml(ans, p->response);

            p=p->next;
        }
        return ans;
    }
};
```
