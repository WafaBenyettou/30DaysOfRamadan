/******************************* ITC **************************/
let T = parseInt(ReadLine());

for (var i = 0; i < T; i++) {
  let x = ReadLine().split(" ");
  let n = parseInt(x[0]);
  let k = parseInt(x[1]);
  let y = ReadLine().split(" ");
  let cpt = 0;
  for (let j = 0; j < n; j++) {
    k < parseInt(y[j]) ? (cpt += 1) : (cpt += 0);
  }
  console.log(cpt);
}

/******************************* ITC **************************/
