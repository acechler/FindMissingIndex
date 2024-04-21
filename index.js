const readline = require('readline').createInterface({
  input: process.stdin,
  output: process.stdout
});

const values = [];

readline.question("Enter a sequence of values: ", (input) => {

  const numbers = input.split(' ');

  // Move input to numberArr
  numbers.forEach(value => {
    const number = Number(value.trim()); 
    if (!isNaN(number)) {
      values.push(number);
    }
  });
  readline.close(); // close stream

  let missingValue = 0;
  // Sort Array
  values.sort();
  for(let i = 0; i < values.length; i++){
    // Check for missing index
    if(values.at(i) === i){
      /// Test Condition Statement
      // console.log(`${values.at(i)} === ${i}`);
      missingValue = i + 1;
    }
  }
  console.log(`Missing Index: ${missingValue}`);
  values.forEach(value => {
    console.log(value);
  });
});

