std::string tickets(const std::vector<int> peopleInLine){
  int count[2] = {0,0};
  for(auto v: peopleInLine) {
    if(v == 25) count[0]++;
    if(v == 50) {count[1]++; count[0]--;}
    if(v == 100) {count[0]--; count[1]>0? count[1]-- : count[0]-=2;}
    if(count[0]<0||count[1]<0) return "NO";
  }
  return "YES";
}