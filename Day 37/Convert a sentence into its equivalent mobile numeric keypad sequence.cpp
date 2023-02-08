string printSequence(string S){
  
    vector<string>s={"2","22","222","3","33","333","4","44","444","5","55","555",
        "6","66","666","7","77","777","7777","8","88","888","9","99","999","9999"};
        
        string res;
        for(int i=0;i<S.length();i++){
            if(S[i]==' ')
                res += '0';
            else
                res += s[S[i]-'A'];
        }
        return res;
}
