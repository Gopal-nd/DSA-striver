function breakingRecords(scores) {
    let minValue = scores[0],minC =0 ,maxValue =scores[0], maxC =0;
    for(let l = 0 ;l<scores.length;l++){
     if(scores[l]> maxValue){
        maxC++;
        maxValue = scores[l];
     }   
      if(scores[l]<minValue){
        minC++;
        minValue = scores[l];
     } 
    }
    
   return [maxC ,minC ]
}

