let arr = [[1,2,3],[4,5,6],[7,8,9]]
let pd =0;
let sd =0;
for(let i =0;i<arr.length;i++){
  let n = ""
  for(let j=0;j<arr[i].length;j++){
    if(i===j){
      pd += arr[i][j]
    }else if(i+j ===arr.length -1){
      sd += arr[i][j];
    }
  }
}
 pd =0;
 sd =0;

for(let i =0;i<arr.length;i++){
  pd+= arr[i][i]
  sd+=arr[i][arr.length-1-i]
}
console.log(pd,sd)


