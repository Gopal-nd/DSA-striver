function timeConversion(s) {
  let [hours, minutes, seconds] = s.slice(0, 8).split(":");
  let period = s.slice(-2);

  if (period === "PM" && hours !== "12") {
    hours = String(Number(hours) + 12);
  } else if (period === "AM" && hours === "12") {
    hours = "00";
  }

  return `${hours}:${minutes}:${seconds}`;
}

// Sample Input
console.log(timeConversion("07:05:45PM")); // Output: "19:05:45"
console.log(timeConversion("12:01:00PM")); // Output: "12:01:00"
console.log(timeConversion("12:01:00AM")); // Output: "00:01:00"
