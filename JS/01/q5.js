var a = 45;
var b = 72;
var c = 63;

var largest;
if (a >= b && a >= c) {
  largest = a;
} else if (b >= a && b >= c) {
  largest = b;
} else {
  largest = c;
}

console.log("Largest number is:", largest);
