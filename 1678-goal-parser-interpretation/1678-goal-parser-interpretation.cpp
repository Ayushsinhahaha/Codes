class Solution {
public:
    string interpret(string command) {
        string ans="";
        for(int i=0;command[i]!='\0';i++)
        {
            if(command[i]=='G')
                ans+='G';
            else if((command[i]=='(')&&(command[i+1]==')'))
                ans+='o';
            else if((command[i]=='(')&&(command[i+1]=='a')&&(command[i+2]=='l')&&(command[i+3]==')'))
            {   ans+='a';
                ans+='l';
             }
        }
        return ans;
    }
};