function processInput(input) {
  const [operation, type, text] = input.split(";");

  if (operation === "S") {
    // SPLIT operation
    let words = text.replace(/\(\)$/, "") // Remove () if method
      .split(/(?=[A-Z])/); // Split before uppercase letters
    console.log(words.join(" ").toLowerCase());
  } else if (operation === "C") {
    // COMBINE operation
    let words = text.split(" "); // Split words by space
    let camelCase = words.map((word, index) =>
      index === 0 && type !== "C"
        ? word.toLowerCase()
        : word[0].toUpperCase() + word.slice(1).toLowerCase()
    ).join("");

    if (type === "M") camelCase += "()"; // Add () for method
    console.log(camelCase);
  }
}

// Sample Test Cases
const inputs = [
  "S;M;plasticCup()",
  "C;V;mobile phone",
  "C;C;coffee machine",
  "S;C;LargeSoftwareBook",
  "C;M;white sheet of paper",
  "S;V;pictureFrame",
];

inputs.forEach((input) => processInput(input));
