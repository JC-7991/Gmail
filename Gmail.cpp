#include <bits/stdc++.h>

bool end_with(std::string& s){

  std::string t = "@gmail.com";

  if(s.size() < t.size()){
    return false;
  }
  
  for(int i = s.size() - 1, j = t.size() - 1; i >= 0 && j >= 0; --i, --j){

    if(s[i] != t[j]){
      return false;
    }
    
  }
  
  return true;

}

int main(){

  int N;
  std::cin >> N;
  
  std::vector<std::string> ans;
  
  for(int a0 = 0; a0 < N; a0++){
    
    std::string firstName;
    std::string emailID;
    std::cin >> firstName >> emailID;

    if(end_with(emailID)){
      ans.push_back(firstName);
    }
          
  }

  sort(ans.begin(), ans.end());

  for(int i = 0; i < ans.size(); ++i){
    std::cout << ans[i] << "\n";
  }
  
  return 0;

}