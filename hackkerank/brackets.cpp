#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
    int  len=s.size();
    vector<char> b;
    for(int i=0;i<len;++i)
    {
        switch(s[i]){
            case '{':
                b.push_back(s[i]);
                break;
            case '[':
                b.push_back(s[i]);
                break;
            case '(':
                b.push_back(s[i]);
                break;
            case '}':
                if(b.back()=='{')
                    b.pop_back();
                else
                    return "NO";
                break;
            case ']':
                if(b.back()=='[')
                    b.pop_back();
                else
                    return "NO";
                break;
            case ')':
                if(b.back()=='(')
                    b.pop_back();
                else
                    return "NO";
                break;
                
        }
    }
        
    
    if(!b.empty()){
        return "NO";
    }
    else
        return "YES";

}

int main()
{
    // ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        cin>>s;
        // getline(cin, s);

        string result = isBalanced(s);

        cout << result << "\n";
    }

    // fout.close();

    return 0;
}
