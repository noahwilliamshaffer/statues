int makeArrayConsecutive2(std::vector<int> statues) {
    int limit = statues.size();
    int max;
    int min;
    int i;
    int sum;
    
     
    for ( i = 0; i <= limit-1; i++){
       if (i == 0){
       min = statues[i];
       max = statues[i];}
       
          if (min >= statues[i]){
             min = statues[i];}
             
          if (max <= statues [i]){
             max = statues[i];}
         
    }
    
    int difference = max - min;
    
    for (int j = min; j < max; j++){
     for ( i = 0; i <= limit-1; i++){
         if (statues[i]==j){
             difference--;
             break;
         }
     }    
    }
  return difference;
}
